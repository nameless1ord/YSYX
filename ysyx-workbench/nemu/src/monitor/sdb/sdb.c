/***************************************************************************************
* Copyright (c) 2014-2022 Zihao Yu, Nanjing University
*
* NEMU is licensed under Mulan PSL v2.
* You can use this software according to the terms and conditions of the Mulan PSL v2.
* You may obtain a copy of Mulan PSL v2 at:
*          http://license.coscl.org.cn/MulanPSL2
*
* THIS SOFTWARE IS PROVIDED ON AN "AS IS" BASIS, WITHOUT WARRANTIES OF ANY KIND,
* EITHER EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO NON-INFRINGEMENT,
* MERCHANTABILITY OR FIT FOR A PARTICULAR PURPOSE.
*
* See the Mulan PSL v2 for more details.
***************************************************************************************/

#include <isa.h>
#include <cpu/cpu.h>
#include <readline/readline.h>
#include <readline/history.h>
#include "sdb.h"

static int is_batch_mode = false;

void init_regex();
void init_wp_pool();

/* We use the `readline' library to provide more flexibility to read from stdin. */
static char* rl_gets() {
  static char *line_read = NULL;

  if (line_read) {
    free(line_read);
    line_read = NULL;
  }

  line_read = readline("(nemu) ");

  if (line_read && *line_read) {
    add_history(line_read);
  }

  return line_read;
}

static int cmd_c(char *args) {
  cpu_exec(-1);
  return 0;
}


static int cmd_q(char *args) {
  return -1;
}

static int cmd_si(char *args) {
  int N = 1;      //默认值为1

  if (args) {
    sscanf(args, "%d", &N);
    // sscanf 是 C 语言中的一个函数，用于从字符串中读取格式化输入。在您给出的代码片段中，sscanf 用于尝试从 args 字符串中读取一个整数，并将其存储在变量 N 中。
    // 如果 args 包含 "123abc"，那么在执行上述代码后，N 的值将是 123。如果 args 不包含有效的整数，那么 N 的值将不会改变。
    if (N <= 0) {  //确保N是一个正数
      N = 1;
    }
  }

  cpu_exec(N);       //执行N步
  return 0;
}

static int cmd_info(char *args) {
  if (args)
  {
    if (strcmp(args, "r") == 0) {
      int size = sizeof(cpu.gpr) / sizeof(cpu.gpr[0]);
      for (int i = 0; i < size; i++)
      {
        printf("The value of register %d is %d\n", i, cpu.gpr[i]);    //cpu.gpr为对应架构下的寄存器名
      }
    }
    else if (strcmp(args, "w") == 0)
    {
      /* code */
    }
    else
    {
      printf("Wrong command %s.\n", args);
    }
  }

  else
  printf("Need a command here.\n");


  return 0;
  
}

static int cmd_x(char *args) {
  if (args) {
    char *args_end = args + strlen(args);
    
    // Extract number of words to examine
    char *N_str = strtok(args, " ");
    if (!N_str) {
      printf("Number of words to examine not specified.\n");
      return 0;
    }
    int N = atoi(N_str);  // Convert string to integer

    // Extract expression to evaluate
    char *exp = N_str + strlen(N_str) + 1;
    if (exp >= args_end) {
      printf("Memory address expression not specified.\n");
      return 0;
    }
    int eval = evaluation(exp);  // Evaluate the expression to get the memory address

    for (int i = 0; i < N; i++) {
      // Read memory
      word_t mem_val = pmem_read(eval + i * sizeof(word_t), 1);
      printf(FMT_WORD "  ", mem_val);  // Print memory value using appropriate format
    }
    printf("\n");
  } else {
    printf("Need a command here.\n");
  }
  return 0;
}


static int cmd_help(char *args);

static struct {
  const char *name;
  const char *description;
  int (*handler) (char *);
} cmd_table [] = {
  { "help", "Display information about all supported commands", cmd_help },
  { "c", "Continue the execution of the program", cmd_c },
  { "q", "Exit NEMU", cmd_q },
  
  //  add new  
  { "si", "Execute the program step by step. Example: si 10", cmd_si },                                                 //单步执行，实现
  { "info", "Print program status. Examples: info r (打印寄存器状态), info w (打印监视点信息)", cmd_info },                  //信息打印，info r实现，info w未实现
  { "x", "Scan memory. Example: x 10 $esp (求出表达式的值，将结果作为起始内存地址，以十六进制形式输出连续的10个4字节)", cmd_x },    //内存打印，未检查是否实现

  /*
  { "p", "Evaluate the expression. Example: p $eax + 1 (表达式求值)", cmd_p },
  { "w", "Set a watchpoint. Example: w *0x2000 (当表达式值发生变化时，程序停止执行)", cmd_w },
  { "d", "Delete a watchpoint. Example: d 2 (删除序号为2的监视点)", cmd_d },
*/
  /* TODO: Add more commands */

};

#define NR_CMD ARRLEN(cmd_table)

static int cmd_help(char *args) {
  /* extract the first argument */
  char *arg = strtok(NULL, " ");
  int i;

  if (arg == NULL) {
    /* no argument given */
    for (i = 0; i < NR_CMD; i ++) {
      printf("%s - %s\n", cmd_table[i].name, cmd_table[i].description);
    }
  }
  else {
    for (i = 0; i < NR_CMD; i ++) {
      if (strcmp(arg, cmd_table[i].name) == 0) {
        printf("%s - %s\n", cmd_table[i].name, cmd_table[i].description);
        return 0;
      }
    }
    printf("Unknown command '%s'\n", arg);
  }
  return 0;
}

void sdb_set_batch_mode() {
  is_batch_mode = true;
}

void sdb_mainloop() {
  if (is_batch_mode) {
    cmd_c(NULL);
    return;
  }

  for (char *str; (str = rl_gets()) != NULL; ) {
    char *str_end = str + strlen(str);

    /* extract the first token as the command */
    char *cmd = strtok(str, " ");
    if (cmd == NULL) { continue; }

    /* treat the remaining string as the arguments,
     * which may need further parsing
     这行代码的目的是找到 cmd 后面的字符串的起始位置，即参数部分的开始。
     首先，它计算 cmd 的长度（strlen(cmd)），然后向前移动一个位置（+ 1），
     以跳过 cmd 之后的空格或分隔符。这样，args 就指向了参数的开始位置。
     这种处理是为了确保命令后面确实有参数。
     例如，如果用户只输入了一个命令（如 "help"）而没有任何参数，那么 args 会被设置为 NULL。
     */
    char *args = cmd + strlen(cmd) + 1;
    if (args >= str_end) {
      args = NULL;
    }

#ifdef CONFIG_DEVICE
    extern void sdl_clear_event_queue();
    sdl_clear_event_queue();
#endif

    int i;
    for (i = 0; i < NR_CMD; i ++) {
      if (strcmp(cmd, cmd_table[i].name) == 0) {
        if (cmd_table[i].handler(args) < 0) { return; }
        break;
      }
    }

    if (i == NR_CMD) { printf("Unknown command '%s'\n", cmd); }
  }
}

void init_sdb() {
  /* Compile the regular expressions. */
  init_regex();

  /* Initialize the watchpoint pool. */
  init_wp_pool();
}

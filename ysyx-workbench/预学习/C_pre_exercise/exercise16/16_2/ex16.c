#include <stdio.h>
#include <assert.h>
#include <stdlib.h>
#include <string.h>

struct Person {
    char *name;
    int age;
    int height;
    int weight;
};

void Person_print(struct Person who)
{
    printf("Name: %s\n", who.name);
    printf("\tAge: %d\n", who.age);
    printf("\tHeight: %d\n", who.height);
    printf("\tWeight: %d\n", who.weight);
}

int main(int argc, char *argv[])
{
    // make two people structures
		// 初始化结构体
    struct Person joe = {"Joe Alex", 32, 64, 140};
		// 栈上初始化
    struct Person frank;
		strcpy(frank.name, "Frank Blank");
		frank.age = 20;
		frank.weight = 72;
		frank.height = 180;

    // print them out and where they are in memory
    printf("Joe is at memory location %p:\n", &joe);
    Person_print(joe);

    printf("Frank is at memory location %p:\n", &frank);
    Person_print(frank);

    // make everyone age 20 years and print them again
    joe.age += 20;
    joe.height -= 2;
    joe.weight += 40;
    Person_print(joe);

    frank.age += 20;
    frank.weight += 20;
    Person_print(frank);

    // destroy them both so we clean up
		// 栈上结构体自动内存分配，调用结束后即销毁
	  //  Person_destroy(joe);
    // Person_destroy(frank);

    return 0;
}

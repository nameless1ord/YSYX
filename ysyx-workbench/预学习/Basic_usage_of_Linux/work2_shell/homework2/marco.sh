# marco 函数保存当前工作目录
# 运行命令source marco.sh加载函数
# 输入marco记录地址
# 输入polo跳回当前地址
marco() {
  export MARCO_DIR=$(pwd)
  echo "Current directory saved with marco."
}

# polo 函数返回到上次执行 marco 时保存的目录
polo() {
  if [ -n "$MARCO_DIR" ] && [ -d "$MARCO_DIR" ]; then
    cd "$MARCO_DIR"
    echo "Returned to the directory saved with marco."
  else
    echo "No directory saved with marco."
  fi
}


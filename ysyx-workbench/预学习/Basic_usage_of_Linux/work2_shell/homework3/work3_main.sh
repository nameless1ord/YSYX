# 运行程序work3_main.sh完成对work3_run.sh程序的循环调用，并将输出结果重定向至work3_output.log文件中
# 设置计数器
counter=0

# 清空日志文件
> "./work3_output.log"

# 循环脚本直至出错
while true; do
	((count++))
	# 2>&1：这部分用于将标准错误流（标识为 2）重定向到标准输出流（标识为 1），这样就可以同时记录标准输出和标准错误到同一个文件。
	./work3_run.sh >> "./work3_output.log" 
	if [[ $? -ne 0 ]]; then
    echo "Script encountered an error in run $count."
    break
  fi
done

# 输出记录文件
for ((i = 1;i < count; i++)); do
	echo "output for run $i:"
	if ((i != count - 1)); then 
		cat "./work3_output.log" | head -n $i | tail -n 1
	else
		cat "./work3_output.log" | tail -n 1
	fi
done




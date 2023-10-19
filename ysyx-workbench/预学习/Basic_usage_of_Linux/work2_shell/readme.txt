# homework2
运行命令
source marco.sh		# 调用函数
marco		#记录当前地址
polo		#跳转回记录地址

# homework3
运行命令
./work3_main.sh		# 调用work3_run.sh并将结果重定向到work3_output.log中

# homework4
运行命令
find ./ -type f -name "*.html" -print0 | xargs -0 zip html_all.zip
这个命令执行了以下操作：
    find /path/to/your/directory：递归地查找 /path/to/your/directory 文件夹及其子文件夹中的文件。
    -type f：仅匹配文件，不包括目录。
    -name "*.html"：仅匹配文件名以 .html 结尾的文件。
    -print0：使用空字符作为文件名分隔符，以处理文件名中包含空格等特殊字符的情况。
    xargs -0：使用空字符作为参数分隔符，以匹配 -print0 输出的格式。
    zip html_all.zip：使用 xargs 将找到的 HTML 文件传递给 zip 命令，并将它们压缩到名为html_all.zip 的文件中。

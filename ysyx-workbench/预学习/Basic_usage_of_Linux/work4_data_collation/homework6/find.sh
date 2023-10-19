#!/bin/bash

# 定义URL
URL="https://ucr.fbi.gov/crime-in-the-u.s/2016/crime-in-the-u.s.-2016/topic-pages/tables/table-1";

# 使用curl和pup获取第4列和第5列数据
curl -s "$URL" | pup 'table td:nth-of-type(4) text{}' > column4.txt
curl -s "$URL" | pup 'table td:nth-of-type(5) text{}' > column5.txt

# 计算第4列的最大值和最小值
awk 'NR==1{min=max=$1} $1<min{min=$1} $1>max{max=$1} END{print "min: " min, "max: " max}' column4.txt

# 计算两列之间的差的总和
paste column4.txt column5.txt | awk '{sum += ($1 - $2)} END {print "Sum of differences: " sum}'

# 清理临时文件
rm column4.txt column5.txt

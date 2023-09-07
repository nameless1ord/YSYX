#!/bin/bash

# 编译ex17.c文件
make ex17

# 运行测试命令行
echo "Running test 1:"
echo "Creating database"
./ex17 db.dat c 512 512
echo "-----------------"

echo "Running test 2:"
echo "Creating data"
./ex17 db.dat s 512 512 1 zed zed@zedshaw.com
echo "-----------------"


echo "Running test 3:"
echo "Creating data"
./ex17 db.dat s 512 512 2 frank frank@zedshaw.com
echo "-----------------"

echo "Running test 4:"
echo "Creating data"
./ex17 db.dat s 512 512 3 joe joe@zedshaw.com
echo "-----------------"

echo "Running test 5:"
echo "Data list"
./ex17 db.dat l 512 512
echo "-----------------"
# 可以添加更多的测试命令行

# 清理生成的可执行文件
# rm ex17

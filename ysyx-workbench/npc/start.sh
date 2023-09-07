###添加bash解释器
#!/bin/bash

### verilog convert to c++
verilator -cc ./vsrc/onoff_switch.v

## 构建仿真可执行文件
verilator -Wall --trace --cc ./vsrc/onoff_switch.v --exe onoff_switch_sim_main.cpp
### -Wall：打开所有C++警告
### --trace：使能波形tracing

### 将Vonoff_switch,cpp拷贝至obj_dir目录下
cp ./csrc/onoff_switch_sim_main.cpp ./obj_dir/

### 构建可执行文件
make -C ./obj_dir/ -f Vonoff_switch.mk ./Vonoff_switch

### 运行仿真
./obj_dir/Vonoff_switch

### 使用gtkwave查看波形
gtkwave waveform.vcd

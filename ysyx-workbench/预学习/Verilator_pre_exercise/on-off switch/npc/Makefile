VSRC = $(wildcard ./vsrc/onoff_switch.v)
CSRC = $(wildcard ./csrc/onoff_switch_sim_main.cpp)
all:
	@echo "Write this Makefile by your self."

sim:
	#### $(call git_commit, "sim RTL") # DO NOT REMOVE THIS LINE!!! 
 	#### 该行出现如下错误
	### flock: 不能打开锁文件 /../.git/: 没有那个文件或目录
	### 这里选用将整个YSYX文件夹做版本管理 
	@echo "Write this Makefile by your self."
	verilator -Wall $(VSRC) $(CSRC) --top-module onoff_switch --cc --trace --exe
	make -C ./obj_dir/ -f Vonoff_switch.mk ./Vonoff_switch
.PHONY:clean
	clean:
	rm -rf odj_dir waveform.vcd
include ../Makefile

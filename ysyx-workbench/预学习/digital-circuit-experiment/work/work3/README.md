# 示例工程

执行`make run`.

该示例的演示效果如下:
4位带符号位补码ALU
1. sw3-sw0为输入的第一个操作数
1. sw7-sw4为输入的第二个操作数
1. sw10-sw8为功能选择，其中
	000：加法 	A + B
	001：减法	A - B
	010：取反	not A
	011：与		A and B
	100：或		A or B
	101：异或	A xor B
	110：比较大小	A < B then out=1; else out=0;
	111：判断相等	A == B then out=1; else out=0;
1. 操作数输出为led3-led0
1. 比较大小与判断相等输出为led4、led5
1. carry led6, overflow led7

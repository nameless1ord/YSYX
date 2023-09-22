module seg(
  input clk,
  input rst,
  input blank,
  input [31:0] number,
  output [7:0] o_seg0,
  output [7:0] o_seg1,
  output [7:0] o_seg2,
  output [7:0] o_seg3,
  output [7:0] o_seg4,
  output [7:0] o_seg5,
  output [7:0] o_seg6,
  output [7:0] o_seg7
);

wire [7:0] segs [16:0];
assign segs[0]  = 8'b11111101;
assign segs[1]  = 8'b01100000;
assign segs[2]  = 8'b11011010;
assign segs[3]  = 8'b11110010;
assign segs[4]  = 8'b01100110;
assign segs[5]  = 8'b10110110;
assign segs[6]  = 8'b10111110;
assign segs[7]  = 8'b11100000;
assign segs[8]  = 8'b11111110;
assign segs[9]  = 8'b11110110;
assign segs[10] = 8'b11101110;    //input A
assign segs[11] = 8'b00111110;    //input B
assign segs[12] = 8'b10011100;    //input C
assign segs[13] = 8'b11111100;    //input D
assign segs[14] = 8'b10011110;    //input E
assign segs[15] = 8'b10001110;    //input F
assign segs[16] = 8'b00000000;    //blank


assign o_seg0 = ~blank ? ~segs[{1'b0, number[3:0]}]   :  ~segs[16];
assign o_seg1 = ~blank ? ~segs[{1'b0, number[7:4]}]   :  ~segs[16];
assign o_seg2 = ~blank ? ~segs[{1'b0, number[11:8]}]   :  ~segs[16];
assign o_seg3 = ~blank ? ~segs[{1'b0, number[15:12]}]   :  ~segs[16];
assign o_seg4 = ~blank ? ~segs[{1'b0, number[19:16]}]   :  ~segs[16];
assign o_seg5 = ~blank ? ~segs[{1'b0, number[23:20]}]   :  ~segs[16];
assign o_seg6 = ~segs[{1'b0, number[27:24]}];
assign o_seg7 = ~segs[{1'b0, number[31:28]}];

endmodule

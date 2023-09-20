module seg(
  input clk,
  input rst,
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

wire [7:0] segs [9:0];
assign segs[0] = 8'b11111101;
assign segs[1] = 8'b01100000;
assign segs[2] = 8'b11011010;
assign segs[3] = 8'b11110010;
assign segs[4] = 8'b01100110;
assign segs[5] = 8'b10110110;
assign segs[6] = 8'b10111110;
assign segs[7] = 8'b11100000;
assign segs[8] = 8'b11111111;
assign segs[9] = 8'b11110111;


reg [31:0] count;
reg [31:0] num [2:0];

assign num[0] = number % 10;
assign num[1] = (number / 10) % 10;
assign num[2] = number / 100;

assign o_seg0 = ~segs[num[0][3:0]];
assign o_seg1 = ~segs[num[1][3:0]];
assign o_seg2 = ~segs[num[2][3:0]];
assign o_seg3 = ~segs[0];
assign o_seg4 = ~segs[0];
assign o_seg5 = ~segs[0];
assign o_seg6 = ~segs[0];
assign o_seg7 = ~segs[0];

endmodule

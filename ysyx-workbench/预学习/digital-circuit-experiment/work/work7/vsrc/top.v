
module top (
    input clk,
    input rst,
    input [15:0] sw,
    input ps2_clk,
    input ps2_data,
    input [4:0] BTN,
    output [15:0] ledr,
    output VGA_CLK,
    output VGA_HSYNC,
    output VGA_VSYNC,
    output VGA_BLANK_N,
    output [7:0] VGA_R,
    output [7:0] VGA_G,
    output [7:0] VGA_B,
    output [7:0] seg0,
    output [7:0] seg1,
    output [7:0] seg2,
    output [7:0] seg3,
    output [7:0] seg4,
    output [7:0] seg5,
    output [7:0] seg6,
    output [7:0] seg7
);

/*
shifter shifter0(
    .clk(BTN[0]),
    .rst(rst),
    .x(sw[7:0]),
    .y(shifter_out),
    .en(sw[8])
);


led led0(
    .clk(clk),
    .rst(rst),
    .y(sw[8]),
    .ledr(ledr)
);

*/



/*
assign VGA_CLK = clk;

wire [9:0] h_addr;
wire [9:0] v_addr;
wire [23:0] vga_data;

vga_ctrl my_vga_ctrl(
    .pclk(clk),
    .reset(rst),
    .vga_data(vga_data),
    .h_addr(h_addr),
    .v_addr(v_addr),
    .hsync(VGA_HSYNC),
    .vsync(VGA_VSYNC),
    .valid(VGA_BLANK_N),
    .vga_r(VGA_R),
    .vga_g(VGA_G),
    .vga_b(VGA_B)
);
*/
ps2_keyboard my_keyboard(
    .clk(clk),
    .resetn(~rst),
    .ps2_clk(ps2_clk),
    .ps2_data(ps2_data),
    .reg_en(reg_en),
    .to_reg(to_reg)
);

// outports wire
wire reg_en;
wire [7:0]  count_num;
wire [7:0]  to_reg;
wire [7:0]  last2_reg_in;
counter counter0(
    .reg_en(reg_en),
    .reg_in(to_reg),
    .rst(rst),
    .count_num(count_num),
    .last2_reg_in(last2_reg_in)
);

// outports wire
wire [7:0] 	asciiCode;

KeyboardLUT KeyboardLUT0(
    .scanCode(to_reg),
    .extKeyboard(1'b1),
    .numLock(1'b1),
    .asciiCode(asciiCode)
);


wire [31:0] seg_in;
wire blank;

assign blank = (last2_reg_in == 8'hF0);
assign seg_in = {count_num, 4'b0, asciiCode, 4'b0, to_reg};

seg mu_seg(
    .clk(clk),
    .rst(rst),
    .blank(blank),
    .number(seg_in),
    .o_seg0(seg0),
    .o_seg1(seg1),
    .o_seg2(seg2),
    .o_seg3(seg3),
    .o_seg4(seg4),
    .o_seg5(seg5),
    .o_seg6(seg6),
    .o_seg7(seg7)
);
/*
vmem my_vmem(
    .h_addr(h_addr),
    .v_addr(v_addr[8:0]),
    .vga_data(vga_data)
);

endmodule

module vmem (
    input [9:0] h_addr,
    input [8:0] v_addr,
    output [23:0] vga_data
);

reg [23:0] vga_mem [524287:0];

initial begin
    $readmemh("resource/picture.hex", vga_mem);
end

assign vga_data = vga_mem[{h_addr, v_addr}];
*/
endmodule

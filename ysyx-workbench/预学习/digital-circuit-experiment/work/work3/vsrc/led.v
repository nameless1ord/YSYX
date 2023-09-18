module led(
  input clk,
  input rst,
  input [7:0] y,
  output [15:0] ledr
);


  assign ledr = {8'b0, y};
endmodule

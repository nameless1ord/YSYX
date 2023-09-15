module led(
  input clk,
  input rst,
  input [2:0] y,
  output [15:0] ledr
);


  assign ledr = {13'b0, y};
endmodule

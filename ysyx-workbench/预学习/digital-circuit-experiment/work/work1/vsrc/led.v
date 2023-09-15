module led(
  input clk,
  input rst,
  input [1:0] y,
  output [15:0] ledr
);


  assign ledr = {14'b0, y};
endmodule

module led(
  input clk,
  input rst,
  input y,
  output [15:0] ledr
);


  assign ledr = {15'b0, y};
endmodule

module mux4_2(
  input [9:0] a,
  output [1:0] y
);

  MuxKey #(4, 2, 2) i0 (y, a[1:0], {
    2'b00, a[3:2], //input1
    2'b01, a[5:4], //input2
    2'b10, a[7:6], //input3
    2'b11, a[9:8]  //input4
  });

endmodule
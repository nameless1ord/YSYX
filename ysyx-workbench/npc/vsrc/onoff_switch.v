module onoff_switch(
  input a,
  input b,
  output f
);
  assign f = a ^ b;
endmodule


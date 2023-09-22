module ALU(
  input [3: 0] op1,
  input [3: 0] op2,
  input [2: 0] opcode,
  output reg [3: 0] out,
  output overflow,
  output carry,
  output compare, equal
);
  wire [3: 0] out0, out1, out2, out3, out4, out5; 
  wire out6, out7;
  wire carry0,carry1;
always @(*) begin
  case(opcode)
    3'b000 : out = out0;    //add
    3'b001 : out = out1;    //subtract
    3'b010 : out = out2;    //not
    3'b011 : out = out3;    //and
    3'b100 : out = out4;    //or
    3'b101 : out = out5;    //xor
    3'b110 : out = 4'b0;    //compare op1 < op2, then 1, else 0
    3'b111 : out = 4'b0;    //equal op1 == op2, then 1, else 0
  endcase

end
  assign carry = 
      (opcode == 3'b0) ? carry0  :
      (opcode == 3'b1) ? carry1  :
      0;
  assign {carry0, out0} = (opcode == 3'b000) ? op1 + op2 : 5'b0;                      //add
  assign {carry1, out1} = (opcode == 3'b001) ? op1 + ({1'b0, ~op2} + 5'b1) : 5'b0;    //subtract
  assign out2 = ~op1;                              //not
  assign out3 = op1 & op2;                         //and
  assign out4 = op1 | op2;                         //or
  assign out5 = op1 ^ op2;                         //xor
  assign out6 = (op1 < op2);                       //compare
  assign out7 = (op1 == op2);                      //equal

  assign compare = (opcode == 3'b110) ? out6 : 0;
  assign equal = (opcode == 3'b111) ? out7 : 0;
  assign overflow = 
      (opcode == 3'b000) ? (op1[3] & op2[3] & ~out[3]) | (~op1[3] & ~op2[3] & out[3])  :
      (opcode == 3'b001) ? (op1[3] & ~op2[3] & ~out[3]) | (~op1[3] & op2[3] & out[3])  :
      0;
endmodule
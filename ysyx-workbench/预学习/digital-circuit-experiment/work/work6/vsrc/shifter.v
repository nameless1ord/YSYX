module shifter (      // Linear-feedback shift register 
  input clk, rst,
  input en,
  input [7: 0] x,
  output reg [7: 0] y
);
reg y8;
  always @(posedge clk or negedge rst) begin
    if(rst) begin
        y = 8'b0;
    end
    else begin
        if (en == 0) begin
            y8 = y[4] ^ y[3] ^ y[2] ^ y[0];
            y = {y8, y[7:1]};
        end
        else begin
            y = x;
        end
    end
  end
endmodule
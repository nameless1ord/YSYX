module counter (
  input reg_en,
  input [7:0] reg_in,
  input rst,
  output reg [7:0] count_num,
  output reg [7:0] last2_reg_in
);
reg [7:0] last_reg_in;
reg inv;
  always @(posedge reg_en or negedge rst) begin
    if(rst) begin
        last_reg_in <= 8'b0;
        count_num <= 8'b0;
        inv <= 1'b0;
        last2_reg_in <= 8'b0;
    end
    else begin
      //$display("reg_en: %x\nreg_in: %x\nlast_reg_in: %x\n", reg_en, reg_in, last_reg_in);
      if (reg_en & reg_in!= last_reg_in & reg_in != 8'hF0) begin
        if(~inv)   count_num <= count_num + 1;
        inv <= ~inv;
      end
      last_reg_in <= reg_in;
      last2_reg_in <= last_reg_in;
    end
  end
endmodule
module ps2_keyboard(clk,resetn,ps2_clk,ps2_data,reg_en,to_reg);
    input clk,resetn,ps2_clk,ps2_data;
    output reg reg_en;
    output reg [7:0] to_reg;      //仅考虑扫描玛两个16进制数的情况
    reg [9:0] buffer;        // ps2_data bits
    reg [3:0] count;  // count ps2_data bits
    reg [2:0] ps2_clk_sync;

    always @(posedge clk) begin
        ps2_clk_sync <=  {ps2_clk_sync[1:0],ps2_clk};     //状态机采样
    end

    wire sampling = ps2_clk_sync[2] & ~ps2_clk_sync[1];

    always @(posedge clk) begin
        if (resetn == 0) begin // reset
            count <= 0;
            reg_en <= 0;
        end
        else begin
            if (sampling) begin
              if (count == 4'd10) begin
                if ((buffer[0] == 0) &&  // start bit
                    (ps2_data)       &&  // stop bit
                    (^buffer[9:1])) begin      // odd  parity
                    //$display("receive %x", buffer[8:1]);
                    reg_en <= 1'b1;
                    to_reg <= buffer[8:1];
                    //$display("reg_en: %x\n", reg_en);
                end
                count <= 0;     // for next
              end 
              else begin
                buffer[count] <= ps2_data;  // store ps2_data
                count <= count + 3'b1;
                //$display("count: %x\nreg_en: %x\n", count, reg_en);
                reg_en <= 1'b0;
              end
            end
        end
        
    end

endmodule
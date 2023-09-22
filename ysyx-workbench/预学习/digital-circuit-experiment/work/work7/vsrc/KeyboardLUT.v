module KeyboardLUT(
    input [7:0] scanCode,
    input extKeyboard,
    input numLock,
    output reg [7:0] asciiCode
);

    // LUT for scan code to ASCII conversion
    reg [7:0] lut [0:255];

    // Initialize the lookup table
    initial begin
        // Initialize all entries to 0
        for (int i = 0; i < 256; i = i + 1) begin
            lut[i] = 8'h00;
        end
        
        // Add entries for scan code to ASCII mapping
        // Regular keyboard mappings
        lut[8'h1C] = 8'h61; // 'a'
        lut[8'h1D] = 8'h62; // 'b'
        lut[8'h1E] = 8'h63; // 'c'
        lut[8'h1F] = 8'h64; // 'd'
        lut[8'h20] = 8'h65; // 'e'
        lut[8'h21] = 8'h66; // 'f'
        lut[8'h22] = 8'h67; // 'g'
        lut[8'h23] = 8'h68; // 'h'
        lut[8'h24] = 8'h69; // 'i'
        lut[8'h25] = 8'h6A; // 'j'
        lut[8'h26] = 8'h6B; // 'k'
        lut[8'h27] = 8'h6C; // 'l'
        lut[8'h28] = 8'h6D; // 'm'
        lut[8'h29] = 8'h6E; // 'n'
        lut[8'h2A] = 8'h6F; // 'o'
        lut[8'h2B] = 8'h70; // 'p'
        lut[8'h2C] = 8'h71; // 'q'
        lut[8'h2D] = 8'h72; // 'r'
        lut[8'h2E] = 8'h73; // 's'
        lut[8'h2F] = 8'h74; // 't'
        lut[8'h30] = 8'h75; // 'u'
        lut[8'h31] = 8'h76; // 'v'
        lut[8'h32] = 8'h77; // 'w'
        lut[8'h33] = 8'h78; // 'x'
        lut[8'h34] = 8'h79; // 'y'
        lut[8'h35] = 8'h7A; // 'z'
        lut[8'h39] = 8'h20; // Space
        lut[8'h1A] = 8'h5B; // '['
        lut[8'h1B] = 8'h5D; // ']'
        lut[8'h27] = 8'h27; // '
        lut[8'h28] = 8'h3B; // ;
        lut[8'h29] = 8'h27; // '
        lut[8'h2B] = 8'h5C; // '\'
        lut[8'h33] = 8'h2C; // ,
        lut[8'h34] = 8'h2E; // .
        lut[8'h35] = 8'h2F; // /
        lut[8'h27] = 8'h60; // `
        lut[8'h1A] = 8'h7B; // {
        lut[8'h1B] = 8'h7D; // }
        lut[8'h2B] = 8'h7C; // |
        lut[8'h33] = 8'h3C; // <
        lut[8'h34] = 8'h3E; // >
        lut[8'h35] = 8'h3F; // ?
        lut[8'h0E] = 8'h08; // Backspace
        lut[8'h0F] = 8'h09; // Tab
        lut[8'h1C] = 8'h0A; // Enter
        lut[8'h01] = 8'h1B; // Escape


        lut[8'h3A] = 8'h00; // Caps Lock
        lut[8'h45] = 8'h00; // Num Lock
        
        // Extended keyboard mappings
        if (extKeyboard) begin
            lut[8'h1C] = 8'h0A; // Enter
            lut[8'h1D] = 8'h1B; // Escape
            lut[8'h35] = 8'h2F; // /
            lut[8'h37] = 8'h2A; // *
            lut[8'h47] = 8'h7F; // Home
            lut[8'h48] = 8'h1C; // Up Arrow
            lut[8'h49] = 8'h08; // Page Up
            lut[8'h4B] = 8'h1D; // Left Arrow
            lut[8'h4D] = 8'h1B; // Right Arrow
            lut[8'h4F] = 8'h04; // End
            lut[8'h50] = 8'h0A; // Down Arrow
            lut[8'h51] = 8'h02; // Page Down
            lut[8'h52] = 8'h00; // Insert
            lut[8'h53] = 8'h7F; // Delete
        end
        
        // Numeric keypad mappings
        if (numLock) begin
            lut[8'h47] = 8'h37; // 7
            lut[8'h48] = 8'h38; // 8
            lut[8'h49] = 8'h39; // 9
            lut[8'h4B] = 8'h34; // 4
            lut[8'h4C] = 8'h35; // 5
            lut[8'h4D] = 8'h36; // 6
            lut[8'h4F] = 8'h31; // 1
            lut[8'h50] = 8'h32; // 2
            lut[8'h51] = 8'h33; // 3
            lut[8'h52] = 8'h30; // 0
            lut[8'h53] = 8'h2E; // .
        end
    end

    // Output the ASCII code based on the scan code input
    always @(*) begin
        asciiCode = lut[scanCode];
    end

endmodule
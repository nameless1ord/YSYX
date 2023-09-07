// DESCRIPTION: Verilator: Verilog Test module
//
// This file ONLY is placed under the Creative Commons Public Domain, for
// any use, without warranty, 2023 by Wilson Snyder.
// SPDX-License-Identifier: CC0-1.0

interface class Icls;
endclass

module t (/*AUTOARG*/);
   Icls c;
   initial begin
      c = new;  // Bad
      $write("*-* All Finished *-*\n");
      $finish;
   end
endmodule

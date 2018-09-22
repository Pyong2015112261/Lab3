`timescale 1ns / 1ps

module bit_scan_reverse(input [3:0] bitInput, output reg [1:0] Z);
	always @(bitInput)
  begin
	Z[1] <= bitInput[2] | bitInput[3];
	Z[0] <= bitInput[3] | bitInput[1] & ~bitInput[2];
	
  end
  
endmodule

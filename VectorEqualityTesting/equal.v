`timescale 1ns / 1ps

module equal(input a, b, output z);
	assign z = (~a & ~b) | (a & b);
endmodule

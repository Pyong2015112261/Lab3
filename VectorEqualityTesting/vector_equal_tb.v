`timescale 1ns / 1ps


module vector_equal_tb;


	reg [31:0] a;
	reg [31:0] b;

	wire [3:0] z;

	vector_equal uut (
		.a(a),
		.b(b),
		.z(z)
	);

	initial begin
	
		a = 32'b10101010101110111100110011011101;
		b = 32'b10101010000100011100110011011101;
		#10
		a = 32'b10101010101110111100110011011101;
		b = 32'b00000000000100011100110011011101;
		#10
		a = 32'b10101010101110111100110000000000;
		b = 32'b00000000000100011100110011011101;
	end
   initial begin
		$monitor("vector_equal(0x%h,0x%h) = 0b%b",a,b,z);
	end
endmodule


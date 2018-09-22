`timescale 1ns / 1ps



module equal8_tb;

	// Inputs
	reg [7:0] a;
	reg [7:0] b;

	// Instantiate the Unit Under Test (UUT)
	equal8bit uut (
		.a(a),
		.b(b),
		.z(z)
	);

	initial begin
        
		// Add stimulus here
		a = 8'b10000000;
		b = 8'b10000000;
		#10
		a = 8'b10100000;
		b = 8'b10100000;
		#10
		a = 8'b10110000;
		b = 8'b10110000;
		#10
		a = 8'b10010000;
		b = 8'b10000000;
		#10
		a = 8'b10010000;
		b = 8'b10000000;
		#10
		a = 8'b10010000;
		b = 8'b10000001;
		#10
		a = 8'b10010010;
		b = 8'b10010010;
		#10
		a = 8'b00000000;
		b = 8'b00000000;
		
		
	end
	
	initial begin
		$monitor("isEqual a = %b & b = %b: %b",a,b,z);
	end
      
endmodule


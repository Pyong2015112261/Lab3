`timescale 1ns / 1ps


module bit_scan_reverse2_tb;


	reg [0:3] bitInput;


	wire [1:0] Z;


	bit_scan_reverse uut (.bitInput(bitInput),.Z(Z));

	initial begin

		bitInput = 0;

		#10 bitInput = 4'b0000;
		#10 bitInput = 4'b1000;
		#10 bitInput = 4'b0100;
		#10 bitInput = 4'b0010;
		#10 bitInput = 4'b0001;
		#10 bitInput = 4'b1010;
		#10 bitInput= 4'b1111;
	end 
	initial begin
		$monitor("bit_scan_reverse(4'b%b) = %d ", bitInput,Z); 
	end
      
endmodule


`timescale 1ns / 1ps


module is_power_of_two_tb;

	
	reg [3:0] J;


	wire Z;


	is_power_of_2 uut (.J(J),.Z(Z));

	initial begin

		J = 0;
		#100;  

		
		J=4'b1000;
		#10
		J=4'b0010;
		#10
		J=4'b1010;
		#10
		J=4'b1001;

	end
	initial begin
		$monitor("%b is a power of 2: %b",J,Z);
	end
      
endmodule


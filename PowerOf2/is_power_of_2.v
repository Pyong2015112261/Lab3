`timescale 1ns / 1ps

module is_power_of_2(input [3:0] J, output Z );
	wire wire1, wire2, wire3, wire4, wire5, wire6, wire7, wire8;
	
	not not1(wire1, J[3]);
	not not2(wire2, J[2]);
	not not3(wire3, J[1]);
	not not4(wire4, J[0]);
	
	and and1(wire5, wire1, wire2, wire3, J[0]);
	and and2(wire6, wire1, wire2, J[1], wire4);
	and and3(wire7, wire1, J[2], wire3, wire4);
	and and4(wire8, J[3], wire2, wire3, wire4);
	
	or or1(Z, wire5, wire6, wire7, wire8);	
	
	
endmodule

`timescale 1ns / 1ps

module equal8bit(input [7:0]a, [7:0] b, output z);
wire equalWire1, equalWire2, equalWire3, equalWire4, equalWire5, equalWire6, equalWire7, equalWire8;
equal equal1(.z(equalWire1),.a(a[0]),.b(b[0]));
equal equal2(.z(equalWire2),.a(a[1]),.b(b[1]));
equal equal3(.z(equalWire3),.a(a[2]),.b(b[2]));
equal equal4(.z(equalWire4),.a(a[3]),.b(b[3]));
equal equal5(.z(equalWire5),.a(a[4]),.b(b[4]));
equal equal6(.z(equalWire6),.a(a[5]),.b(b[5]));
equal equal7(.z(equalWire7),.a(a[6]),.b(b[6]));
equal equal8(.z(equalWire8),.a(a[7]),.b(b[7]));

assign z = equalWire1 & equalWire2 & equalWire3 & equalWire4 & equalWire5 & equalWire6 & equalWire7 & equalWire8;

endmodule

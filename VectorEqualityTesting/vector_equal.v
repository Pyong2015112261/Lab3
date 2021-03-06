`timescale 1ns / 1ps

module vector_equal(input [31:0]a, [31:0] b, output [3:0] z);

equal8bit equal8bit1(.z(z[0]),.a(a[7:0]),.b(b[7:0]));
equal8bit equal8bit2(.z(z[1]),.a(a[15:8]),.b(b[15:8]));
equal8bit equal8bit3(.z(z[2]),.a(a[23:16]),.b(b[23:16]));
equal8bit equal8bit4(.z(z[3]),.a(a[31:24]),.b(b[31:24]));

endmodule

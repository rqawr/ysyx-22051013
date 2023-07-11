
`include "pip_cpu/mul/booth1.v"
module ysyx_22051013_booth(
	 input wire [131:0]			multiplicand	,
	 input wire [66:0]			multiplier	,
	 output wire [4355:0]			part_mul	,
	 output wire [32:0]			part_carry
);

generate
for(genvar i=0; i<33; i=i+1) begin: generate_part_mul

ysyx_22051013_booth1 booth(
	.mult({multiplicand[131-2*i:0],{2*i{1'b0}}}),
	.sel(multiplier[((i+1)*2) -: 3]),
	.part_mul(part_mul[(((i+1)*132)-1) -: 132]),
	.carry(part_carry[i])
);
end

endgenerate

endmodule

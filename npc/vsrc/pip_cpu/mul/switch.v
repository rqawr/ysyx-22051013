module ysyx_22051013_switch(
	input wire [4355:0]		p,
	output wire [4355:0]		o
);

generate 
for(genvar i=0; i<132; i=i+1) begin: walloc_i1
	for(genvar j=0; j<33; j=j+1) begin: walloc_i2
		assign o[i*33+j] = p[j*132+i];
	end
end
endgenerate

endmodule

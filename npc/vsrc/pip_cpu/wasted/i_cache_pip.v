/*
*
	*
	*/
 `include "pip_cpu/define.v"
 `include "pip_cpu/define_axi.v"
 `include "pip_cpu/cache_tag_ram.v"
 `include "pip_cpu/cache_data_ram.v"

 module ysyx_22051013_i_cache_pip(
	 input wire		clk	,
	 input wire		rst	,
	 
	 //to ifu
	 input wire [`ysyx_22051013_PC]		inst_pc	,
	 input wire				pc_ready	,	
	 input wire				flush	,
	 input wire				id_stall	,
	 output wire				inst_valid	,
	 

	 //to axi
	 output wire [`ysyx_22051013_PC]	axi_pc	,
	 output wire				axi_ena	,
	 input wire [`ysyx_22051013_DATA]	axi_inst,
	 input wire				axi_valid,
	 
	 //to if_id
	 output wire [`ysyx_22051013_INST]	inst	,
	 output wire [`ysyx_22051013_PC]	pc	
);


//stage1 tag_read

wire [22:0] 	icache_tag = inst_pc[31:9];
wire [5:0]	icache_index = inst_pc[8:3];


wire [23:0] tag_with_valid = {1'b1,icache_tag};

wire [22:0] 	i_tag_way1;
wire		i_tag_valid1;

 ysyx_22051013_cache_tag_ram tag_ram0(
 	.clk(clk),
 	.addr(icache_index),
 	.tag_data_i(tag_with_valid),
 	.write_ena(way1_tag_ena),
 	.tag_data_o(i_tag_way1),
 	.tag_valid(i_tag_valid1)
 );
 
 wire [22:0] 	i_tag_way2;
 wire		i_tag_valid2;


 ysyx_22051013_cache_tag_ram tag_ram1(
 	.clk(clk),
 	.addr(icache_index),
 	.tag_data_i(tag_with_valid),
 	.write_ena(way2_tag_ena),
 	.tag_data_o(i_tag_way2),
 	.tag_valid(i_tag_valid2)
 );

// reg 1-2
reg [5:0] s1_index;
reg [22:0] s1_tag;
reg [63:0] s1_pc;

always@(posedge clk) begin
	if(rst == `ysyx_22051013_RSTABLE) begin
		s1_index <= 6'd0;
		s1_tag <= 23'd0;
		s1_pc <= 64'd0;
	end
	else if(pc_ready | inst_valid | id_stall) begin 
		s1_index <= s1_index;
		s1_tag <= s1_tag;
		s1_pc <= s1_pc;
	end
	else if(flush) begin 
		s1_index <= 6'd0;
		s1_tag <= 23'd0;
		s1_pc <= 64'd0;
	end
	else begin
		s1_index <= icache_index;
		s1_tag <= icache_tag;
		s1_pc <= inst_pc;
	end
end



//stage2 before data_access
wire way1_hit = ((s1_tag == ram0_tag) & (ram0_valid == `ysyx_22051013_ENABLE));
wire way2_hit = ((s1_tag == ram1_tag) & (ram1_valid == `ysyx_22051013_ENABLE));


//if-miss
assign axi_ena = ~(way1_hit | way2_hit);
assign axi_pc = s1_pc;

//-------tag-update-------//

reg delay2;
always@(posedge clk) begin
	if(rst == `ysyx_22051013_RSTABLE) begin
		delay2 <= 1'b0;
	end
	else if(axi_ena & axi_valid) begin
		delay2 <= 1'b0;
	end
	else begin
		delay2 <= 1'b1;
	end
end

assign inst_valid = axi_ena & delay2;


wire way1_tag_ena =  axi_valid & (cache_strb == `ysyx_22051013_STRB128_L);

wire way2_tag_ena = axi_valid &  (cache_strb == `ysyx_22051013_STRB128_H);


//---data-read---//
wire cache_ena;
wire [127:0] miss_data;
wire [127:0] cache_strb;

assign cache_ena = axi_valid;
assign miss_data = {axi_inst,axi_inst};
assign cache_strb = 	(ram0_valid == `ysyx_22051013_DISABLE | way2_recent_use[s1_index]) ? `ysyx_22051013_STRB128_L :
			(ram1_valid == `ysyx_22051013_DISABLE | way1_recent_use[s1_index]) ? `ysyx_22051013_STRB128_H :
			128'd0;




wire [`ysyx_22051013_CACHE] cache_data;
wire ce = 1'b0;

 ysyx_22051013_cache_data_ram data_ram0(
	.Q(cache_data),
 	.CLK(clk),
	.CEN(ce),
	.WEN(~cache_ena),
	.BWEN(~cache_strb),
 	.A(s1_index),
 	.D(miss_data)
 );


// reg 2-3
reg [63:0] s2_pc;
reg hit1;
reg hit2;
reg miss1;
reg miss2;

always@(posedge clk) begin
	if(rst == `ysyx_22051013_RSTABLE) begin
		s2_pc <= 64'd0;
		hit1 <= 1'b0;
		hit2<= 1'b0;
		miss1 <= 1'b0;
		miss2<= 1'b0;
	end
	else if(pc_ready | inst_valid | id_stall) begin 
		s2_pc <= s2_pc;
		hit1 <= hit1;
		hit2 <= hit2;
		miss1 <= miss1;
		miss2<= miss2;
	end
	else if(flush) begin 
		s2_pc <= 64'd0;
		hit1 <= 1'b0;
		hit2<= 1'b0;
		miss1 <= 1'b0;
		miss2<= 1'b0;
	end
	else begin
		s2_pc <= s1_pc;
		hit1 <= way1_hit;
		hit1 <= way2_hit;
		miss1 <= way1_tag_ena;
		miss2<= way2_tag_ena;
	end
end


//stage3 

assign inst = 	(miss1 | hit1) & s2_pc[2] ? cache_data[63:32] : 
		(miss1 | hit1) & ~s2_pc[2] ? cache_data[31:0] :
		(miss2 | hit2) & s2_pc[2] ? cache_data[127:96] : 
		(miss2 | hit2) & ~s2_pc[2] ? cache_data[95:64] :
		32'd0;

assign pc = s2_pc;


//------------replace logic------------//
reg way1_recent_use [63:0];
reg way2_recent_use [63:0];

always@(posedge clk) begin
	if(way1_tag_ena | way1_hit) begin
		way1_recent_use[s1_index] <= `ysyx_22051013_ENABLE;
		way2_recent_use[s1_index] <= `ysyx_22051013_DISABLE;
	end
	if(way2_tag_ena | way2_hit) begin
		way1_recent_use[s1_index] <= `ysyx_22051013_DISABLE;
		way2_recent_use[s1_index] <= `ysyx_22051013_ENABLE;
	end
end

endmodule




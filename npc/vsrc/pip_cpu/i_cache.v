/*
*
	*
	*/
 `include "pip_cpu/define.v"
 `include "pip_cpu/define_axi.v"
 `include "pip_cpu/cache_tag_ram.v"
 `include "pip_cpu/cache_data_ram.v"

 module ysyx_22051013_i_cache(
	 input wire		clk	,
	 input wire		rst	,
	 
	 //to ifu
	 input wire [`ysyx_22051013_PC]		inst_pc	,
	 input wire				pc_ready	,	
	 output reg				inst_valid	,
	 output reg [`ysyx_22051013_INST]	inst	,

	 //to axi
	 output reg [`ysyx_22051013_PC]	axi_pc	,
	 output reg				axi_ena	,
	 input wire [`ysyx_22051013_DATA]	axi_inst,
	 input wire				axi_valid	
);

wire [23:0] 	icache_tag = inst_pc[31:8];
wire [4:0]	icache_index = inst_pc[7:3];


reg [3:0] icache_state;
reg [3:0] icache_state_next;

always@(posedge clk) begin 
	if(rst == `ysyx_22051013_RSTABLE) begin
		icache_state <= `ysyx_22051013_I_IDLE;
	end
	else begin
		icache_state <= icache_state_next;
	end
end

always@(*) begin
	case(icache_state) 
		`ysyx_22051013_I_IDLE : begin
			if(~rst) begin
				icache_state_next = `ysyx_22051013_I_READ;
			end
			else begin 
				icache_state_next = `ysyx_22051013_I_IDLE;
			end
		end

		`ysyx_22051013_I_READ : begin
			if((~pc_ready & tag_update) & (((icache_tag == i_tag_way1) & (i_tag_valid1 == `ysyx_22051013_ENABLE)) | ((icache_tag == i_tag_way2) & (i_tag_valid2 == `ysyx_22051013_ENABLE)))) begin
				icache_state_next = `ysyx_22051013_I_HIT;
			end
			else if(~pc_ready & tag_update) begin
				icache_state_next = `ysyx_22051013_I_MISS;
			end
			else begin
				icache_state_next = `ysyx_22051013_I_READ;
			end
		end

		`ysyx_22051013_I_HIT : begin
			if(inst_valid) begin 
				icache_state_next = `ysyx_22051013_I_READ;
			end
			else begin
				icache_state_next = `ysyx_22051013_I_HIT;
			end
		end
		
		`ysyx_22051013_I_MISS : begin
			if(write_in_valid) begin
				icache_state_next = `ysyx_22051013_I_HIT;
			end
			else begin
				icache_state_next = `ysyx_22051013_I_MISS;
			end
		end

		default : begin
				icache_state_next = `ysyx_22051013_I_IDLE;
		end
	endcase
end
//tag_update

reg tag_update;
reg tag_update_temp;

always@(posedge clk) begin
	if(rst == `ysyx_22051013_RSTABLE) begin
		tag_update <= `ysyx_22051013_DISABLE;
	end
	else begin
		tag_update <= tag_update_temp;
	end
end

always@(*) begin
	if(icache_state == `ysyx_22051013_I_READ) begin
		tag_update_temp = `ysyx_22051013_ENABLE;
	end
	else begin
		tag_update_temp = `ysyx_22051013_DISABLE;
	end
end



//-------hit--------//

always@(*) begin
	if(icache_state == `ysyx_22051013_I_HIT) begin
		if(pc_ready) begin 
			inst = 32'b0;
			inst_valid = `ysyx_22051013_DISABLE;
		end
		else if((icache_tag == i_tag_way1) & (i_tag_valid1 == `ysyx_22051013_ENABLE) & inst_pc[2]) begin
			inst = cache_way1_data[63:32];
			inst_valid = `ysyx_22051013_ENABLE;
		end
		else if((icache_tag == i_tag_way1) & (i_tag_valid1 == `ysyx_22051013_ENABLE) & ~inst_pc[2]) begin
			inst = cache_way1_data[31:0];
			inst_valid = `ysyx_22051013_ENABLE;
		end
		else if((icache_tag == i_tag_way2) & (i_tag_valid2 == `ysyx_22051013_ENABLE) & inst_pc[2]) begin
			inst = cache_way2_data[63:32];
			inst_valid = `ysyx_22051013_ENABLE;
		end
		else if((icache_tag == i_tag_way2) & (i_tag_valid2 == `ysyx_22051013_ENABLE) & ~inst_pc[2]) begin
			inst = cache_way2_data[31:0];
			inst_valid = `ysyx_22051013_ENABLE;
		end
		else begin
			inst = 32'b0;
			inst_valid = `ysyx_22051013_DISABLE;
		end
	end
	else begin
		inst = 32'b0;
		inst_valid = `ysyx_22051013_DISABLE;
	end
end

//-------------miss-----------//

reg [`ysyx_22051013_DATA] miss_data;
reg	way1_ena;
reg	way2_ena;
reg	write_in_valid;

always@(*) begin
	if(icache_state == `ysyx_22051013_I_MISS & ~axi_valid) begin 
		axi_ena = `ysyx_22051013_ENABLE;
		axi_pc = {inst_pc[63:3],3'b000};
		miss_data = `ysyx_22051013_ZERO64;
		way1_ena = `ysyx_22051013_DISABLE;
		way2_ena = `ysyx_22051013_DISABLE;
		write_in_valid = `ysyx_22051013_DISABLE;
	end
	else if(icache_state == `ysyx_22051013_I_MISS & axi_valid) begin
		axi_ena = `ysyx_22051013_DISABLE;
		axi_pc = `ysyx_22051013_ZERO64;
		miss_data = axi_inst;
		write_in_valid = `ysyx_22051013_ENABLE;
		
		if(i_tag_valid1 == `ysyx_22051013_DISABLE) begin
			way1_ena = `ysyx_22051013_ENABLE;
			way2_ena = `ysyx_22051013_DISABLE;
		end
		
		else if(i_tag_valid2 == `ysyx_22051013_DISABLE) begin
			way1_ena = `ysyx_22051013_DISABLE;
			way2_ena = `ysyx_22051013_ENABLE;
		end
		
		else if(way1_recent_use[icache_index]) begin
			way1_ena = `ysyx_22051013_DISABLE;
			way2_ena = `ysyx_22051013_ENABLE;
		end
		
		else if(way2_recent_use[icache_index]) begin
			way1_ena = `ysyx_22051013_ENABLE;
			way2_ena = `ysyx_22051013_DISABLE;
		end
		
		else begin
			way1_ena = `ysyx_22051013_DISABLE;
			way2_ena = `ysyx_22051013_DISABLE;
		end
	end
	else begin
		axi_ena = `ysyx_22051013_DISABLE;
		miss_data = `ysyx_22051013_ZERO64;
		axi_pc = `ysyx_22051013_ZERO64;
		way1_ena = `ysyx_22051013_DISABLE;
		way2_ena = `ysyx_22051013_DISABLE;
		write_in_valid = `ysyx_22051013_DISABLE;
	end
end

//-----------cache---------------------//
//---tag---//
wire [24:0] tag_with_valid = {1'b1,icache_tag};

wire [23:0] 	i_tag_way1;
wire		i_tag_valid1;


 ysyx_22051013_cache_tag_ram tag_ram0(
 	.clk(clk),
 	.addr(icache_index),
 	.tag_data_i(tag_with_valid),
 	.write_ena(way1_ena),
 	.tag_data_o(i_tag_way1),
 	.tag_valid(i_tag_valid1)
 );
 
 wire [23:0] 	i_tag_way2;
 wire		i_tag_valid2;


 ysyx_22051013_cache_tag_ram tag_ram1(
 	.clk(clk),
 	.addr(icache_index),
 	.tag_data_i(tag_with_valid),
 	.write_ena(way2_ena),
 	.tag_data_o(i_tag_way2),
 	.tag_valid(i_tag_valid2)
 );
 
//---data---//

wire [`ysyx_22051013_DATA] cache_way1_data;

 ysyx_22051013_cache_data_ram data_ram0(
 	.clk(clk),
 	.addr(icache_index),
 	.data_i(miss_data),
 	.write_ena(way1_ena),
 	.data_o(cache_way1_data)
 );
 
 wire [`ysyx_22051013_DATA] cache_way2_data;

 ysyx_22051013_cache_data_ram data_ram1(
 	.clk(clk),
 	.addr(icache_index),
 	.data_i(miss_data),
 	.write_ena(way2_ena),
 	.data_o(cache_way2_data)
 );

		
//------------replace logic------------//
reg way1_recent_use [31:0];
reg way2_recent_use [31:0];

always@(posedge clk) begin
	if(((icache_state == `ysyx_22051013_I_HIT) & (icache_tag == i_tag_way1) & (i_tag_valid1 == `ysyx_22051013_ENABLE)) | way1_ena) begin
		way1_recent_use[icache_index] <= `ysyx_22051013_ENABLE;
		way2_recent_use[icache_index] <= `ysyx_22051013_DISABLE;
	end
	if(((icache_state == `ysyx_22051013_I_HIT) & (icache_tag == i_tag_way2) & (i_tag_valid2 == `ysyx_22051013_ENABLE)) | way2_ena) begin
		way1_recent_use[icache_index] <= `ysyx_22051013_DISABLE;
		way2_recent_use[icache_index] <= `ysyx_22051013_ENABLE;
	end
end

endmodule



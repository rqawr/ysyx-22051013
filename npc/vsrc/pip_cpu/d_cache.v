/*
*
	*
	*/
 `include "pip_cpu/define.v"
 `include "pip_cpu/define_axi.v"
 `include "pip_cpu/cache_tag_ram.v"
 `include "pip_cpu/cache_data_ram.v"

 module ysyx_22051013_D_cache(
	 input wire		clk	,
	 input wire		rst	,
	 
	 //to lsu
	 input wire [`ysyx_22051013_PC]		data_pc	,
	 input wire	[`ysyx_22051013_DATA]	data_i	,
	 input wire				core_ready	,	
	 input wire				re	,
	 input wire				we	,
	 input wire	[7:0]		wmask	,
	 output reg				data_valid	,
	 output reg [`ysyx_22051013_INST]	data_o	,

	 //to axi
	 output reg [`ysyx_22051013_PC]	axi_pc	,
	 output reg				axi_ena	,
	 input wire [`ysyx_22051013_DATA]	axi_data,
	 input wire				axi_valid	
);

wire [23:0] 	dcache_tag = inst_pc[31:8];
wire [4:0]	dcache_index = inst_pc[7:3];


reg [5:0] dread_state;
reg [5:0] dread_state_next;

wire way1_r_hit = (dread_tag == d_tag_way1) & (d_tag_valid1 == `ysyx_22051013_ENABLE);
wire way2_r_hit = (dread_tag == d_tag_way2) & (d_tag_valid2 == `ysyx_22051013_ENABLE);
wire way1_r_dirty = 
wire way2_r_dirty = 


always@(posedge clk) begin 
	if(rst == `ysyx_22051013_RSTABLE) begin
		dread_state <= `ysyx_22051013_D_IDLE;
	end
	else begin
		dread_state <= dread_state_next;
	end
end

always@(*) begin
	case(dread_state) 
		`ysyx_22051013_D_IDLE : begin
			if(~rst) begin
				dread_state_next = `ysyx_22051013_D_READ;
			end
			else begin 
				dread_state_next = `ysyx_22051013_D_IDLE;
			end
		end

		`ysyx_22051013_D_READ : begin
			if((~core_ready & tag_update) & (way1_r_hit | way2_r_hit)) begin
				dread_state_next = `ysyx_22051013_D_HIT;
			end
			else if((~core_ready & tag_update) & (way1_r_dirty | way2_r_dirty) begin
				dread_state_next = `ysyx_22051013_D_DIRTYR;
			end
			else if(~core_ready & tag_update) begin
				dread_state_next = `ysyx_22051013_D_MISSR;
			end
			else begin
				dread_state_next = `ysyx_22051013_D_READ;
			end
		end

		`ysyx_22051013_D_HIT : begin
			if(data_valid) begin 
				dread_state_next = `ysyx_22051013_D_READ;
			end
			else begin
				dread_state_next = `ysyx_22051013_D_HIT;
			end
		end
		
		`ysyx_22051013_D_DIRTYR : begin
			if(ditryr_valid) begin
				dread_state_next = `ysyx_22051013_D_MISSR;
			end
			else begin
				dread_state_next = `ysyx_22051013_D_DIRTYR;
			end
		end

		`ysyx_22051013_D_MISSR : begin
			if(write_in_valid) begin
				dread_state_next = `ysyx_22051013_D_HIT;
			end
			else begin
				dread_state_next = `ysyx_22051013_D_MISSR;
			end
		end

		default : begin
				dread_state_next = `ysyx_22051013_D_IDLE;
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
	if(dread_state == `ysyx_22051013_D_READ) begin
		tag_update_temp = `ysyx_22051013_ENABLE;
	end
	else begin
		tag_update_temp = `ysyx_22051013_DISABLE;
	end
end



//-------hit--------//

always@(*) begin
	if(dread_state == `ysyx_22051013_D_HIT) begin
		if(core_ready) begin 
			data_o = `ysyx_22051013_ZERO64;
			data_valid = `ysyx_22051013_DISABLE;
		end
		else if(way1_r_hit) begin
			data = cache_way1_data;
			data_valid = `ysyx_22051013_ENABLE;
		end
		else if(way2_r_hit) begin
			data = cache_way2_data;
			data_valid = `ysyx_22051013_ENABLE;
		end
		else begin
			data = `ysyx_22051013_ZERO64;
			data_valid = `ysyx_22051013_DISABLE;
		end
	end
	else begin
		data = `ysyx_22051013_ZERO64;
		data_valid = `ysyx_22051013_DISABLE;
	end
end

//-------------miss-----------//

reg [`ysyx_22051013_DATA] miss_data;
reg	way1_ena;
reg	way2_ena;
reg	write_in_valid;

always@(*) begin
	if(dread_state == `ysyx_22051013_D_MISSR & ~axi_valid) begin 
		axi_ena = `ysyx_22051013_ENABLE;
		axi_pc = {data_pc[63:3],3'b000};
		miss_data = `ysyx_22051013_ZERO64;
		way1_ena = `ysyx_22051013_DISABLE;
		way2_ena = `ysyx_22051013_DISABLE;
		write_in_valid = `ysyx_22051013_DISABLE;
	end
	else if(dread_state == `ysyx_22051013_D_MISS & axi_valid) begin
		axi_ena = `ysyx_22051013_DISABLE;
		axi_pc = `ysyx_22051013_ZERO64;
		miss_data = axi_data;
		write_in_valid = `ysyx_22051013_ENABLE;
		
		if(d_tag_valid1 == `ysyx_22051013_DISABLE) begin
			way1_ena = `ysyx_22051013_ENABLE;
			way2_ena = `ysyx_22051013_DISABLE;
		end
		
		else if(d_tag_valid2 == `ysyx_22051013_DISABLE) begin
			way1_ena = `ysyx_22051013_DISABLE;
			way2_ena = `ysyx_22051013_ENABLE;
		end
		
		else if(way1_recent_use[dread_index]) begin
			way1_ena = `ysyx_22051013_DISABLE;
			way2_ena = `ysyx_22051013_ENABLE;
		end
		
		else if(way2_recent_use[dread_index]) begin
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
wire [24:0] tag_with_valid = {1'b1,dread_tag};

wire [23:0] 	d_tag_way1;
wire		d_tag_valid1;


 ysyx_22051013_cache_tag_ram tag_ram0(
 	.clk(clk),
 	.addr(dread_index),
 	.tag_data_i(tag_with_valid),
 	.write_ena(way1_ena),
 	.tag_data_o(d_tag_way1),
 	.tag_valid(d_tag_valid1)
 );
 
 wire [23:0] 	d_tag_way2;
 wire		d_tag_valid2;


 ysyx_22051013_cache_tag_ram tag_ram1(
 	.clk(clk),
 	.addr(dread_index),
 	.tag_data_i(tag_with_valid),
 	.write_ena(way2_ena),
 	.tag_data_o(d_tag_way2),
 	.tag_valid(d_tag_valid2)
 );
 
//---data---//

wire [`ysyx_22051013_DATA] cache_way1_data;

 ysyx_22051013_cache_data_ram data_ram0(
 	.clk(clk),
 	.addr(dread_index),
 	.data_i(miss_data),
 	.write_ena(way1_ena),
 	.data_o(cache_way1_data)
 );
 
 wire [`ysyx_22051013_DATA] cache_way2_data;

 ysyx_22051013_cache_data_ram data_ram1(
 	.clk(clk),
 	.addr(dread_index),
 	.data_i(miss_data),
 	.write_ena(way2_ena),
 	.data_o(cache_way2_data)
 );

		
//------------replace logic------------//
reg way1_recent_use [31:0];
reg way2_recent_use [31:0];

always@(posedge clk) begin
	if(((dcache_state == `ysyx_22051013_D_HIT) & (dcache_tag == d_tag_way1) & (d_tag_valid1 == `ysyx_22051013_ENABLE)) | way1_ena) begin
		way1_recent_use[dcache_index] <= `ysyx_22051013_ENABLE;
		way2_recent_use[dcache_index] <= `ysyx_22051013_DISABLE;
	end
	if(((dcache_state == `ysyx_22051013_D_HIT) & (dcache_tag == d_tag_way2) & (d_tag_valid2 == `ysyx_22051013_ENABLE)) | way2_ena) begin
		way1_recent_use[dcache_index] <= `ysyx_22051013_DISABLE;
		way2_recent_use[dcache_index] <= `ysyx_22051013_ENABLE;
	end
end

endmodule

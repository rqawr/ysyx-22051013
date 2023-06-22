/*
*
	*
	*/
 `include "pip_cpu/define.v"
 `include "pip_cpu/define_axi.v"
 //`include "pip_cpu/cache_tag_ram.v"
 //`include "pip_cpu/cache_data_ram.v"

 module ysyx_22051013_d_cache(
	 input wire		clk	,
	 input wire		rst	,
	 
	 //to lsu
	 input wire [`ysyx_22051013_PC]		data_pc	,
	 input wire	[`ysyx_22051013_DATA]	data_i	,
	 input wire				core_ready	,	
	 input wire				re	,
	 input wire				we	,
	 input wire	[7:0]			wmask	,
	 input wire				fencei	,
	 output wire				data_valid	,
	 output reg [`ysyx_22051013_DATA]	data_o	,

	 //to axi
	 output wire [`ysyx_22051013_PC]	axi_pc	,
	 output wire				axi_r_ena	,
	 output wire				axi_w_ena	,
	 output wire [`ysyx_22051013_DATA]	axi_data_o,
	 input wire [`ysyx_22051013_DATA]	axi_data_i,
	 input wire				axi_valid	
);

wire [22:0] 	dcache_tag = data_pc[31:9];
wire [5:0]	dcache_index = data_pc[8:3];

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//------------------------------------------------------read--------------------------------------------------------------//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//------------------------------------------------------read state trnas--------------------------------------------------------------//

reg [5:0] dread_state;
reg [5:0] dread_state_next;

wire way1_r_hit = (dcache_tag == d_tag_way1) & (d_tag_valid1 == `ysyx_22051013_ENABLE);
wire way2_r_hit = (dcache_tag == d_tag_way2) & (d_tag_valid2 == `ysyx_22051013_ENABLE);
wire way1_r_dirty = (way1_dirty[dcache_index] == `ysyx_22051013_ENABLE) & (way2_recent_use[dcache_index] == `ysyx_22051013_ENABLE)& (d_tag_valid1 == `ysyx_22051013_ENABLE);
wire way2_r_dirty = (way2_dirty[dcache_index] == `ysyx_22051013_ENABLE) & (way1_recent_use[dcache_index] == `ysyx_22051013_ENABLE)& (d_tag_valid1 == `ysyx_22051013_ENABLE);
wire core_re_ready = ~core_ready & re;


always@(posedge clk) begin 
	if(rst == `ysyx_22051013_RSTABLE) begin
		dread_state <= `ysyx_22051013_D_IDLE;
	end
	else begin
		dread_state <= dread_state_next;
	end
end

always@(*) begin
	if(rst == `ysyx_22051013_RSTABLE) begin
		dread_state_next = `ysyx_22051013_D_IDLE;
	end
	else begin
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
				if((core_re_ready & tag_update) & (way1_r_hit | way2_r_hit)) begin
					dread_state_next = `ysyx_22051013_D_HIT;
				end
				else if((core_re_ready & tag_update) & (way1_r_dirty | way2_r_dirty)) begin
					dread_state_next = `ysyx_22051013_D_DIRTYR;
				end
				else if(core_re_ready & tag_update) begin
					dread_state_next = `ysyx_22051013_D_MISSR;
				end
				else begin
					dread_state_next = `ysyx_22051013_D_READ;
				end
			end

			`ysyx_22051013_D_HIT : begin
				if(data_r_valid) begin 
					dread_state_next = `ysyx_22051013_D_READ;
				end
				else begin
					dread_state_next = `ysyx_22051013_D_HIT;
				end
			end
			
			`ysyx_22051013_D_DIRTYR : begin
				if(dirtyr_valid) begin
					dread_state_next = `ysyx_22051013_D_MISSR;
				end
				else begin
					dread_state_next = `ysyx_22051013_D_DIRTYR;
				end
			end

			`ysyx_22051013_D_MISSR : begin
				if(write_r_valid) begin
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
	if(rst == `ysyx_22051013_RSTABLE) begin
		tag_update_temp = `ysyx_22051013_DISABLE;
	end
	else if(dread_state == `ysyx_22051013_D_READ & core_re_ready) begin
		tag_update_temp = `ysyx_22051013_ENABLE;
	end
	else begin
		tag_update_temp = `ysyx_22051013_DISABLE;
	end
end



//------------------------------------------------------read hit--------------------------------------------------------------//

reg data_r_valid;


always@(*) begin
	if(rst == `ysyx_22051013_RSTABLE) begin
		data_o = `ysyx_22051013_ZERO64;
		data_r_valid = `ysyx_22051013_DISABLE;
	end
	else if(dread_state == `ysyx_22051013_D_HIT) begin
	  if(way1_r_hit) begin
			data_o = cache_data[63:0];
			data_r_valid = `ysyx_22051013_ENABLE;
			
		end
		else if(way2_r_hit) begin
			data_o = cache_data[127:64];
			data_r_valid = `ysyx_22051013_ENABLE;
			
		end
		else begin
			data_o = `ysyx_22051013_ZERO64;
			data_r_valid = `ysyx_22051013_DISABLE;

		end
	end
	else begin
		data_o = `ysyx_22051013_ZERO64;
		data_r_valid = `ysyx_22051013_DISABLE;

	end
end

//------------------------------------------------------read miss--------------------------------------------------------------//
reg	write_r_valid;
reg way1_r_ena;
reg way2_r_ena;
reg [`ysyx_22051013_PC] missr_pc;
reg			missr_ena;
reg [`ysyx_22051013_CACHE] missr_data;
reg [`ysyx_22051013_CACHE] cache_r_strb;

reg dirtyr_way1_clean;
reg dirtyr_way2_clean;

always@(*) begin
	if(rst == `ysyx_22051013_RSTABLE) begin
		missr_ena = `ysyx_22051013_DISABLE;
		missr_data = 128'd0;
		cache_r_strb = 128'd0;
		missr_pc = `ysyx_22051013_ZERO64;
		way1_r_ena = `ysyx_22051013_DISABLE;
		way2_r_ena = `ysyx_22051013_DISABLE;
		write_r_valid = `ysyx_22051013_DISABLE;
		dirtyr_way1_clean = `ysyx_22051013_DISABLE;
		dirtyr_way2_clean = `ysyx_22051013_DISABLE;
	end
	else if(dread_state == `ysyx_22051013_D_MISSR & ~axi_valid) begin 
		missr_ena = `ysyx_22051013_ENABLE;
		missr_pc = {data_pc[63:3],3'b000};
		missr_data = 128'd0;
		cache_r_strb = 128'd0;
		way1_r_ena = `ysyx_22051013_DISABLE;
		way2_r_ena = `ysyx_22051013_DISABLE;
		write_r_valid = `ysyx_22051013_DISABLE;
		dirtyr_way1_clean = `ysyx_22051013_DISABLE;
		dirtyr_way2_clean = `ysyx_22051013_DISABLE;
	end
	else if(dread_state == `ysyx_22051013_D_MISSR & axi_valid) begin
		missr_ena = `ysyx_22051013_DISABLE;
		missr_pc = `ysyx_22051013_ZERO64;
		missr_data = {axi_data_i,axi_data_i};
		write_r_valid = `ysyx_22051013_ENABLE;
		
		if(d_tag_valid1 == `ysyx_22051013_DISABLE | way2_recent_use[dcache_index]) begin
			way1_r_ena = `ysyx_22051013_ENABLE;
			way2_r_ena = `ysyx_22051013_DISABLE;
			cache_r_strb = `ysyx_22051013_STRB128_L;
			dirtyr_way1_clean = `ysyx_22051013_ENABLE;
			dirtyr_way2_clean = `ysyx_22051013_DISABLE;
		end
		
		else if(d_tag_valid2 == `ysyx_22051013_DISABLE | way1_recent_use[dcache_index]) begin
			way1_r_ena = `ysyx_22051013_DISABLE;
			way2_r_ena = `ysyx_22051013_ENABLE;
			cache_r_strb = `ysyx_22051013_STRB128_H;
			dirtyr_way1_clean = `ysyx_22051013_DISABLE;
			dirtyr_way2_clean = `ysyx_22051013_ENABLE;
		end
		
		else begin
			way1_r_ena = `ysyx_22051013_DISABLE;
			way2_r_ena = `ysyx_22051013_DISABLE;
			cache_r_strb = 128'd0;
			dirtyr_way1_clean = `ysyx_22051013_DISABLE;
			dirtyr_way2_clean = `ysyx_22051013_DISABLE;
		end
	end
	else begin
		missr_ena = `ysyx_22051013_DISABLE;
		missr_data = 128'd0;
		cache_r_strb = 128'd0;
		missr_pc = `ysyx_22051013_ZERO64;
		way1_r_ena = `ysyx_22051013_DISABLE;
		way2_r_ena = `ysyx_22051013_DISABLE;
		write_r_valid = `ysyx_22051013_DISABLE;
		dirtyr_way1_clean = `ysyx_22051013_DISABLE;
		dirtyr_way2_clean = `ysyx_22051013_DISABLE;
	end
end

//------------------------------------------------------read dirty--------------------------------------------------------------//
reg dirtyr_valid;
reg dirtyr_ena;
reg [`ysyx_22051013_PC] dirtyr_pc;
reg [`ysyx_22051013_DATA] dirtyr_data;
always@(*) begin
	if(rst == `ysyx_22051013_RSTABLE) begin
		dirtyr_ena = `ysyx_22051013_DISABLE;
		dirtyr_pc = `ysyx_22051013_ZERO64;
		dirtyr_data = `ysyx_22051013_ZERO64;
		dirtyr_valid = `ysyx_22051013_DISABLE;
	end
	else if((dread_state == `ysyx_22051013_D_DIRTYR)  & ~delayr) begin
		dirtyr_valid = `ysyx_22051013_DISABLE;
		dirtyr_ena = `ysyx_22051013_ENABLE;
		if(way1_r_dirty) begin 
			dirtyr_pc = {32'd0, d_tag_way1, dcache_index,3'd0};
			dirtyr_data = cache_data[63:0];
		end
		else begin
			dirtyr_pc = {32'd0, d_tag_way2, dcache_index, 3'b0};
			dirtyr_data = cache_data[127:64];

		end
	end
	else if((dread_state == `ysyx_22051013_D_DIRTYR) & delayr) begin
		dirtyr_ena = `ysyx_22051013_DISABLE;
		dirtyr_pc = `ysyx_22051013_ZERO64;
		dirtyr_data = `ysyx_22051013_ZERO64;
		dirtyr_valid = `ysyx_22051013_ENABLE;
	end
	else begin
		dirtyr_ena = `ysyx_22051013_DISABLE;
		dirtyr_pc = `ysyx_22051013_ZERO64;
		dirtyr_data = `ysyx_22051013_ZERO64;
		dirtyr_valid = `ysyx_22051013_DISABLE;
	end
end

reg delayr;

always@(posedge clk) begin
	if(rst == `ysyx_22051013_RSTABLE) begin
		delayr <= `ysyx_22051013_DISABLE;
	end
	else if((dread_state == `ysyx_22051013_D_DIRTYR) & (axi_valid)) begin
		delayr <= `ysyx_22051013_ENABLE;
	end
	else begin
		delayr <= `ysyx_22051013_DISABLE;
	end
end


///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//------------------------------------------------------write--------------------------------------------------------------//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//------------------------------------------------------write state trans--------------------------------------------------------------//

reg [5:0] dwrite_state;
reg [5:0] dwrite_state_next;

wire way1_w_hit = (dcache_tag == d_tag_way1) & (d_tag_valid1 == `ysyx_22051013_ENABLE);
wire way2_w_hit = (dcache_tag == d_tag_way2) & (d_tag_valid2 == `ysyx_22051013_ENABLE);
wire way1_w_dirty = (way1_dirty[dcache_index] == `ysyx_22051013_ENABLE) & (way2_recent_use[dcache_index] == `ysyx_22051013_ENABLE)& (d_tag_valid1 == `ysyx_22051013_ENABLE);
wire way2_w_dirty = (way2_dirty[dcache_index] == `ysyx_22051013_ENABLE) & (way1_recent_use[dcache_index] == `ysyx_22051013_ENABLE)& (d_tag_valid1 == `ysyx_22051013_ENABLE);
wire core_wr_ready = ~core_ready & we;


always@(posedge clk) begin 
	if(rst == `ysyx_22051013_RSTABLE) begin
		dwrite_state <= `ysyx_22051013_D_IDLE;
	end
	else begin
		dwrite_state <= dwrite_state_next;
	end
end

always@(*) begin
	if(rst == `ysyx_22051013_RSTABLE) begin
		dwrite_state_next = `ysyx_22051013_D_IDLE;
	end
	else begin
		case(dwrite_state) 
			`ysyx_22051013_D_IDLE : begin
				if(~rst) begin
					dwrite_state_next = `ysyx_22051013_D_WRITE;
				end
				else begin 
					dwrite_state_next = `ysyx_22051013_D_IDLE;
				end
			end

			`ysyx_22051013_D_WRITE : begin
				if((core_wr_ready & tag_w_update) & (way1_w_hit | way2_w_hit)) begin
					dwrite_state_next = `ysyx_22051013_D_HIT;
				end
				else if((core_wr_ready & tag_w_update) & (way1_w_dirty | way2_w_dirty)) begin
					dwrite_state_next = `ysyx_22051013_D_DIRTYW;
				end
				else if(core_wr_ready & tag_w_update) begin
					dwrite_state_next = `ysyx_22051013_D_MISSW;
				end
				else begin
					dwrite_state_next = `ysyx_22051013_D_WRITE;
				end
			end

			`ysyx_22051013_D_HIT : begin
				if(data_w_valid) begin 
					dwrite_state_next = `ysyx_22051013_D_WRITE;
				end
				else begin
					dwrite_state_next = `ysyx_22051013_D_HIT;
				end
			end
			
			`ysyx_22051013_D_DIRTYW : begin
				if(dirtyw_valid) begin
					dwrite_state_next = `ysyx_22051013_D_MISSW;
				end
				else begin
					dwrite_state_next = `ysyx_22051013_D_DIRTYW;
				end
			end

			`ysyx_22051013_D_MISSW : begin
				if(write_w_valid) begin
					dwrite_state_next = `ysyx_22051013_D_HIT;
				end
				else begin
					dwrite_state_next = `ysyx_22051013_D_MISSW;
				end
			end

			default : begin
					dwrite_state_next = `ysyx_22051013_D_IDLE;
			end
		endcase
	end
end
//tag_w_update

reg tag_w_update;
reg tag_w_update_temp;

always@(posedge clk) begin
	if(rst == `ysyx_22051013_RSTABLE) begin
		tag_w_update <= `ysyx_22051013_DISABLE;
	end
	else begin
		tag_w_update <= tag_w_update_temp;
	end
end

always@(*) begin
	if(rst == `ysyx_22051013_RSTABLE) begin
		tag_w_update_temp = `ysyx_22051013_DISABLE;
	end
	else if(dwrite_state == `ysyx_22051013_D_WRITE & core_wr_ready) begin
		tag_w_update_temp = `ysyx_22051013_ENABLE;
	end
	else begin
		tag_w_update_temp = `ysyx_22051013_DISABLE;
	end
end



//------------------------------------------------------write hit--------------------------------------------------------------//

reg data_w_valid;
reg dirtyw_way1_clean;
reg dirtyw_way2_clean;
reg [`ysyx_22051013_CACHE] data_write_o;
reg [`ysyx_22051013_CACHE] hit_w_strb;
wire [`ysyx_22051013_DATA] strb_w_64 = {{8{wmask[7]}},{8{wmask[6]}},{8{wmask[5]}},{8{wmask[4]}},{8{wmask[3]}},{8{wmask[2]}},{8{wmask[1]}},{8{wmask[0]}}};


always@(*) begin
	if(rst == `ysyx_22051013_RSTABLE) begin
		data_write_o = 128'd0;
		hit_w_strb = 128'd0;
		data_w_valid = `ysyx_22051013_DISABLE;
	end
	else if(dwrite_state == `ysyx_22051013_D_HIT) begin
		data_write_o = {data_i,data_i};
	  	if(way1_w_hit) begin
			hit_w_strb = {64'd0, strb_w_64};
			data_w_valid = `ysyx_22051013_ENABLE;

		end
		else if(way2_w_hit) begin
			hit_w_strb = {strb_w_64, 64'd0};
			data_w_valid = `ysyx_22051013_ENABLE;

		end
		else begin
			hit_w_strb = 128'd0;
			data_w_valid = `ysyx_22051013_DISABLE;

		end
	end
	else begin
		data_write_o = 128'd0;
		hit_w_strb = 128'd0;
		data_w_valid = `ysyx_22051013_DISABLE;

	end
end

//------------------------------------------------------write miss--------------------------------------------------------------//
reg	write_w_valid;
reg way1_w_ena;
reg way2_w_ena;
reg [`ysyx_22051013_PC] missw_pc;
reg			missw_ena;
reg [`ysyx_22051013_CACHE] missw_data;
reg [`ysyx_22051013_CACHE] cache_w_strb;

always@(*) begin
	if(rst == `ysyx_22051013_RSTABLE) begin
		missw_ena = `ysyx_22051013_DISABLE;
		missw_data = 128'd0;
		cache_w_strb = 128'd0;
		missw_pc = `ysyx_22051013_ZERO64;
		way1_w_ena = `ysyx_22051013_DISABLE;
		way2_w_ena = `ysyx_22051013_DISABLE;
		write_w_valid = `ysyx_22051013_DISABLE;
	end
	else if(dwrite_state == `ysyx_22051013_D_MISSW & ~axi_valid) begin 
		missw_ena = `ysyx_22051013_ENABLE;
		missw_pc = {data_pc[63:3],3'b000};
		missw_data = 128'd0;
		cache_w_strb = 128'd0;
		way1_w_ena = `ysyx_22051013_DISABLE;
		way2_w_ena = `ysyx_22051013_DISABLE;
		write_w_valid = `ysyx_22051013_DISABLE;
	end
	else if(dwrite_state == `ysyx_22051013_D_MISSW & axi_valid) begin
		missw_ena = `ysyx_22051013_DISABLE;
		missw_pc = `ysyx_22051013_ZERO64;
		missw_data = {axi_data_i,axi_data_i};
		write_w_valid = `ysyx_22051013_ENABLE;
		
		if(d_tag_valid1 == `ysyx_22051013_DISABLE) begin
			way1_w_ena = `ysyx_22051013_ENABLE;
			way2_w_ena = `ysyx_22051013_DISABLE;
			cache_w_strb = `ysyx_22051013_STRB128_L;
		end
		
		else if(d_tag_valid2 == `ysyx_22051013_DISABLE) begin
			way1_w_ena = `ysyx_22051013_DISABLE;
			way2_w_ena = `ysyx_22051013_ENABLE;
			cache_w_strb = `ysyx_22051013_STRB128_H;
		end
		
		else if(way1_recent_use[dcache_index]) begin
			way1_w_ena = `ysyx_22051013_DISABLE;
			way2_w_ena = `ysyx_22051013_ENABLE;
			cache_w_strb = `ysyx_22051013_STRB128_H;
		end
		
		else if(way2_recent_use[dcache_index]) begin
			way1_w_ena = `ysyx_22051013_ENABLE;
			way2_w_ena = `ysyx_22051013_DISABLE;
			cache_w_strb = `ysyx_22051013_STRB128_L;
		end
		
		else begin
			way1_w_ena = `ysyx_22051013_DISABLE;
			way2_w_ena = `ysyx_22051013_DISABLE;
			cache_w_strb = 128'd0;
		end
	end
	else begin
		missw_ena = `ysyx_22051013_DISABLE;
		missw_data = 128'd0;
		cache_w_strb = 128'd0;
		missw_pc = `ysyx_22051013_ZERO64;
		way1_w_ena = `ysyx_22051013_DISABLE;
		way2_w_ena = `ysyx_22051013_DISABLE;
		write_w_valid = `ysyx_22051013_DISABLE;
	end
end

//------------------------------------------------------write dirty--------------------------------------------------------------//
reg dirtyw_valid;
reg dirtyw_ena;

reg [`ysyx_22051013_PC] dirtyw_pc;
reg [`ysyx_22051013_DATA] dirtyw_data;
always@(*) begin
	if(rst == `ysyx_22051013_RSTABLE) begin
		dirtyw_ena = `ysyx_22051013_DISABLE;
		dirtyw_pc = `ysyx_22051013_ZERO64;
		dirtyw_data = `ysyx_22051013_ZERO64;
		dirtyw_valid = `ysyx_22051013_DISABLE;
	end
	else if((dwrite_state == `ysyx_22051013_D_DIRTYW) & ~delayw) begin
		dirtyw_valid = `ysyx_22051013_DISABLE;
		dirtyw_ena = `ysyx_22051013_ENABLE;
		if(way1_w_dirty) begin 
			dirtyw_pc = {32'd0, d_tag_way1, dcache_index,3'd0};
			dirtyw_data = cache_data[63:0];
		end
		else begin
			dirtyw_pc = {32'd0, d_tag_way2, dcache_index, 3'b0};
			dirtyw_data = cache_data[127:64];
		end
	end
	else if((dwrite_state == `ysyx_22051013_D_DIRTYW) & delayw) begin
		dirtyw_ena = `ysyx_22051013_DISABLE;
		dirtyw_pc = `ysyx_22051013_ZERO64;
		dirtyw_data = `ysyx_22051013_ZERO64;
		dirtyw_valid = `ysyx_22051013_ENABLE;
	end
	else begin
		dirtyw_ena = `ysyx_22051013_DISABLE;
		dirtyw_pc = `ysyx_22051013_ZERO64;
		dirtyw_data = `ysyx_22051013_ZERO64;
		dirtyw_valid = `ysyx_22051013_DISABLE;
	end
end

reg delayw;

always@(posedge clk) begin
	if(rst == `ysyx_22051013_RSTABLE) begin
		delayw <= `ysyx_22051013_DISABLE;
	end
	else if((dwrite_state == `ysyx_22051013_D_DIRTYW) & (axi_valid)) begin
		delayw <= `ysyx_22051013_ENABLE;
	end
	else begin
		delayw <= `ysyx_22051013_DISABLE;
	end
end

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//------------------------------------------------------fencei--------------------------------------------------------------//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

reg [5:0] fencei_state;
reg [5:0] fencei_state_next;
always@(posedge clk) begin 
	if(rst == `ysyx_22051013_RSTABLE) begin
		fencei_state <= `ysyx_22051013_D_IDLE;
	end
	else begin
		fencei_state <= fencei_state_next;
	end
end

always@(*) begin
	if(rst == `ysyx_22051013_RSTABLE) begin
		fencei_state_next = `ysyx_22051013_D_IDLE;
	end
	else begin
		case(fencei_state) 
			`ysyx_22051013_D_IDLE : begin
				if(fencei & dirty_hit) begin
					fencei_state_next = `ysyx_22051013_D_HIT;
				end
				else if(fencei) begin
					fencei_state_next = `ysyx_22051013_D_FENCEI;
				end
				else begin 
					fencei_state_next = `ysyx_22051013_D_IDLE;
				end
			end

			`ysyx_22051013_D_FENCEI : begin
				if(dirty_hit) begin
					fencei_state_next = `ysyx_22051013_D_HIT;
				end
				else if(fencei_index == 8'd128) begin
					fencei_state_next = `ysyx_22051013_D_IDLE;
				end
				else begin
					fencei_state_next = `ysyx_22051013_D_FENCEI;
				end
			end

			`ysyx_22051013_D_HIT : begin
				if(w_finish) begin 
					if(fencei_index == 8'd128) begin
						fencei_state_next = `ysyx_22051013_D_IDLE;
					end
					else begin
						fencei_state_next = `ysyx_22051013_D_FENCEI;
					end
				end
				else begin
					fencei_state_next = `ysyx_22051013_D_HIT;
				end
			end

			default : begin
					fencei_state_next = `ysyx_22051013_D_IDLE;
			end
		endcase
	end
end

reg [7:0] fencei_index;
always@(posedge clk) begin
	if(rst == `ysyx_22051013_RSTABLE) begin
		fencei_index <= 8'd0;
	end
	else if(fencei_state_next == `ysyx_22051013_D_FENCEI)begin
		fencei_index <= fencei_index + 1'b1;
	end
	else begin
		fencei_index <= fencei_index;
	end
end

wire dirty_hit = way1_dirty[fencei_index[5:0]] | way2_dirty[fencei_index[5:0]];

//------------------------------------------------------fencei hit--------------------------------------------------------------//

wire fencei_way1 = (fencei_state == `ysyx_22051013_D_HIT) & (~delayf) & (~fencei_index[6]);
wire fencei_way2 = (fencei_state == `ysyx_22051013_D_HIT) & (~delayf) & (fencei_index[6]);

wire [`ysyx_22051013_PC] fencei_pc = 	(fencei_way1) ? {32'd0, d_tag_way1, fencei_index[5:0],3'd0} : 
					(fencei_way2) ? {32'd0, d_tag_way2, fencei_index[5:0],3'd0} : 
					`ysyx_22051013_ZERO64;
					
wire [`ysyx_22051013_DATA] fencei_data = (fencei_way1) ? cache_data[63:0] : 
					(fencei_way2) ? cache_data[127:64] : 
					`ysyx_22051013_ZERO64;

wire fencei_way1_ena = (fencei_state == `ysyx_22051013_D_HIT & delayf) & (~fencei_index[6]);

wire fencei_way2_ena = (fencei_state == `ysyx_22051013_D_HIT & delayf) & (fencei_index[6]);	

wire fencei_axi_ena  = (fencei_state == `ysyx_22051013_D_HIT & ~delayf);
reg w_finish;

always@(*) begin
	if(rst == `ysyx_22051013_RSTABLE) begin
		w_finish = `ysyx_22051013_DISABLE;
	end
	else if(fencei_state == `ysyx_22051013_D_HIT & ~delayf) begin 
		w_finish = `ysyx_22051013_DISABLE;
	end
	else if(fencei_state == `ysyx_22051013_D_HIT & delayf) begin 
		w_finish = `ysyx_22051013_ENABLE;
	end
	else begin
		w_finish = `ysyx_22051013_DISABLE;
	end
end

reg delayf;

always@(posedge clk) begin
	if(rst == `ysyx_22051013_RSTABLE) begin
		delayf <= `ysyx_22051013_DISABLE;
	end
	else if((fencei_state == `ysyx_22051013_D_HIT) & (axi_valid)) begin
		delayf <= `ysyx_22051013_ENABLE;
	end
	else begin
		delayf <= `ysyx_22051013_DISABLE;
	end
end

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//------------------------------------------------------replace logical---------------------------------------------------------//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
reg way1_recent_use [63:0];
reg way2_recent_use [63:0];
integer i;


always@(posedge clk) begin
	if(rst == `ysyx_22051013_RSTABLE) begin
		for(i=0; i<64; i=i+1) begin
			way1_recent_use[i] <= 1'b0;
			way2_recent_use[i] <= 1'b0;
		end
	end
	if(((dread_state == `ysyx_22051013_D_HIT) & (dcache_tag == d_tag_way1)) | ((dwrite_state == `ysyx_22051013_D_HIT) & (dcache_tag == d_tag_way1))) begin
		way1_recent_use[dcache_index] <= `ysyx_22051013_ENABLE;
		way2_recent_use[dcache_index] <= `ysyx_22051013_DISABLE;
	end
	if(((dread_state == `ysyx_22051013_D_HIT) & (dcache_tag == d_tag_way2)) | ((dwrite_state == `ysyx_22051013_D_HIT) & (dcache_tag == d_tag_way2))) begin
		way1_recent_use[dcache_index] <= `ysyx_22051013_DISABLE;
		way2_recent_use[dcache_index] <= `ysyx_22051013_ENABLE;
	end
	if(fencei_state == `ysyx_22051013_D_HIT & delayf & (~fencei_index[6])) begin 
		way1_recent_use[fencei_index[5:0]] <= `ysyx_22051013_DISABLE;
	end
	if(fencei_state == `ysyx_22051013_D_HIT & delayf & (fencei_index[6])) begin 
		way2_recent_use[fencei_index[5:0]] <= `ysyx_22051013_DISABLE;
	end
end

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//------------------------------------------------------dirty sign---------------------------------------------------------//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

reg way1_dirty [63:0];
reg way2_dirty [63:0];
integer j;

always@(posedge clk) begin
	if(rst == `ysyx_22051013_RSTABLE) begin
		for(j=0; j<64; j=j+1) begin
			way1_dirty[j] <= 1'b0;
			way2_dirty[j] <= 1'b0;
		end
	end
	if(((dwrite_state == `ysyx_22051013_D_HIT) & (dcache_tag == d_tag_way1))) begin
		way1_dirty[dcache_index] <= `ysyx_22051013_ENABLE;
	end
	else if(dirtyr_way1_clean ) begin
		way1_dirty[dcache_index] <= `ysyx_22051013_DISABLE;
	end
	
	if(((dwrite_state == `ysyx_22051013_D_HIT) & (dcache_tag == d_tag_way2))) begin
		way2_dirty[dcache_index] <= `ysyx_22051013_ENABLE;
	end
	else if(dirtyr_way2_clean) begin
		way2_dirty[dcache_index] <= `ysyx_22051013_DISABLE;
	end
	if(fencei_state == `ysyx_22051013_D_HIT & delayf & (~fencei_index[6])) begin 
		way1_dirty[fencei_index[5:0]] <= `ysyx_22051013_DISABLE;
	end
	if(fencei_state == `ysyx_22051013_D_HIT & delayf & (fencei_index[6])) begin 
		way2_dirty[fencei_index[5:0]] <= `ysyx_22051013_DISABLE;
	end	
end
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//------------------------------------------------------ram---------------------------------------------------------//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//------------------------------------------------------tag ram---------------------------------------------------------//
wire way1_ena ;

assign way1_ena = fencei ? fencei_way1_ena :
		(dread_state == `ysyx_22051013_D_MISSR) ? way1_r_ena : 
		(dwrite_state == `ysyx_22051013_D_MISSW) ? way1_w_ena : 
		`ysyx_22051013_DISABLE;

wire [23:0] tag_with_valid = fencei ? 24'd0 : {1'b1,dcache_tag} ;

wire [5:0] tag_index = fencei ? fencei_index[5:0] : dcache_index;

wire [22:0] 	d_tag_way1;
wire		d_tag_valid1;


 ysyx_22051013_cache_tag_ram tag_ram0(
 	.clk(clk),
 	.addr(tag_index),
 	.tag_data_i(tag_with_valid),
 	.write_ena(way1_ena),
 	.tag_data_o(d_tag_way1),
 	.tag_valid(d_tag_valid1)
 );
 
 wire way2_ena ;
 
 assign way2_ena = fencei ? fencei_way2_ena :
 		(dread_state == `ysyx_22051013_D_MISSR) ? way2_r_ena : 
		(dwrite_state == `ysyx_22051013_D_MISSW) ? way2_w_ena : 
		`ysyx_22051013_DISABLE;
 
 wire [22:0] 	d_tag_way2;
 wire		d_tag_valid2;


 ysyx_22051013_cache_tag_ram tag_ram1(
 	.clk(clk),
 	.addr(tag_index),
 	.tag_data_i(tag_with_valid),
 	.write_ena(way2_ena),
 	.tag_data_o(d_tag_way2),
 	.tag_valid(d_tag_valid2)
 );
 
//------------------------------------------------------data ram---------------------------------------------------------//

wire [`ysyx_22051013_CACHE] cache_data;
wire ce = 1'b0;

wire [`ysyx_22051013_CACHE] ram_strb;
assign ram_strb = (dread_state == `ysyx_22051013_D_MISSR) ? cache_r_strb : 
		(dwrite_state == `ysyx_22051013_D_MISSW) ? cache_w_strb : 
		(dwrite_state == `ysyx_22051013_D_HIT) ? hit_w_strb :
		128'd0;

wire ram_ena ;
 
 assign ram_ena = (dread_state == `ysyx_22051013_D_MISSR) ? write_r_valid : 
		(dwrite_state == `ysyx_22051013_D_MISSW) ? write_w_valid : 
		(dwrite_state == `ysyx_22051013_D_HIT) ? data_w_valid :
		`ysyx_22051013_DISABLE;
		
wire [`ysyx_22051013_CACHE] ram_i_data;

assign ram_i_data = (dread_state == `ysyx_22051013_D_MISSR) ? missr_data : 
		(dwrite_state == `ysyx_22051013_D_MISSW) ? missw_data : 
		(dwrite_state == `ysyx_22051013_D_HIT) ? data_write_o :
		128'd0;

wire [5:0] ram_index = fencei ? fencei_index[5:0] : dcache_index;

 ysyx_22051013_cache_data_ram data_ram0(
	.Q(cache_data),
 	.CLK(clk),
	.CEN(ce),
	.WEN(~ram_ena),
	.BWEN(~ram_strb),
 	.A(ram_index),
 	.D(ram_i_data)
 );
 
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//------------------------------------------------------out signal---------------------------------------------------------//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

assign axi_r_ena = (dread_state == `ysyx_22051013_D_MISSR) ? missr_ena : 
		(dwrite_state == `ysyx_22051013_D_MISSW) ? missw_ena : 
		`ysyx_22051013_DISABLE;
		
assign axi_w_ena = (fencei_state == `ysyx_22051013_D_HIT) ? fencei_axi_ena :
		(dread_state == `ysyx_22051013_D_DIRTYR) ? dirtyr_ena :
		(dwrite_state == `ysyx_22051013_D_DIRTYW) ? dirtyw_ena :
		`ysyx_22051013_DISABLE;	

		
assign axi_pc = fencei ? fencei_pc :
		(dread_state == `ysyx_22051013_D_MISSR) ? missr_pc : 
		(dread_state == `ysyx_22051013_D_DIRTYR) ? dirtyr_pc :
		(dwrite_state == `ysyx_22051013_D_MISSW) ? missw_pc : 
		(dwrite_state == `ysyx_22051013_D_DIRTYW) ? dirtyw_pc :
		`ysyx_22051013_ZERO64;
		
assign axi_data_o = fencei ? fencei_data : 
		(dread_state == `ysyx_22051013_D_DIRTYR) ? dirtyr_data :
		(dwrite_state == `ysyx_22051013_D_DIRTYW) ? dirtyw_data :
		`ysyx_22051013_ZERO64;

assign data_valid = fencei ? ~(fencei_state_next == `ysyx_22051013_D_IDLE) :
		(dread_state == `ysyx_22051013_D_HIT) ? ~data_r_valid :
		(dwrite_state == `ysyx_22051013_D_HIT) ? ~data_w_valid :
		re|we;

endmodule

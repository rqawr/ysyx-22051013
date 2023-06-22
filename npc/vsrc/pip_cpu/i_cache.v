/*------
Last modify date : 2023/6/21
Fucntion : generate PC,INST with icache
*/
 `include "pip_cpu/define.v"
 `include "pip_cpu/define_axi.v"
 `include "pip_cpu/cache_tag_ram.v"
 `include "pip_cpu/cache_data_ram.v"

 module ysyx_22051013_i_cache(
	 input	wire		clk	,
	 input	wire		rst	,
	 
	 //to ifu
	 input	wire	[`ysyx_22051013_PC]	inst_pc	,
	 input	wire				pc_ready,	
	 input	wire				fencei	,
	 output	wire				i_valid	,
	 output	wire				hold	,
	 output	reg	[`ysyx_22051013_INST]	inst	,
	 output	wire	[`ysyx_22051013_PC]	pc	,

	 //to axi
	 output	reg	[`ysyx_22051013_PC]	axi_pc	,
	 output	reg				axi_ena	,
	 input	wire	[`ysyx_22051013_DATA]	axi_inst,
	 input	wire				axi_valid	
);
//------------------------------------------------------pc_now--------------------------------------------------------------//
wire [22:0] 	icache_tag = inst_pc[31:9];
wire [5:0]	icache_index = inst_pc[8:3];

wire hit1;
wire hit2;

assign hit1 =  ((hit_tag == i_tag_way1) & (i_tag_valid1 == `ysyx_22051013_ENABLE));
assign hit2 =  ((hit_tag == i_tag_way2) & (i_tag_valid2 == `ysyx_22051013_ENABLE));


reg [63:0] hit_pc;
reg [5:0] hit_index;
reg [22:0] hit_tag;

always@(posedge clk) begin
	if(rst == `ysyx_22051013_RSTABLE) begin
		hit_pc <= 64'd0;
		hit_index <= 6'd0;
		hit_tag <= 23'd0;
	end
	else if((icache_state_next == `ysyx_22051013_I_READ & i_valid) ) begin 
		hit_pc <= inst_pc;
		hit_index <= icache_index;
		hit_tag <= icache_tag;
	end
	else begin 
		hit_pc <= hit_pc;
		hit_index <= hit_index;
		hit_tag <= hit_tag;
	end
end


///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//------------------------------------------------------fencei--------------------------------------------------------------//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
reg [6:0] fencei_index ;

always@(posedge clk) begin 
	if(rst == `ysyx_22051013_RSTABLE) begin
		fencei_index <= 7'd0;
	end
	else if(fencei) begin
		if(fencei_index >= 7'd64) begin
			fencei_index <= fencei_index ;
		end 
		else begin
			fencei_index <= fencei_index + 1'b1;
		end
	end
	else begin
		fencei_index <= 7'd0;
	end
end

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//------------------------------------------------------icache--------------------------------------------------------------//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//---------------------------------------------------icache state trans------------------------------------------------//

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
	if(rst == `ysyx_22051013_RSTABLE) begin
		icache_state_next = `ysyx_22051013_I_IDLE;
	end
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
			if(fencei) begin
				icache_state_next = `ysyx_22051013_I_READ;
			end
			else if(/*(~pc_ready) &*/ (hit1 | hit2)) begin
				icache_state_next = `ysyx_22051013_I_HIT;
			end
			else begin
				icache_state_next = `ysyx_22051013_I_MISS;
			end
		end

		`ysyx_22051013_I_HIT : begin
			if(inst_valid & ~pc_ready) begin 
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

//---------------------------------------------------hit------------------------------------------------//

reg inst_valid;
always@(*) begin
	if(rst == `ysyx_22051013_RSTABLE) begin
		inst = 32'b0;
		inst_valid = `ysyx_22051013_DISABLE;
	end
	else if(icache_state == `ysyx_22051013_I_HIT) begin
		if(hit1 & hit_pc[2]) begin
			inst = cache_data[63:32];
			inst_valid = `ysyx_22051013_ENABLE;
		end
		else if(hit1 & ~hit_pc[2]) begin
			inst = cache_data[31:0];
			inst_valid = `ysyx_22051013_ENABLE;
		end
		else if(hit2 & hit_pc[2]) begin
			inst = cache_data[127:96];
			inst_valid = `ysyx_22051013_ENABLE;
		end
		else if(hit2 & ~hit_pc[2]) begin
			inst = cache_data[95:64];
			inst_valid = `ysyx_22051013_ENABLE;
		end
		else begin
			inst = 32'b0;
			inst_valid = `ysyx_22051013_DISABLE;
		end
	end
	else begin
		inst = 32'b0;
		inst_valid = (icache_state == `ysyx_22051013_I_IDLE);
	end
end

//---------------------------------------------------miss------------------------------------------------//

reg [`ysyx_22051013_CACHE] miss_data;
reg [`ysyx_22051013_CACHE] cache_strb;
reg	cache_ena;
reg	write_in_valid;

reg delay1;
always@(posedge clk) begin
	if(rst == `ysyx_22051013_RSTABLE) begin
		delay1 <= 1'b0;
	end
	else if(icache_state == `ysyx_22051013_I_MISS & axi_valid) begin
		delay1 <= 1'b1;
	end
	else begin
		delay1 <= 1'b0;
	end
end


always@(*) begin
	if(rst == `ysyx_22051013_RSTABLE) begin
		axi_ena = `ysyx_22051013_DISABLE;
		miss_data = 128'd0;
		axi_pc = `ysyx_22051013_ZERO64;
		cache_ena = `ysyx_22051013_DISABLE;
		cache_strb = 128'd0;
		write_in_valid = `ysyx_22051013_DISABLE;
	end
	if(icache_state == `ysyx_22051013_I_MISS & ~axi_valid & ~delay1) begin 
		axi_ena = `ysyx_22051013_ENABLE;
		axi_pc = {hit_pc[63:3],3'b000};
		miss_data = 128'd0;
		cache_strb = 128'd0;
		cache_ena = `ysyx_22051013_DISABLE;
		write_in_valid = `ysyx_22051013_DISABLE;
	end
	else if(icache_state == `ysyx_22051013_I_MISS & axi_valid) begin
		axi_ena = `ysyx_22051013_DISABLE;
		axi_pc = `ysyx_22051013_ZERO64;
		miss_data = {axi_inst,axi_inst};
		write_in_valid = `ysyx_22051013_DISABLE;
		cache_ena = `ysyx_22051013_ENABLE;
		if(i_tag_valid1 == `ysyx_22051013_DISABLE) begin
			cache_strb = `ysyx_22051013_STRB128_L;
		end
		
		else if(i_tag_valid2 == `ysyx_22051013_DISABLE) begin
			cache_strb = `ysyx_22051013_STRB128_H;
		end
		
		else if(way1_recent_use[hit_index]) begin
			cache_strb = `ysyx_22051013_STRB128_H;
		end
		
		else if(way2_recent_use[hit_index]) begin
			cache_strb = `ysyx_22051013_STRB128_L;
		end
		
		else begin
			cache_strb = 128'd0;
		end
	end
	else if(icache_state == `ysyx_22051013_I_MISS & delay1) begin
		axi_ena = `ysyx_22051013_DISABLE;
		axi_pc = `ysyx_22051013_ZERO64;
		miss_data = 128'd0;
		write_in_valid = `ysyx_22051013_ENABLE;
		cache_strb = 128'd0;
		cache_ena = `ysyx_22051013_DISABLE;
	end
	else begin
		axi_ena = `ysyx_22051013_DISABLE;
		miss_data = 128'd0;
		axi_pc = `ysyx_22051013_ZERO64;
		cache_ena = `ysyx_22051013_DISABLE;
		cache_strb = 128'd0;
		write_in_valid = `ysyx_22051013_DISABLE;
	end
end

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//------------------------------------------------------ram--------------------------------------------------------------//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//------------------------------------------------------tag ram--------------------------------------------------------------//

wire [22:0] tag = 	((icache_state == `ysyx_22051013_I_HIT) & ~pc_ready)? icache_tag :	
			hit_tag;
wire [23:0] tag_with_valid = fencei ? 24'd0 : {1'b1,tag};

wire way1_tag_ena = 	fencei ? 1'b1 :
			(icache_state == `ysyx_22051013_I_MISS) & (cache_strb == `ysyx_22051013_STRB128_L);

wire way2_tag_ena = 	fencei ? 1'b1 :
			(icache_state == `ysyx_22051013_I_MISS) & (cache_strb == `ysyx_22051013_STRB128_H);

wire [5:0] index = 	fencei ? fencei_index[5:0] :
			((icache_state == `ysyx_22051013_I_HIT) & ~pc_ready) ? icache_index :
			hit_index;
			
			
 wire [22:0] 	i_tag_way1;
 wire		i_tag_valid1;
 wire [22:0] 	i_tag_way2;
 wire		i_tag_valid2;

 ysyx_22051013_cache_tag_ram tag_ram0(
 	.clk(clk),
 	.addr(index),
 	.tag_data_i(tag_with_valid),
 	.write_ena(way1_tag_ena),
 	.tag_data_o(i_tag_way1),
 	.tag_valid(i_tag_valid1)
 );

 ysyx_22051013_cache_tag_ram tag_ram1(
 	.clk(clk),
 	.addr(index),
 	.tag_data_i(tag_with_valid),
 	.write_ena(way2_tag_ena),
 	.tag_data_o(i_tag_way2),
 	.tag_valid(i_tag_valid2)
 );
 
//------------------------------------------------------data ram--------------------------------------------------------------//

wire [`ysyx_22051013_CACHE] cache_data;
wire ce = (icache_state == `ysyx_22051013_I_IDLE);

 ysyx_22051013_cache_data_ram data_ram0(
	.Q(cache_data),
 	.CLK(clk),
	.CEN(ce),
	.WEN(~cache_ena),
	.BWEN(~cache_strb),
 	.A(hit_index),
 	.D(miss_data)
 );
 		
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//---------------------------------------------cacheline replace logical-------------------------------------------------------//
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
	if((icache_state == `ysyx_22051013_I_HIT) & hit1) begin
		way1_recent_use[hit_index] <= `ysyx_22051013_ENABLE;
		way2_recent_use[hit_index] <= `ysyx_22051013_DISABLE;
	end
	if((icache_state == `ysyx_22051013_I_HIT) & hit2) begin
		way1_recent_use[hit_index] <= `ysyx_22051013_DISABLE;
		way2_recent_use[hit_index] <= `ysyx_22051013_ENABLE;
	end
	if(fencei) begin
		way1_recent_use[fencei_index[5:0]] <= `ysyx_22051013_DISABLE;
		way2_recent_use[fencei_index[5:0]] <= `ysyx_22051013_DISABLE;
	end
end
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//------------------------------------------------------output sign--------------------------------------------------------------//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

assign pc = hit_pc;
assign i_valid = fencei ? ~pc_ready : inst_valid;
assign hold = (icache_state == `ysyx_22051013_I_IDLE);

endmodule



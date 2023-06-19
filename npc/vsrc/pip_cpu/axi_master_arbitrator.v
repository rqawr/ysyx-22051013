/*----
*
*
*/

`include "pip_cpu/define.v"
`include "pip_cpu/define_axi.v"
module ysyx_22051013_axi_master_arbitrator(
	input	wire		clk	,
	input	wire		rst	,
	
	//to icache
	input	wire	[`ysyx_22051013_PC]	icache_pc	,
	input	wire				icache_ena	,
	output	wire	[`ysyx_22051013_DATA]	axi_inst	,
	output	wire				axi_inst_valid,
	
	//to lsu
	input	wire	[`ysyx_22051013_PC]	data_pc	,
	input	wire	[`ysyx_22051013_DATA]	data_i,
	input	wire				we,
	input	wire				re,
	input	wire	[2:0]			data_size,
	input	wire	[7:0]			wmask,
	input 	wire				clint_ena	,
	output	wire	[`ysyx_22051013_DATA]	data_o,
	output	wire				axi_data_valid,



	//write address channel
	output	wire 	[`ysyx_22051013_ID]	axi_aw_id	,
	output	wire	[`ysyx_22051013_ADDR]	axi_aw_addr	,	
	output	wire				axi_aw_valid	,
	input	wire				axi_aw_ready	,
	output	wire	[7:0]			axi_aw_len	,
	output	wire	[2:0]			axi_aw_size	,
	output	wire	[1:0]			axi_aw_burst	,
	
	//write data channel
	output	wire	[`ysyx_22051013_DATA]	axi_w_data	,
	output	wire	[`ysyx_22051013_STRB]	axi_w_strb	,
	output	wire				axi_w_last	,
	output	wire				axi_w_valid	,
	input	wire				axi_w_ready	,
	
	//write respond channel
	input	wire	[`ysyx_22051013_ID]	axi_b_id	,
	input	wire	[`ysyx_22051013_RESP]	axi_b_resp	,	
	input	wire				axi_b_valid	,
	output	wire				axi_b_ready	,
	
	//read address channel
	output	wire	[`ysyx_22051013_ID]	axi_ar_id	,
	output	wire	[`ysyx_22051013_ADDR]	axi_ar_addr	,
	output	wire	[7:0]			axi_ar_len	,
	output	wire	[2:0]			axi_ar_size	,
	output	wire	[1:0]			axi_ar_burst	,	
	output	wire				axi_ar_valid	,
	input	wire				axi_ar_ready	,
	
	//read data channel
	input	wire	[`ysyx_22051013_ID]	axi_r_id	,
	input	wire	[`ysyx_22051013_DATA]	axi_r_data	,
	input	wire	[`ysyx_22051013_RESP]	axi_r_resp	,
	input	wire				axi_r_last	,
	input	wire				axi_r_valid	,
	output	wire				axi_r_ready	
);


wire if_read;
wire ls_read;
wire ls_write;

assign if_read = (read_state == 2'b00) & icache_ena ; 
assign ls_read = (read_state == 2'b00) & re ;
assign ls_write =  we ;

wire w_valid = we ;
wire r_valid = if_read | ls_read;

wire aw_sh = axi_aw_ready & axi_aw_valid;
wire w_sh = axi_w_ready & axi_w_valid & axi_w_last;
wire b_sh = axi_b_ready & axi_b_valid;
wire ar_sh = axi_ar_ready & axi_ar_valid;
wire r_sh = axi_r_ready & axi_r_valid & axi_r_last;

//write_state
reg [2:0] arb_w_state;

always@(posedge clk) begin 
	if(rst == `ysyx_22051013_RSTABLE) begin
		arb_w_state  <= `ysyx_22051013_ARB_IDLE ;
	end
	else begin
	  
		case(arb_w_state)
			`ysyx_22051013_ARB_IDLE : begin
				if(w_valid) begin
					arb_w_state <= `ysyx_22051013_ARB_ADDR;
				end
				else begin
					arb_w_state <= `ysyx_22051013_ARB_IDLE;
				end
			end
			`ysyx_22051013_ARB_ADDR : begin
				if(w_sh) begin
					arb_w_state <= `ysyx_22051013_ARB_RESP;
				end
				else if(aw_sh) begin
					arb_w_state <= `ysyx_22051013_ARB_WRITE;
				end
				else begin
					arb_w_state <= `ysyx_22051013_ARB_ADDR;
				end
			end
			`ysyx_22051013_ARB_WRITE : begin
				if(w_sh) begin
					arb_w_state <= `ysyx_22051013_ARB_RESP;
				end
				else begin
					arb_w_state <= `ysyx_22051013_ARB_WRITE;
				end
			end
			`ysyx_22051013_ARB_RESP : begin
				if(b_sh) begin
					arb_w_state  <= `ysyx_22051013_ARB_IDLE ;
				end
				else begin
					arb_w_state <= `ysyx_22051013_ARB_RESP;
				end
			end
			default : begin arb_w_state  <= `ysyx_22051013_ARB_IDLE ; end
		endcase
	end
end

//read_state
reg [2:0] arb_r_state;

always@(posedge clk) begin 
	if(rst == `ysyx_22051013_RSTABLE) begin
		arb_r_state  <= `ysyx_22051013_ARB_IDLE ;
	end
	else begin
		case(arb_r_state)
			`ysyx_22051013_ARB_IDLE : begin
				if(r_valid) begin
					arb_r_state <= `ysyx_22051013_ARB_ADDR;
				end
				else begin
					arb_r_state <= `ysyx_22051013_ARB_IDLE;
				end
			end
			`ysyx_22051013_ARB_ADDR : begin
				if(ar_sh) begin
					arb_r_state <= `ysyx_22051013_ARB_READ;
				end
				else begin
					arb_r_state <= `ysyx_22051013_ARB_ADDR;
				end
			end
			`ysyx_22051013_ARB_READ : begin
				if(r_sh) begin
					arb_r_state <= `ysyx_22051013_ARB_IDLE;
				end
				else begin
					arb_r_state <= `ysyx_22051013_ARB_READ;
				end
			end
			default : begin arb_r_state  <= `ysyx_22051013_ARB_IDLE ; end
		endcase
	end
end

//axi_value

//aw_channel
assign axi_aw_id =  clint_ena ? 5'd2 : 5'd1 ;
assign axi_aw_addr =  data_pc ;
assign axi_aw_valid = (arb_w_state == `ysyx_22051013_ARB_ADDR) & w_valid ;
assign axi_aw_len = 8'd1;
assign axi_aw_size = data_size;
assign axi_aw_burst = `ysyx_22051013_AXI_BURST_INCR;
//w_channel
assign axi_w_data =  data_i ;
assign axi_w_strb = wmask;
assign axi_w_valid = (arb_w_state == `ysyx_22051013_ARB_ADDR) & w_valid ;
assign axi_w_last = w_valid;
//b_channel
assign axi_b_ready = `ysyx_22051013_ENABLE;


//read
//ar_channel
assign axi_ar_id =  (read_state == 2'b10) & clint_ena ? 5'd2 : 5'd1 ;

assign axi_ar_len = 8'd1;

assign axi_ar_size = (read_state == 2'b01) ? 3'b110 : (read_state == 2'b10) ? data_size : 3'b000;

assign axi_ar_burst = `ysyx_22051013_AXI_BURST_INCR;

assign axi_ar_addr = (read_state == 2'b01) ? icache_pc : 
		     (read_state == 2'b10) ? data_pc :
		     `ysyx_22051013_ZERO64;
		     
assign axi_ar_valid = (arb_r_state == `ysyx_22051013_ARB_ADDR) ;
//r_channel
assign axi_r_ready = `ysyx_22051013_ENABLE;

//////////out////////////
reg [1:0] read_state;
reg [1:0] read_state_next;

always@(posedge clk) begin 
	if(rst == `ysyx_22051013_RSTABLE) begin
		read_state  <= 2'b00 ;
	end
	else begin
		read_state  <= read_state_next     ;
	end
end

always@(*) begin
	case(read_state)
		2'b00 : begin
			if(if_read) begin
				read_state_next = 2'b01;
			end
			else if(ls_read) begin
				read_state_next = 2'b10;
			end
			else begin
				read_state_next = 2'b00;
			end
		end
		2'b10 : begin
			if(r_sh) begin
				read_state_next = 2'b00;
			end
			else begin
				read_state_next = 2'b10;
			end
		end
		2'b01 : begin
			if(r_sh) begin
				read_state_next = 2'b00;
			end
			else begin
				read_state_next = 2'b01;
			end
		end
		default : read_state_next = 2'b00;
	endcase
end

assign data_o = ((read_state == 2'b10) & r_sh) ? axi_r_data : `ysyx_22051013_ZERO64;
assign axi_inst = ((read_state == 2'b01) & r_sh) ? axi_r_data : `ysyx_22051013_ZERO64;

wire data_w_not_ready = b_sh;
wire data_r_not_ready =  r_sh;
assign axi_inst_valid =  (read_state == 2'b01) & r_sh;

assign axi_data_valid = (read_state == 2'b10) ? data_r_not_ready : ls_write ? data_w_not_ready : 1'b0;



endmodule

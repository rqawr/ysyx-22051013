/*----
*
*
*/

`include "pip_cpu/define.v"
`include "pip_cpu/define_axi.v"
module ysyx_22051013_axi_master_arbitrator(
	input wire		clk	,
	input wire		rst	,
	
	//to icache
	input wire [`ysyx_22051013_PC]	icache_pc	,
	input wire			icache_ena	,
	output reg [`ysyx_22051013_DATA]axi_inst	,
	output reg			axi_inst_valid,
	
	//to lsu
	input wire [`ysyx_22051013_PC]	data_pc	,
	input wire [`ysyx_22051013_DATA] data_i,
	input wire			we,
	input wire			re,
	input wire			data_ok,
	input wire [7:0]			wmask,
	output reg [`ysyx_22051013_DATA]	data_o,
	output reg			data_not_ready,



	//write address channel
	output wire [`ysyx_22051013_ID]		axi_aw_id	,
	output wire	[`ysyx_22051013_ADDR]	axi_aw_addr	,	
	output wire			axi_aw_valid	,
	input  wire			axi_aw_ready	,
	
	//write data channel
	output wire [`ysyx_22051013_DATA]	axi_w_data	,
	output wire [`ysyx_22051013_STRB]	axi_w_strb	,
	output wire			axi_w_valid	,
	input wire			axi_w_ready	,
	
	//write respond channel
	input wire [`ysyx_22051013_ID]		axi_b_id	,
	input wire [`ysyx_22051013_RESP]	axi_b_resp	,	
	input wire			axi_b_valid	,
	output wire			axi_b_ready	,
	
	//read address channel
	output wire [`ysyx_22051013_ID]		axi_ar_id	,
	output wire	[`ysyx_22051013_ADDR]	axi_ar_addr	,	
	output wire			axi_ar_valid	,
	input  wire			axi_ar_ready	,
	
	//read data channel
	input wire [`ysyx_22051013_ID]		axi_r_id	,
	input wire [`ysyx_22051013_DATA]	axi_r_data	,
	input wire [`ysyx_22051013_RESP]	axi_r_resp	,
	input wire			axi_r_valid	,
	output wire			axi_r_ready	
);


wire if_chosen;
wire ls_chosen_read;
wire ls_chosen_write;

assign if_chosen = icache_ena; 
assign ls_chosen_read = ~if_chosen & re & data_ok;
assign ls_chosen_write = ~if_chosen & we & data_ok;

reg [2:0] arb_state;
reg [2:0] arb_state_next;

always@(posedge clk) begin 
	if(rst == `ysyx_22051013_RSTABLE) begin
		arb_state  <= `ysyx_22051013_ARB_IDLE ;
	end
	else begin
		arb_state  <= arb_state_next     ;
	end
end

always@(*) begin
	case(arb_state)
		`ysyx_22051013_ARB_IDLE : begin
			if(if_chosen) begin
				arb_state_next = `ysyx_22051013_ARB_IREAD;
			end
			else if(ls_chosen_write) begin
				arb_state_next = `ysyx_22051013_ARB_DWRITE;
			end
			else if(ls_chosen_read) begin
				arb_state_next = `ysyx_22051013_ARB_DREAD;
			end
			else begin
				arb_state_next = `ysyx_22051013_ARB_IDLE;
			end
		end
		`ysyx_22051013_ARB_DWRITE : begin
			if(dwrite_shakehand) begin
				arb_state_next = `ysyx_22051013_ARB_IDLE;
			end
			else begin
				arb_state_next = `ysyx_22051013_ARB_DWRITE;
			end
		end
		`ysyx_22051013_ARB_DREAD : begin
			if(dread_shakehand) begin
				arb_state_next = `ysyx_22051013_ARB_IDLE;
			end
			else begin
				arb_state_next = `ysyx_22051013_ARB_DREAD;
			end
		end
		`ysyx_22051013_ARB_IREAD : begin
			if(iread_shakehand) begin
				arb_state_next = `ysyx_22051013_ARB_IDLE;
			end
			else begin
				arb_state_next = `ysyx_22051013_ARB_IREAD;
			end
		end
		default : arb_state_next = `ysyx_22051013_ARB_IDLE;
	endcase
end


//write 
wire dwrite_shakehand;
assign dwrite_shakehand = axi_b_valid & axi_b_ready & (axi_b_resp == 2'b00) & (axi_b_id == 5'b00010);

assign axi_aw_id =  5'd2 ;
assign axi_aw_addr =  data_pc ;
assign axi_aw_valid = (arb_state == `ysyx_22051013_ARB_DWRITE) ;
assign axi_w_data =  data_i ;
assign axi_w_strb = wmask ;
assign axi_w_valid = (arb_state == `ysyx_22051013_ARB_DWRITE);
assign axi_b_ready = `ysyx_22051013_ENABLE;

wire data_w_not_ready = ~dwrite_shakehand ;

//read

wire iread_shakehand;
wire dread_shakehand;

assign dread_shakehand = axi_r_valid & axi_r_ready & (axi_r_resp == 2'b00) & (axi_r_id == 5'b00010);
assign iread_shakehand = axi_r_valid & axi_r_ready & (axi_r_resp == 2'b00) & (axi_r_id == 5'b00001);

assign axi_ar_id = (arb_state == `ysyx_22051013_ARB_IREAD) ? 5'd1 : 
		   (arb_state == `ysyx_22051013_ARB_DREAD) ? 5'd2 :
		   5'd0;

assign axi_ar_addr = (arb_state == `ysyx_22051013_ARB_IREAD) ? icache_pc : 
		     (arb_state == `ysyx_22051013_ARB_DREAD) ? data_pc :
		     `ysyx_22051013_ZERO64;
		     
assign axi_ar_valid = (arb_state == `ysyx_22051013_ARB_IREAD) ? `ysyx_22051013_ENABLE : 
		      (arb_state == `ysyx_22051013_ARB_DREAD) ? re :
		      `ysyx_22051013_DISABLE;
		      
assign axi_r_ready = `ysyx_22051013_ENABLE;

//////////

always@(*) begin
	if(iread_shakehand) begin
		data_o = data_temp;
		axi_inst = axi_r_data;
	end
	else if(dread_shakehand) begin 
		data_o = axi_r_data;
		axi_inst = `ysyx_22051013_ZERO64;
	end
	else begin
		data_o = data_temp;
		axi_inst = `ysyx_22051013_ZERO64;
	end
end

reg [`ysyx_22051013_DATA] data_temp;


always@(posedge clk) begin
	if(dread_shakehand) begin 
		data_temp <= axi_r_data;
	end
	else if(arb_state == `ysyx_22051013_ARB_IREAD) begin 
		data_temp <= data_temp;
	end
end



wire data_r_not_ready = ~dread_shakehand;
assign axi_inst_valid =  iread_shakehand;

assign data_not_ready = (arb_state == `ysyx_22051013_ARB_DREAD) ? data_r_not_ready : (arb_state == `ysyx_22051013_ARB_DWRITE) ? data_w_not_ready : 1'b0;



endmodule

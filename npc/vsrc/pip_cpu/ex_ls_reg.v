/*-------------------------------------
* Last modify date : 2023/7/2
* Function : ex-ls reg
---------------------------------------*/
 `include "pip_cpu/define.v"
/* verilator lint_off DECLFILENAME */
module ysyx_22051013_reg_exls(
	//front stage input
	input	wire					clk		,
	input	wire					rst		,
	input	wire	[`ysyx_22051013_INST]		ex_inst 	,
	input	wire	[`ysyx_22051013_PC]		ex_pc		,
	input	wire	[`ysyx_22051013_REG] 		ex_store_data	,
	input 	wire 	[`ysyx_22051013_DATA] 		ex_exu_res	,
	input	wire 	[3:0]      			ex_lsctl	,
	input	wire 	[1:0]     			ex_wbctl	,	
	input	wire                                    ex_rd_ena	,
	input	wire	[`ysyx_22051013_REGADDR]	ex_rd_addr	,
	input	wire	[6:0]				ex_csr_ctl	,
	input	wire	[11:0]				ex_csr_addr	,
	input	wire					ex_fencei	,
	input	wire					ex_csr_ena	,
    
 	//ctl
	input	wire					ex_valid	,	
	input	wire					ls_ready	,
	input	wire					ie_flush	,
	input	wire					ls_flush	,
    
	//output to next stage
	output	reg					ls_fencei	,  
	output	reg	[6:0]				ls_csr_ctl	,
	output	reg	[11:0]				ls_csr_addr	,
	output	reg	[`ysyx_22051013_INST]		ls_inst		,
	output	reg	[`ysyx_22051013_PC]		ls_pc		,
	output	reg 	[`ysyx_22051013_REG] 		ls_store_data 	,
	output 	reg 	[`ysyx_22051013_DATA] 		ls_exu_res	,
	output	reg 	[3:0]      			ls_lsctl	,
	output	reg 	[1:0]		     		ls_wbctl   	, 
	output	reg                                     ls_rd_ena	,
	output	reg	[`ysyx_22051013_REGADDR]	ls_rd_addr	,
	
	//ls csr forward to idu
	output	reg					ls_csr_ena	,
    
	//ex forward to idu
	output	wire	[`ysyx_22051013_REGADDR]	ex_rd_addr_forward	,
	output	wire					ex_csr		,
	output	wire	[`ysyx_22051013_DATA]		ex_rd_data_forward	
);

 wire flush = ie_flush | ls_flush;
 wire stall = ex_valid | ls_ready;

always@(posedge clk) begin
	if(rst == `ysyx_22051013_RSTABLE)begin 
		ls_inst		<= 32'd0;
		ls_pc		<= `ysyx_22051013_ZERO64;
		ls_store_data	<= `ysyx_22051013_ZERO64;	
		ls_exu_res	<= `ysyx_22051013_ZERO64;	
		ls_lsctl	<= 4'b0;
		ls_wbctl	<= 2'b0;
		ls_rd_ena	<= 1'b0;
		ls_fencei 	<= 1'b0;
		ls_csr_ctl	<= 7'b0;
		ls_csr_addr	<= 12'b0;
		ls_rd_addr	<= 5'd0;
		ls_csr_ena 	<= 1'b0;
	end
	else if(stall) begin 
		ls_inst		<= ls_inst;
		ls_pc		<= ls_pc;
		ls_store_data	<= ls_store_data;		
		ls_exu_res	<= ls_exu_res;
		ls_lsctl	<= ls_lsctl;
		ls_wbctl	<= ls_wbctl;
		ls_rd_ena	<= ls_rd_ena;
		ls_fencei	<= ls_fencei;
		ls_csr_ctl	<= ls_csr_ctl;
		ls_csr_addr	<= ls_csr_addr;
		ls_rd_addr	<= ls_rd_addr;
		ls_csr_ena 	<= ls_csr_ena;
	end
	else if(flush)begin 
		ls_inst		<= 32'd0;
		ls_pc		<= `ysyx_22051013_ZERO64;
		ls_store_data	<= `ysyx_22051013_ZERO64;	
		ls_exu_res	<= `ysyx_22051013_ZERO64;	
		ls_lsctl	<= 4'b0;
		ls_wbctl	<= 2'b0;
		ls_rd_ena	<= 1'b0;
		ls_fencei 	<= 1'b0;
		ls_csr_ctl	<= 7'b0;
		ls_csr_addr	<= 12'b0;
		ls_rd_addr	<= 5'd0;
		ls_csr_ena 	<= 1'b0;
	end
	else begin
		ls_inst		<= ex_inst;
		ls_pc		<= ex_pc;
		ls_store_data	<= ex_store_data;		
		ls_exu_res	<= ex_exu_res;
		ls_lsctl	<= ex_lsctl;
		ls_wbctl	<= ex_wbctl;
		ls_fencei	<= ex_fencei;
		ls_rd_ena	<= ex_rd_ena;
		ls_csr_ctl	<= ex_csr_ctl;
		ls_csr_addr	<= ex_csr_addr;
		ls_rd_addr	<= ex_rd_addr;
		ls_csr_ena 	<= ex_csr_ena;
	end
end

assign ex_rd_addr_forward = ex_rd_addr	;
assign ex_rd_data_forward = ex_exu_res	;
assign ex_csr = ex_csr_ena;

endmodule

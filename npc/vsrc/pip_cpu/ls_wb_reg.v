
/*-------------------------------------
* Last modify date : 2023/7/2
* Function : ls-wb reg
---------------------------------------*/
 `include "pip_cpu/define.v"
/* verilator lint_off DECLFILENAME */
module ysyx_22051013_reg_lswb(
	//front stage input
	input	wire                                     clk		,
	input	wire                                     rst		,
	input	wire	[`ysyx_22051013_INST]		ls_inst	,
	input	wire	[`ysyx_22051013_PC]		ls_pc		,
	input	wire 	[1:0]				ls_wbctl    	,
	input 	wire 	[`ysyx_22051013_DATA]		ls_exu_res	,
	input	wire 	[`ysyx_22051013_DATA]		ls_wbdata	,
	input	wire					ls_rd_ena	,
	input	wire	[`ysyx_22051013_REGADDR]	ls_rd_addr	,   
	input	wire 	[`ysyx_22051013_DATA]		ls_data_forward	,
	input	wire	[6:0]				ls_csr_ctl	,
	input	wire	[11:0]				ls_csr_addr	,
    
	//ctl
	input	wire					ls_valid	,
	input	wire					wb_ready	,
	input	wire					ie_flush	,	

	//output to next stage  
	output	reg	[6:0]				wb_csr_ctl	,
	output	reg	[11:0]				wb_csr_addr	,
	output	reg	[`ysyx_22051013_INST]		wb_inst		,
	output	reg	[`ysyx_22051013_PC]		wb_pc		,
	output	reg 	[1:0]				wb_wbctl    	,
	output 	reg 	[`ysyx_22051013_DATA]		wb_exu_res	,
	output	reg 	[`ysyx_22051013_DATA]     	wb_wbdata	,
	output	reg                                     wb_rd_ena	,
	output	reg	[`ysyx_22051013_REGADDR]	wb_rd_addr	,
	
    	//ls forward to idu
	output	wire	[`ysyx_22051013_REGADDR]	ls_rd_addr_forward	,
	output	wire	[`ysyx_22051013_DATA]		ls_rd_data_forward	
);
wire flush = ie_flush;
 wire stall = ls_valid | wb_ready;

always@(posedge clk) begin
	if(rst == `ysyx_22051013_RSTABLE)begin 
		wb_inst		<= 32'd0;
		wb_pc		<= `ysyx_22051013_ZERO64;
		wb_wbctl	<= 2'b0;
		wb_exu_res	<= `ysyx_22051013_ZERO64;
		wb_wbdata	<= `ysyx_22051013_ZERO64;
		wb_rd_ena	<= 1'b0;
		wb_csr_ctl	<= 7'b0;
		wb_csr_addr	<= 12'd0;
		wb_rd_addr	<= 5'd0;    
	end
	else if(stall) begin
		wb_inst		<= wb_inst;
		wb_pc 		<= wb_pc ;
		wb_wbctl	<= wb_wbctl;
		wb_exu_res	<= wb_exu_res;
		wb_wbdata	<= wb_wbdata;
		wb_rd_ena	<= wb_rd_ena ;
		wb_csr_ctl	<= wb_csr_ctl;
		wb_csr_addr	<= wb_csr_addr;
		wb_rd_addr	<= wb_rd_addr;
	end 
	else if(flush)begin 
		wb_inst		<= 32'd0;
		wb_pc		<= `ysyx_22051013_ZERO64;
		wb_wbctl	<= 2'b0;
		wb_exu_res	<= `ysyx_22051013_ZERO64;
		wb_wbdata	<= `ysyx_22051013_ZERO64;
		wb_rd_ena	<= 1'b0;
		wb_csr_ctl	<= 7'b0;
		wb_csr_addr	<= 12'd0;
		wb_rd_addr	<= 5'd0;    
	end
	else begin
		wb_inst		<= ls_inst;
		wb_pc		<= ls_pc ;
		wb_wbctl	<= ls_wbctl;
		wb_exu_res	<= ls_exu_res;
		wb_wbdata	<= ls_wbdata;
		wb_rd_ena	<= ls_rd_ena;
		wb_csr_ctl	<= ls_csr_ctl;
		wb_csr_addr	<= ls_csr_addr;
		wb_rd_addr	<= ls_rd_addr;
	end
end

assign ls_rd_addr_forward = ls_rd_addr	;
assign ls_rd_data_forward = ls_data_forward	;

endmodule

/*--------------------------------------
* Last modify date : 2023/7/8
* Function : write back data to regs
--------------------------------------*/


 `include "pip_cpu/define.v"
 `include "pip_cpu/csr.v"
 module ysyx_22051013_wbu(
 	input	wire 					clk	,
 	input	wire            			rst	,
 	input	wire	[`ysyx_22051013_DATA]		ls_rd_data  ,
 	input	wire	[1:0]      			wb_ctl	,
 	input	wire	[`ysyx_22051013_DATA]		exu_res	,
 	input	wire	[`ysyx_22051013_INST]		inst_i	,
        input	wire	[`ysyx_22051013_PC]		pc_i	,
        input	wire					rd_ena	,
    	input	wire	[`ysyx_22051013_REGADDR]	rd_addr	, 
    	input	wire	[6:0]				csr_ctl	,
    	input	wire	[11:0]				csr_addr,
    	input	wire	[`ysyx_22051013_PC]		ls_pc_i	,
    	input	wire					ls_valid,
    	input 	wire					id_stall,
    	input 	wire					time_interrupt,
    	output	wire					wb_ready,
    	
    	output	wire	[`ysyx_22051013_PC]		ie_jump_pc	,
        output	wire					ie_flush	,
        output	wire                                    ie_jump          ,
        
        output	wire	[`ysyx_22051013_REGADDR]	wb_rd_addr_forward	,
        output	wire	[`ysyx_22051013_DATA]		wb_rd_data_forward	,
        output	wire                                    wb_rd_ena          ,
    	output	wire	[`ysyx_22051013_REGADDR]	wb_rd_addr         , 
 	output	wire	[`ysyx_22051013_DATA]		wb_data   
 	
);
//hzd_ctl
assign wb_ready = 1'b0;

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//------------------------------------------------------csr--------------------------------------------------------------//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

wire  [`ysyx_22051013_DATA]    read_csr_data  ;
wire  [`ysyx_22051013_DATA]    write_csr_data  ;
wire  [`ysyx_22051013_DATA]    w_csr_data  ;
wire  [`ysyx_22051013_DATA]    mcause_value  ;

wire [`ysyx_22051013_DATA] set_data     = read_csr_data | exu_res ;
wire [`ysyx_22051013_DATA] clear_data   = read_csr_data & (~exu_res) ;

assign mcause_value = csr_ctl[1] ? 64'd11 : time_jump ? 64'h8000000000000007 : `ysyx_22051013_ZERO64;

assign write_csr_data =	({64{csr_ctl[6]}} & exu_res) | 
			({64{csr_ctl[5]}} & set_data) | 
			({64{csr_ctl[4]}} & clear_data) | 
			({64{csr_ctl[1]}} & pc_i) | 
			`ysyx_22051013_ZERO64;

assign w_csr_data = time_jump ? ls_pc_i : write_csr_data;

wire	time_jump;


 ysyx_22051013_csr csr_operate(
	.clk(clk)	,
	.rst(rst)	,
	.pc_i(ls_pc_i)	,
	.csr_ctl(csr_ctl[3:0])	,
	.csr_addr(csr_addr)	,
	.core_valid(ls_valid),
	.mcause_value(mcause_value),
	.time_interrupt(time_interrupt),
	.time_interrupt_confirm(time_jump),
	.read_csr_data(read_csr_data),
	.write_csr_data(w_csr_data)
);

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//------------------------------------------------------jump--------------------------------------------------------------//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

assign ie_jump = csr_ctl[1] | csr_ctl[0] | time_jump;
assign ie_jump_pc = ie_jump ? read_csr_data : `ysyx_22051013_ZERO64;
assign ie_flush = ie_jump;

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//------------------------------------------------------out--------------------------------------------------------------//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

assign wb_data = (csr_ctl[3:0] != 4'd0) ? read_csr_data :
		 (wb_ctl == 2'b01) ?  ls_rd_data :
		 (wb_ctl == 2'b10) ?  exu_res :
		 `ysyx_22051013_ZERO64;

assign wb_rd_ena =  rd_ena	;
assign wb_rd_addr = rd_addr	;

//out to idu
assign wb_rd_addr_forward = wb_rd_addr	;
assign wb_rd_data_forward = wb_data	;



//--------------------DPI-C----------------------//
import "DPI-C" function void pc_inst_end(input longint thepc_data, input bit[31:0] the_inst);
import "DPI-C" function void ebreak (input bit ebreak_ena);
reg delay;
reg [63:0] pc_delay;
always@(posedge clk) begin
	if(rst == `ysyx_22051013_RSTABLE) begin
		delay <= 1'b0;
		pc_delay <= 64'd0;
	end
	else if(id_stall & ~ls_valid) begin 
		delay <= 1'b1;
		pc_delay <= pc_i;
	end
	else begin
		delay <= 1'b0;
		pc_delay <= 64'd0;
	end
end

wire ebreak_ena;
assign ebreak_ena = inst_i == `EBREAK_TRAP ? 1'b1 : 1'b0;

 always @(posedge clk) begin
   if(~ls_valid & ~id_stall & ~time_jump) begin
   	pc_inst_end(pc_i, inst_i);
   end
   if(delay & ~time_jump) begin
   pc_inst_end(pc_delay, inst_i);
   end
   ebreak(ebreak_ena);
 end
 

endmodule


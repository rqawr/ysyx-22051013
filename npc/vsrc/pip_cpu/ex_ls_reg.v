/*-------
*
*
*/
 `include "pip_cpu/define.v"
/* verilator lint_off DECLFILENAME */
module ysyx_22051013_reg_exls(
    input	wire                                     clk                ,
    input	wire                                     rst                ,
    //input       wire					 exls_stall	,

    input	wire       [`ysyx_22051013_INST]         ex_inst            ,
    input	wire       [`ysyx_22051013_PC]           ex_pc              ,
    input	wire 	[`ysyx_22051013_REG] 		ex_store_data	 ,
    input 	wire 	[`ysyx_22051013_DATA] 		ex_exu_res	,
    input	wire 	[3:0]      			ex_lsctl   ,
    input	wire 	[1:0]     			ex_wbctl    ,	
    input     wire                                     ex_rd_ena          ,
    input     wire       [`ysyx_22051013_REGADDR]      ex_rd_addr         ,
    
    input	wire					ex_valid	,	
    input	wire					ls_ready	,
    

    output	reg       [`ysyx_22051013_INST]         ls_inst            ,
    output	reg       [`ysyx_22051013_PC]           ls_pc              ,
    output	reg 	[`ysyx_22051013_REG] 		ls_store_data 	,
    output 	reg 	[`ysyx_22051013_DATA] 		ls_exu_res	,
    output	reg 	[3:0]      			ls_lsctl   ,
    output	reg 	[1:0]		     		ls_wbctl   	, 
    output     reg                                     ls_rd_ena          ,
    output     reg       [`ysyx_22051013_REGADDR]      ls_rd_addr         ,
    output	wire	[`ysyx_22051013_REGADDR]	ex_rd_addr_forward	,
    output	wire	[`ysyx_22051013_DATA]		ex_rd_data_forward	
);



always@(posedge clk) begin
  if(rst == `ysyx_22051013_RSTABLE)begin 
    ls_inst <= 32'd0;
    ls_pc   <= `ysyx_22051013_ZERO64;
    ls_store_data <= `ysyx_22051013_ZERO64;	
    ls_exu_res <= `ysyx_22051013_ZERO64;	
    ls_lsctl <= 4'b0;
    ls_wbctl <= 2'b0;
    ls_rd_ena <= 1'b0;
    ls_rd_addr <= 5'd0;
  end
  else if(ls_ready | ex_valid) begin 
    ls_inst <= ls_inst;
    ls_pc   <= ls_pc;
    ls_store_data <= ls_store_data;		
    ls_exu_res <= ls_exu_res;
    ls_lsctl <= ls_lsctl;
    ls_wbctl <= ls_wbctl;
    ls_rd_ena <= ls_rd_ena;
    ls_rd_addr <= ls_rd_addr;
  end
  else begin
    ls_inst <= ex_inst;
    ls_pc   <= ex_pc;
    ls_store_data <= ex_store_data;		
    ls_exu_res <= ex_exu_res;
    ls_lsctl <= ex_lsctl;
    ls_wbctl <= ex_wbctl;
    ls_rd_ena <= ex_rd_ena;
    ls_rd_addr <= ex_rd_addr;
  end
end

assign ex_rd_addr_forward = ex_rd_addr	;
assign ex_rd_data_forward = ex_exu_res	;

endmodule

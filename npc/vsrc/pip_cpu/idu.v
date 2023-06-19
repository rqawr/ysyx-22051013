/*------
Last modify date : 2022/3/8
Fucntion : decode , add more instruct 
*/

  `include "pip_cpu/define.v" 
  `include "pip_cpu/idu_decode.v"
  /* verilator lint_off DECLFILENAME */
module ysyx_22051013_idu(
	//system input
	input		wire		       		rst	,
	
	//ifu input
	input		wire [`ysyx_22051013_INST]	inst_i	,
	input		wire [`ysyx_22051013_PC]	pc_i	,
	output	wire 	[`ysyx_22051013_INST]		inst_o,
	output	wire 	[`ysyx_22051013_PC]		pc_o,
	//bpu

	input	wire					bpu_jump,
	
	//data forward
	input	wire	[`ysyx_22051013_REGADDR]	ex_addr_forward	,
	input	wire	[`ysyx_22051013_DATA]		ex_data_forward	,
	input	wire	[`ysyx_22051013_REGADDR]	ls_addr_forward	,
	input	wire	[`ysyx_22051013_DATA]		ls_data_forward	,
	input	wire	[`ysyx_22051013_REGADDR]	wb_addr_forward	,
	input	wire	[`ysyx_22051013_DATA]		wb_data_forward	,
	input 	wire					ex_load_ena	,
	
	//regfile signal
	output	wire	[`ysyx_22051013_REGADDR]	rs1_addr ,
	output	wire				 	rs1_ena  ,
	input	wire	[`ysyx_22051013_REG]     	rs1_data ,
	
	output	wire	[`ysyx_22051013_REGADDR] 	rs2_addr ,
	output	wire				 	rs2_ena  ,
	input	wire	[`ysyx_22051013_REG]     	rs2_data ,
	
	output   	wire				rd_ena  ,
	output   	wire [`ysyx_22051013_REGADDR] 	rd_addr ,
        
	//control out signal
	output  wire	[7:0]         			alusrc_o	,
	output  wire	[3:0]      			lsctl_o		,
	output  wire	[1:0]     			wbctl_o		,
	output	wire	[1:0]				op1_sel		,
	output	wire	[2:0]				op2_sel		,
	output	wire 					load_flag	,	
	
	//id out signal
	output  wire 	[`ysyx_22051013_DATA]  		op1 ,
	output  wire 	[`ysyx_22051013_DATA]  		op2 , 
	output  wire 	[`ysyx_22051013_IMM]      	imm ,
	
	//hzd
	input	wire					ex_ready,
	input	wire					if_valid,
	output	wire					id_flush,
	output	wire					id_ex_flush,
	output	wire					id_ready,
	output	wire					id_valid,
	//output	wire					id_stall,
	//to ifu
	output	wire					jump_ena,
	output	wire	[`ysyx_22051013_PC]		jump_pc
	
);

//hzd_ctl
assign id_flush = jump_ena ;
assign id_ready = ex_ready | id_stall_ena;
assign id_valid = if_valid; 
//assign id_stall = id_stall_ena;

assign id_ex_flush = id_stall_ena;


//----------------------------------decode---------------------------//
wire   [ 4:0]   rd     ;
wire   [ 4:0]   rs1    ;
wire   [ 4:0]   rs2    ;
assign  rd       =  inst_i [11:7]   ;
assign  rs1      =  inst_i [19:15]  ;
assign  rs2      =  inst_i [24:20]  ;

//wire imm_ena ;
wire branch;

ysyx_22051013_idu_decode decode(
	.rst(rst)	,
	.inst(inst_i),
	.rs1_ena(rs1_ena),
	.rs2_ena(rs2_ena),
	.ext_imm(imm)	,
	//.imm_ena(imm_ena),
	.wb_ctl (wbctl_o) ,
 	.mem_ctl(lsctl_o) ,
 	.op1_sel(op1_sel),
 	.op2_sel(op2_sel),
 	.branch(branch) ,
 	.load(load_flag),
	.alu_ctl(alusrc_o)
);

//-------------------------------forward--------------------------//
//stall
wire op1_relate ;//load inst
wire op2_relate ;
wire id_stall_ena;
assign op1_relate = (rst == `ysyx_22051013_RSTABLE) ? 1'b0 : rs1_ena & ex_load_ena & (rs1_addr == ex_addr_forward) ;
assign op2_relate = (rst == `ysyx_22051013_RSTABLE) ? 1'b0 : rs2_ena & ex_load_ena & (rs2_addr == ex_addr_forward) ;
assign id_stall_ena = (rst == `ysyx_22051013_RSTABLE) ? 1'b0 : op1_relate | op2_relate ;

//forward
wire ex_op1_forward ;
wire ls_op1_forward;  
wire wb_op1_forward;

assign ex_op1_forward  = (ex_load_ena | ~rs1_ena | (rs1_addr == 5'd0)) ? 1'b0 : (ex_addr_forward == rs1_addr);
assign ls_op1_forward  = (~rs1_ena | (rs1_addr == 5'd0)) ? 1'b0 : (ls_addr_forward == rs1_addr);
assign wb_op1_forward  = (~rs1_ena | (rs1_addr == 5'd0)) ? 1'b0 : (wb_addr_forward == rs1_addr);

wire ex_op2_forward ;
wire ls_op2_forward;  
wire wb_op2_forward;

assign ex_op2_forward  = (ex_load_ena | ~rs2_ena | (rs2_addr == 5'd0)) ? 1'b0 : (ex_addr_forward == rs2_addr);
assign ls_op2_forward  = (~rs2_ena | (rs2_addr == 5'd0)) ? 1'b0 : (ls_addr_forward == rs2_addr);
assign wb_op2_forward  = (~rs2_ena | (rs2_addr == 5'd0)) ? 1'b0 : (wb_addr_forward == rs2_addr);

wire op1_forward_ena = ex_op1_forward | ls_op1_forward | wb_op1_forward;
wire op2_forward_ena = ex_op2_forward | ls_op2_forward | wb_op2_forward;

wire [`ysyx_22051013_DATA] op1_forward_data;
wire [`ysyx_22051013_DATA] op2_forward_data;

assign op1_forward_data = 	ex_op1_forward ? ex_data_forward :
				ls_op1_forward ? ls_data_forward :
				wb_op1_forward ? wb_data_forward :
				`ysyx_22051013_ZERO64;
				
assign op2_forward_data = 	ex_op2_forward ? ex_data_forward :
				ls_op2_forward ? ls_data_forward :
				wb_op2_forward ? wb_data_forward :
				`ysyx_22051013_ZERO64;
//-------------------------------output--------------------------//

//output to regfile
assign rs1_addr = rs1_ena ? rs1 : 5'd0 ;
assign rs2_addr = rs2_ena ? rs2 : 5'd0 ;
assign rd_ena  = (rd == 5'd0) ? 1'b0 : (wbctl_o == 2'b00) ? 1'b0 : 1'b1 ;
assign rd_addr = rd_ena ? rd : 5'd0 ;


//out to exu

assign op1 = rs1_ena & op1_forward_ena ? op1_forward_data : rs1_ena ? rs1_data : `ysyx_22051013_ZERO64;
assign op2 = rs2_ena & op2_forward_ena ? op2_forward_data : rs2_ena ? rs2_data : `ysyx_22051013_ZERO64;

assign pc_o = rst == `ysyx_22051013_RSTABLE ? `ysyx_22051013_ZERO64 : pc_i	;
assign inst_o = rst == `ysyx_22051013_RSTABLE ? 32'd0 : inst_i	;

// (jump logic)

reg ex_branch ;
/* verilator lint_off UNUSED */
wire     [`ysyx_22051013_DATA]  op1_sub_op2	 = op1 - op2 ; 

wire     op1_lt_op2 = (op1[63] && ~op2[63]) || (~op1[63] && ~op2[63] && op1_sub_op2[63]) || (op1[63] && op2[63] && op1_sub_op2[63]) ;

always @(*) begin
    if(~branch)  begin ex_branch = `ysyx_22051013_BRANCHDISABLE  ;    end
    else begin
        case (alusrc_o) 
             `INST_BEQ     : begin  ex_branch = (op1 == op2) ? `ysyx_22051013_BRANCHABLE : `ysyx_22051013_BRANCHDISABLE ;  end
             `INST_BNE     : begin  ex_branch = (op1 != op2) ? `ysyx_22051013_BRANCHABLE : `ysyx_22051013_BRANCHDISABLE ;  end
             `INST_BLTU    : begin  ex_branch = (op1 <  op2) ? `ysyx_22051013_BRANCHABLE : `ysyx_22051013_BRANCHDISABLE ;  end
             `INST_BGEU    : begin  ex_branch = (op1 >=  op2) ? `ysyx_22051013_BRANCHABLE : `ysyx_22051013_BRANCHDISABLE ;  end
             `INST_BLT     : begin  ex_branch = ( op1_lt_op2 ) ? `ysyx_22051013_BRANCHABLE : `ysyx_22051013_BRANCHDISABLE ;  end
             `INST_BGE     : begin  ex_branch = (~op1_lt_op2 ) ? `ysyx_22051013_BRANCHABLE : `ysyx_22051013_BRANCHDISABLE ;  end
             default:        begin  ex_branch = `ysyx_22051013_BRANCHDISABLE  ;    end 
        endcase
    end
end


//out to ifu

assign jump_ena =((alusrc_o == `INST_JALR)) | (ex_branch ^ bpu_jump);

wire [`ysyx_22051013_DATA] p1;
wire [`ysyx_22051013_DATA] p2;

assign p1 = 	(alusrc_o == `INST_JALR) ? op1 : pc_i ; 
		
assign p2 =	bpu_jump ? `ysyx_22051013_PLUS4 : imm;

assign jump_pc = jump_ena ? (p1 + p2) :
		 `ysyx_22051013_ZERO64;
		 



endmodule

// system 
	`define ysyx_22051013_RSTABLE		1'b1
	`define ysyx_22051013_READY		1'b0
	`define ysyx_22051013_NOTREADY		1'b1
	`define ysyx_22051013_VALID		1'b0
	`define ysyx_22051013_NOTVALID		1'b1

// ifu
	`define ysyx_22051013_PC 63:0
	`define ysyx_22051013_ZERO64 64'h0000000000000000
	`define ysyx_22051013_STARTPC 64'h0000000030000000
	`define ysyx_22051013_PLUS4 64'h0000000000000004

//regfile
	`define ysyx_22051013_REGADDR 4:0
	`define ysyx_22051013_REG 63:0
	`define ysyx_22051013_WENABLE 1'b1
	`define ysyx_22051013_WDISABLE 1'b0
	`define ysyx_22051013_RENABLE 1'b1
	`define ysyx_22051013_RDISABLE 1'b0

//idu
	`define ysyx_22051013_INST 31:0
	`define ysyx_22051013_DATA 63:0
	`define ysyx_22051013_IMM 63:0
	`define ysyx_22051013_SYSTEM			5'b11100
	`define ysyx_22051013_OPIMM			5'b00100
	`define ysyx_22051013_OP        		5'b01100
	`define ysyx_22051013_OPIMM32    	 	5'b00110
	`define ysyx_22051013_OP32      		5'b01110
	`define ysyx_22051013_LUI            		5'b01101
	`define ysyx_22051013_AUIPC          		5'b00101
	`define ysyx_22051013_JAL            		5'b11011
	`define ysyx_22051013_JALR           		5'b11001
	`define ysyx_22051013_BRANCH             	5'b11000
	`define ysyx_22051013_LOAD               	5'b00000
	`define ysyx_22051013_STORE              	5'b01000
  
//exu
	`define ysyx_22051013_BRANCHABLE 1'b1
	`define ysyx_22051013_BRANCHDISABLE 1'b0

//lsu
	`define ysyx_22051013_DATAADDR 63:0

//inst
	`define EBREAK_TRAP        32'b00000000000100000000000001110011
	`define INST_ADDI          8'b00000001
	`define INST_SLTI          8'b00000010
	`define INST_SLTIU         8'b00000100
	`define INST_XORI          8'b00001000
	`define INST_ORI           8'b00010000
	`define INST_ANDI          8'b00100000
	`define INST_SLLI          8'b01000000
	`define INST_SRLI          8'b10000000
	`define INST_SRAI          8'b00000011
	`define INST_ADD           8'b00000110
	`define INST_SUB           8'b00001100
	`define INST_SLL           8'b00011000
	`define INST_SLT           8'b00110000
	`define INST_SLTU          8'b01100000
	`define INST_XOR           8'b11000000
	`define INST_SRL           8'b00000101
	`define INST_SRA           8'b00001010
	`define INST_OR            8'b00010100
	`define INST_AND           8'b00101000
	`define INST_LUI           8'b01010000
	`define INST_AUIPC         8'b10100000
	`define INST_ADDIW         8'b00001001
	`define INST_SLLIW         8'b00010010
	`define INST_SRLIW         8'b00100100
	`define INST_SRAIW         8'b01001000
	`define INST_ADDW          8'b10010000
	`define INST_SUBW          8'b00010001
	`define INST_SLLW          8'b00100010
	`define INST_SRLW          8'b01000100
	`define INST_SRAW          8'b10001000

	`define INST_JAL           8'b00100001
	`define INST_JALR          8'b01000010
	`define INST_EBREAK        8'b10000100
	
	`define INST_SB            8'b01000001
	`define INST_SH            8'b10000010
	`define INST_SW            8'b10000001
	`define INST_SD            8'b00000111
	
	`define INST_BEQ           8'b00001110
	`define INST_BNE           8'b00011100
	`define INST_BLT           8'b00111000
	`define INST_BGE           8'b01110000
	`define INST_BLTU          8'b11100000
	`define INST_BGEU          8'b00001101
	
	`define INST_LB            8'b00011010
	`define INST_LH            8'b00110100
	`define INST_LW            8'b01101000
	`define INST_LD            8'b11010000
	`define INST_LBU           8'b00001011
	`define INST_LHU           8'b00010110
	`define INST_LWU           8'b00101100

	`define INST_MUL           8'b01011000
	`define INST_MULH          8'b10110000
	`define INST_MULHSU        8'b00010011
	`define INST_MULHU         8'b00100110
	`define INST_MULW          8'b01001100

	`define INST_DIV           8'b10011000
	`define INST_DIVU          8'b00100011
	`define INST_DIVUW         8'b01000110
	`define INST_DIVW          8'b10001100

	`define INST_REM           8'b01000011
	`define INST_REMU          8'b10000110
	`define INST_REMUW         8'b10000011
	`define INST_REMW          8'b00010101
	
	`define INST_ECALL         8'b00101010
	`define INST_MRET          8'b01010100
	`define INST_CSRRW         8'b10101000
	`define INST_CSRRS         8'b00100101
	`define INST_CSRRC         8'b01001010
	`define INST_CSRRWI        8'b10010100
	`define INST_CSRRSI        8'b11001000
	`define INST_CSRRCI        8'b10100100
	`define INST_FENCEI        8'b11000001
//axi

	`define ysyx_22051013_ADDR	63:0
	`define ysyx_22051013_RESP	1:0
	`define ysyx_22051013_STRB	7:0
	`define ysyx_22051013_ID		3:0
	`define ysyx_22051013_ENABLE	1'b1
	`define ysyx_22051013_DISABLE 1'b0
    //slave
	`define ysyx_22051013_S_IDLE  2'b01 
	`define ysyx_22051013_S_DATA  2'b10
	`define ysyx_22051013_S_WRITE 2'b11
    //arbitrator
	`define ysyx_22051013_ARB_IDLE  3'b000
	`define ysyx_22051013_ARB_ADDR  3'b100
	`define ysyx_22051013_ARB_READ  3'b001
	`define ysyx_22051013_ARB_WRITE 3'b010
	`define ysyx_22051013_ARB_RESP  3'b011
    
	`define ysyx_22051013_AXI_BURST_FIXED 2'b00
	`define ysyx_22051013_AXI_BURST_INCR 2'b01
	`define ysyx_22051013_AXI_BURST_WRAP 2'b10
    
    //icache
	`define ysyx_22051013_CACHE		127:0
	`define ysyx_22051013_I_IDLE  4'b0001
	`define ysyx_22051013_I_READ  4'b0010
	`define ysyx_22051013_I_HIT   4'b0100
	`define ysyx_22051013_I_MISS  4'b1000  
	`define ysyx_22051013_STRB128_L 128'h0000000000000000ffffffffffffffff
	`define ysyx_22051013_STRB128_H 128'hffffffffffffffff0000000000000000
    
    //dcache
	`define ysyx_22051013_D_IDLE	6'b000001
	`define ysyx_22051013_D_READ	6'b000010
	`define ysyx_22051013_D_WRITE	6'b000011
	`define ysyx_22051013_D_HIT	6'b000100
	`define ysyx_22051013_D_MISSR	6'b001000  
	`define ysyx_22051013_D_DIRTYR	6'b010000
	`define ysyx_22051013_D_MISSW	6'b100000  
	`define ysyx_22051013_D_DIRTYW	6'b100001
	`define ysyx_22051013_D_FENCEI  6'b100011
    
    //dcache_sel
    	`define ysyx_22051013_CLINT_START	64'h0000000002000000
	`define ysyx_22051013_CLINT_END		64'h000000000200ffff
	`define ysyx_22051013_UART_START 	64'h0000000010000000
	`define ysyx_22051013_UART_END		64'h0000000010000fff
	`define ysyx_22051013_SPI_START 	64'h0000000010001000
	`define ysyx_22051013_SPI_END		64'h0000000010001fff
	`define ysyx_22051013_VGA_START 	64'h0000000010002000
	`define ysyx_22051013_VGA_END		64'h0000000010002fff
	`define ysyx_22051013_KBD_START 	64'h0000000010003000
	`define ysyx_22051013_KBD_END		64'h0000000010003fff
	`define ysyx_22051013_FB_START 		64'h000000001c000000
	`define ysyx_22051013_FB_END		64'h000000002fffffff	
	`define ysyx_22051013_SPIF_START 	64'h0000000030000000
	`define ysyx_22051013_SPIF_END		64'h000000003fffffff
	`define ysyx_22051013_CHLINK_START 	64'h0000000040000000
	`define ysyx_22051013_CHLINK_END	64'h000000007fffffff
	`define ysyx_22051013_MEM_START	64'h0000000080000000
	`define ysyx_22051013_MEM_END	64'h00000000fbffffff
	`define ysyx_22051013_APB_START	64'h0000000010000000
	`define ysyx_22051013_APB_END	64'h000000003fffffff
    
    //clint
	`define ysyx_22051013_MTIME	64'h000000000200bff8
	`define ysyx_22051013_MTIMECMP	64'h0000000002004000
    
/*-----------------------------------------------------------------
*	Last modify date : 2023/06/21
*	Function : predict PC for jal/bxx (jalr has not predict)
-----------------------------------------------------------------*/

module ysyx_22051013_bpu_static(
	input	wire				clk	,
	input	wire				rst	,
	input	wire	[`ysyx_22051013_INST]	inst	,
	input	wire	[`ysyx_22051013_PC]	pc_i	,
	
	output	wire	[`ysyx_22051013_PC]	pc_o	,
	//input	wire				hold,
	output	wire				bpu_jump
	
);

wire [20:1] j_imm ;
wire [12:1] b_imm ;

assign {j_imm[20],j_imm[10:1],j_imm[11],j_imm[19:12]} = inst[31:12];
assign {b_imm[12] , b_imm[10:5] , b_imm[4:1] , b_imm[11]} = {inst[31:25] , inst[11:7]} ;

wire [6:0] opcode;

assign opcode = inst[6:0];

wire inst_jal   = (rst == `ysyx_22051013_RSTABLE) ? 0 : (opcode[6:2] == `ysyx_22051013_JAL) & (opcode[1:0] == 2'b11)    ;
wire inst_bxx   = (rst == `ysyx_22051013_RSTABLE) ? 0 : (opcode[6:2] == `ysyx_22051013_BRANCH) ;



wire [`ysyx_22051013_DATA] op1;
wire [`ysyx_22051013_DATA] op2;

assign op1 =pc_i;

assign op2 = inst_jal  			? {{44{j_imm[20]}} , j_imm[20:1] << 1} :
             (inst_bxx & b_imm[12])  	? {{52{b_imm[12]}} , b_imm[12:1] << 1} :
             (rst == `ysyx_22051013_RSTABLE) ? `ysyx_22051013_ZERO64 :
             `ysyx_22051013_PLUS4;

wire [`ysyx_22051013_DATA] pr_pc;
assign pr_pc = op1 + op2;

reg hold;
always@(posedge clk) begin
	if(rst == `ysyx_22051013_RSTABLE) begin
		hold <= 1'b1;
	end
	else begin
		hold <= 1'b0;
	end
end

assign pc_o = (hold) ? `ysyx_22051013_STARTPC : pr_pc;
assign bpu_jump = (rst == `ysyx_22051013_RSTABLE) ? 1'b0 : (inst_bxx & b_imm[12]);


endmodule

/*-------------------------------------------------
* 	Last modify date: 2023/7/2
* 	Function :pip pc generation 
-------------------------------------------------*/

module ysyx_22051013_ifu(
	// diff_pc_input
	input	wire					id_pc_jump	,
	input	wire	[`ysyx_22051013_PC]		id_pc_i  	,
	input	wire					ie_pc_jump	,
	input	wire	[`ysyx_22051013_PC]		ie_pc_i  	,
	input	wire					ls_pc_jump	,
	input	wire	[`ysyx_22051013_PC]		ls_pc_i  	,
	input   wire	[`ysyx_22051013_PC]		bpu_pc_i  	,
	
	//stage control signal 
	input	wire					inst_valid	, 
	input	wire					id_ready	,
	input	wire					id_stall	,
	output  wire					if_valid	, 
	output  wire					core_ready	,
	
	//out sign
	input	wire	[`ysyx_22051013_INST]		inst_i	,
	input	wire	[`ysyx_22051013_PC]		pc_i	,
	output  wire	[`ysyx_22051013_PC]		pc_o	,
	output	wire	[`ysyx_22051013_INST]		inst_o	,
	output  wire	[`ysyx_22051013_PC]		pc_next		
 );
 
assign pc_next = 	ie_pc_jump ? ie_pc_i : 
			ls_pc_jump ? ls_pc_i :
			id_pc_jump ? id_pc_i :
			bpu_pc_i;
		
wire clean_stall = ie_pc_jump | ls_pc_jump;

wire stall = clean_stall ? 1'b0 : id_stall;

assign if_valid = (id_ready | stall) ? 1'b0 : ~inst_valid  ;


assign core_ready = (id_ready | stall);
 
assign inst_o = inst_i;
assign pc_o = pc_i;

endmodule

/*-------------------------------------
* Last modify date : 2023/7/2
* Function : if-id reg
---------------------------------------*/

 module ysyx_22051013_reg_ifid(
 	//front stage input
	input	wire				clk	,
	input	wire				rst	,
	input	wire	[`ysyx_22051013_INST]	if_inst	,
	input	wire	[`ysyx_22051013_PC]	if_pc	,
	input	wire				bpu_jump,
	
	//ctl
	input	wire				if_valid,
	input	wire				id_flush,
	input	wire				ie_flush,
	input	wire				ls_flush,
	input	wire				id_stall,
	input	wire				id_ready,
	
	//output to next stage
	output	reg				id_jump	,
	output	reg	[`ysyx_22051013_INST]	id_inst	,
	output	reg	[`ysyx_22051013_PC]	id_pc
 );
 
 wire flush =  (~id_stall & id_flush) | ie_flush | ls_flush;
 wire stall = if_valid | id_ready;
 
 always@(posedge clk) begin
	 if(rst == `ysyx_22051013_RSTABLE) begin 
		 id_inst <= 	32'd0;
		 id_pc	 <= 	`ysyx_22051013_ZERO64;
		 id_jump <= 	1'd0;
	 end	 
	 else if(stall) begin
	 	 id_inst <= 	id_inst;
		 id_pc	 <= 	id_pc;
		 id_jump <= 	id_jump;
	 end
	 else if(flush) begin 
		 id_inst <= 	32'd0;
		 id_pc	 <= 	`ysyx_22051013_ZERO64;
		 id_jump <= 	1'd0;
	 end
	 else if(id_stall) begin
	 	 id_inst <= 	id_inst;
		 id_pc	 <= 	id_pc;
		 id_jump <= 	id_jump;
	 end
	 else begin
		 id_inst <= 	if_inst;
	   	 id_pc	 <= 	if_pc;
		 id_jump <= 	bpu_jump;
	 end
 end

 endmodule
 
 /*-----------------------------------------------------------
*	Last modify date : 2023/6/21
*	Fucntion : generate ctl/data signal, support RV64IM, FENCEI
-------------------------------------------------------------*/

module ysyx_22051013_idu(
	//ifu input
	input	wire		       			rst	,
	input	wire	[`ysyx_22051013_INST]		inst_i	,
	input	wire	[`ysyx_22051013_PC]		pc_i	,

		
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
	input	wire					ex_csr_ena	,
	input	wire					ls_csr_ena	,
	
	//regfile signal
	output	wire	[`ysyx_22051013_REGADDR]	rs1_addr ,
	output	wire				 	rs1_ena  ,
	input	wire	[`ysyx_22051013_REG]     	rs1_data ,
	
	output	wire	[`ysyx_22051013_REGADDR] 	rs2_addr ,
	output	wire				 	rs2_ena  ,
	input	wire	[`ysyx_22051013_REG]     	rs2_data ,
	
	output	wire					rd_ena  ,
	output	wire	[`ysyx_22051013_REGADDR] 	rd_addr ,
        
	//control out signal
	output  wire	[7:0]         			alusrc_o	,
	output  wire	[3:0]      			lsctl_o		,
	output  wire	[1:0]     			wbctl_o		,
	output	wire	[1:0]				op1_sel		,
	output	wire	[2:0]				op2_sel		,
	output	wire 					load_flag	,
	output	wire					csr_ena		,
	
	//data out signal
	output  wire 	[`ysyx_22051013_DATA]  		op1 ,
	output  wire 	[`ysyx_22051013_DATA]  		op2 , 
	output  wire 	[`ysyx_22051013_IMM]      	imm ,
	output	wire 	[`ysyx_22051013_PC]		pc_o	,
	output	wire	[4:0]				csr_imm	,
	
	//hzd
	input	wire					ex_ready,
	input	wire					if_valid,
	output	wire					id_flush,
	output	wire					id_ex_flush,
	output	wire					id_ready,
	output	wire					id_valid,
	
	//to ifu
	output	wire					jump_ena,
	output	wire	[`ysyx_22051013_PC]		jump_pc
	
);

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//---------------------------------------------hzd_ctl-------------------------------------------------------//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

assign id_flush = jump_ena ;
assign id_ready = ex_ready ;
assign id_valid = if_valid; 
assign id_ex_flush = id_stall_ena;

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//---------------------------------------------decode-------------------------------------------------------//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

wire   [ 4:0]   rd     ;
wire   [ 4:0]   rs1    ;
wire   [ 4:0]   rs2    ;
assign  rd       =  inst_i [11:7]   ;
assign  rs1      =  inst_i [19:15]  ;
assign  rs2      =  inst_i [24:20]  ;

wire branch;

ysyx_22051013_idu_decode decode(
	.rst(rst)	,
	.inst(inst_i),
	.rs1_ena(rs1_ena),
	.rs2_ena(rs2_ena),
	.ext_imm(imm)	,
	.wb_ctl (wbctl_o) ,
	.csr(csr_ena),
 	.mem_ctl(lsctl_o) ,
 	.op1_sel(op1_sel),
 	.op2_sel(op2_sel),
 	.branch(branch) ,
 	.load(load_flag),
	.alu_ctl(alusrc_o)
);

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//---------------------------------------------ctl/out sign generate-------------------------------------------------------//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//---------------------------------------------data forward-------------------------------------------------------//
//stall
wire op1_relate ;//load inst
wire op2_relate ;
wire csr_op1_stall;
wire csr_op2_stall;
wire id_stall_ena;
assign op1_relate = ((rst == `ysyx_22051013_RSTABLE) & (rs1_addr == 5'd0)) ? 1'b0 : rs1_ena & ex_load_ena & (rs1_addr == ex_addr_forward) ;
assign op2_relate = ((rst == `ysyx_22051013_RSTABLE) & (rs2_addr == 5'd0)) ? 1'b0 : rs2_ena & ex_load_ena & (rs2_addr == ex_addr_forward) ;

assign csr_op1_stall = (ex_op1_forward & ex_csr_ena) | (ls_op1_forward & ls_csr_ena);
assign csr_op2_stall = (ex_op2_forward & ex_csr_ena) | (ls_op2_forward & ls_csr_ena);

assign id_stall_ena = (rst == `ysyx_22051013_RSTABLE) ? 1'b0 : op1_relate | op2_relate | csr_op1_stall | csr_op2_stall;

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
				
//---------------------------------------------regfile-------------------------------------------------------//

//output to regfile
assign rs1_addr = rs1_ena ? rs1 : 5'd0 ;
assign rs2_addr = rs2_ena ? rs2 : 5'd0 ;
assign rd_ena  = (rd == 5'd0) ? 1'b0 : (wbctl_o == 2'b00) ? 1'b0 : 1'b1 ;
assign rd_addr = rd_ena ? rd : 5'd0 ;


//data out singal
assign op1 = rs1_ena & op1_forward_ena ? op1_forward_data : rs1_ena ? rs1_data : `ysyx_22051013_ZERO64;
assign op2 = rs2_ena & op2_forward_ena ? op2_forward_data : rs2_ena ? rs2_data : `ysyx_22051013_ZERO64;
assign csr_imm = rs1;

assign pc_o = rst == `ysyx_22051013_RSTABLE ? `ysyx_22051013_ZERO64 : pc_i	;
				
//---------------------------------------------branch calculate-------------------------------------------------------//

reg ex_branch ;

wire diff_sign = op1[63] ^ op2[63];

wire op_ltu_op2 = op1 <  op2;

wire op1_lt_op2 = diff_sign ? op1[63] : op_ltu_op2;

always @(*) begin
	if(rst == `ysyx_22051013_RSTABLE) begin
		ex_branch = `ysyx_22051013_BRANCHDISABLE  ;    
	end
	else if(~branch)  begin 
		ex_branch = `ysyx_22051013_BRANCHDISABLE  ;    
	end
	else begin
		case (alusrc_o) 
			`INST_BEQ     : begin  ex_branch = (op1 == op2) ? `ysyx_22051013_BRANCHABLE : `ysyx_22051013_BRANCHDISABLE ;  end
			`INST_BNE     : begin  ex_branch = (op1 != op2) ? `ysyx_22051013_BRANCHABLE : `ysyx_22051013_BRANCHDISABLE ;  end
			`INST_BLTU    : begin  ex_branch = (op_ltu_op2) ? `ysyx_22051013_BRANCHABLE : `ysyx_22051013_BRANCHDISABLE ;  end
			`INST_BGEU    : begin  ex_branch = (~op_ltu_op2) ? `ysyx_22051013_BRANCHABLE : `ysyx_22051013_BRANCHDISABLE ;  end
			`INST_BLT     : begin  ex_branch = ( op1_lt_op2 ) ? `ysyx_22051013_BRANCHABLE : `ysyx_22051013_BRANCHDISABLE ;  end
			`INST_BGE     : begin  ex_branch = (~op1_lt_op2 ) ? `ysyx_22051013_BRANCHABLE : `ysyx_22051013_BRANCHDISABLE ;  end
			default:        begin  ex_branch = `ysyx_22051013_BRANCHDISABLE  ;    end 
		endcase
	end
end


//---------------------------------------------out to ifu-------------------------------------------------------//

assign jump_ena =((alusrc_o == `INST_JALR)) | (ex_branch ^ bpu_jump);

wire [`ysyx_22051013_DATA] p1;
wire [`ysyx_22051013_DATA] p2;

assign p1 = 	(alusrc_o == `INST_JALR) ? op1 : pc_i ; 
		
assign p2 =	bpu_jump ? `ysyx_22051013_PLUS4 : imm;

assign jump_pc = jump_ena ? (p1 + p2) :
		 `ysyx_22051013_ZERO64;

endmodule

/*---------------------------------------------------
*	Last modify date : 2023/6/21
*	Function : decode inst to control signal
---------------------------------------------------*/

module ysyx_22051013_idu_decode(
	input	wire				rst  	,
	input	wire	[`ysyx_22051013_INST]	inst	,
  
	output	wire				rs1_ena	,
	output	wire				rs2_ena	,
	output	wire				csr,
	output	wire	[1:0]			wb_ctl  ,
	output	reg	[3:0]			mem_ctl ,
	output	wire				branch  ,
	output	reg	[`ysyx_22051013_IMM]	ext_imm ,
	output	wire				load	,
	output	wire	[1:0]			op1_sel	,
	output	wire	[2:0]			op2_sel	,
	output	wire	[7:0]			alu_ctl	
);

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//---------------------------------------------decode-------------------------------------------------------//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

wire [6:0] opcode ;
wire [2:0] funct3 ;
wire [6:0] funct7 ;

wire [11:0] i_imm ;
wire [20:1] j_imm ;
wire [19:0] u_imm ;
wire [11:0] s_imm ;
wire [12:1] b_imm ;


assign opcode = inst[6:0];
assign funct3 = inst[14:12];
assign funct7 = inst[31:25]  ;

assign i_imm = inst[31:20];
assign {j_imm[20],j_imm[10:1],j_imm[11],j_imm[19:12]} = inst[31:12];
assign u_imm = inst[31:12];
assign s_imm = {inst[31:25], inst[11:7]} ;
assign {b_imm[12] , b_imm[10:5] , b_imm[4:1] , b_imm[11]} = {inst[31:25] , inst[11:7]} ;

wire [7:0] inst_type;

assign inst_type[7] = (rst == `ysyx_22051013_RSTABLE) ? 0 : (opcode[6:2] == `ysyx_22051013_SYSTEM)       ;
assign inst_type[6] = (rst == `ysyx_22051013_RSTABLE) ? 0 : (opcode[6:2] == `ysyx_22051013_OP32)   ;
assign inst_type[5] = (rst == `ysyx_22051013_RSTABLE) ? 0 : (opcode[6:2] == `ysyx_22051013_OPIMM32)   ;
assign inst_type[4] = (rst == `ysyx_22051013_RSTABLE) ? 0 : (opcode[6:2] == `ysyx_22051013_OPIMM)    ;
assign inst_type[3] = (rst == `ysyx_22051013_RSTABLE) ? 0 : (opcode[6:2] == `ysyx_22051013_OP)    ;
assign inst_type[2] = (rst == `ysyx_22051013_RSTABLE) ? 0 : (opcode[6:2] == `ysyx_22051013_BRANCH)    ;
assign inst_type[1] = (rst == `ysyx_22051013_RSTABLE) ? 0 : (opcode[6:2] == `ysyx_22051013_LOAD)  & (opcode[1:0] == 2'b11)    ;
assign inst_type[0] = (rst == `ysyx_22051013_RSTABLE) ? 0 : (opcode[6:2] == `ysyx_22051013_STORE)     ;

//---------------------------------------------inst-------------------------------------------------------//

wire inst_lui   = (rst == `ysyx_22051013_RSTABLE) ? 0 : (opcode[6:2] == `ysyx_22051013_LUI)    ;
wire inst_auipc = (rst == `ysyx_22051013_RSTABLE) ? 0 : (opcode[6:2] == `ysyx_22051013_AUIPC)  ;
wire inst_jal   = (rst == `ysyx_22051013_RSTABLE) ? 0 : (opcode[6:2] == `ysyx_22051013_JAL)    ;
wire inst_jalr  = (rst == `ysyx_22051013_RSTABLE) ? 0 : (opcode[6:2] == `ysyx_22051013_JALR)   ;


wire inst_sb    = inst_type[0] &  ~funct3[2] & ~funct3[1] & ~funct3[0]   ;
wire inst_sh    = inst_type[0] &  ~funct3[2] & ~funct3[1] &  funct3[0]   ;
wire inst_sw    = inst_type[0] &  ~funct3[2] &  funct3[1] & ~funct3[0]   ;
wire inst_sd    = inst_type[0] &  ~funct3[2] &  funct3[1] &  funct3[0]   ;

wire inst_lb    = inst_type[1] &  ~funct3[2] & ~funct3[1] & ~funct3[0]   ;
wire inst_lh    = inst_type[1] &  ~funct3[2] & ~funct3[1] &  funct3[0]   ;
wire inst_lw    = inst_type[1] &  ~funct3[2] &  funct3[1] & ~funct3[0]   ;
wire inst_ld    = inst_type[1] &  ~funct3[2] &  funct3[1] &  funct3[0]   ;
wire inst_lbu   = inst_type[1] &   funct3[2] & ~funct3[1] & ~funct3[0]   ;
wire inst_lhu   = inst_type[1] &   funct3[2] & ~funct3[1] &  funct3[0]   ;
wire inst_lwu   = inst_type[1] &   funct3[2] &  funct3[1] & ~funct3[0]   ;

wire inst_beq   = inst_type[2] & ~funct3[2] & ~funct3[1] & ~funct3[0]   ;
wire inst_bne   = inst_type[2] & ~funct3[2] & ~funct3[1] &  funct3[0]   ;
wire inst_blt   = inst_type[2] &  funct3[2] & ~funct3[1] & ~funct3[0]   ;
wire inst_bge   = inst_type[2] &  funct3[2] & ~funct3[1] &  funct3[0]   ;
wire inst_bltu  = inst_type[2] &  funct3[2] &  funct3[1] & ~funct3[0]   ;
wire inst_bgeu  = inst_type[2] &  funct3[2] &  funct3[1] &  funct3[0]   ;

wire inst_add   = inst_type[3] & ~funct3[2] & ~funct3[1] & ~funct3[0] & ~funct7[5] & ~funct7[0];
wire inst_sub   = inst_type[3] & ~funct3[2] & ~funct3[1] & ~funct3[0] &  funct7[5] & ~funct7[0];
wire inst_sll   = inst_type[3] & ~funct3[2] & ~funct3[1] &  funct3[0] & ~funct7[0] ;
wire inst_slt   = inst_type[3] & ~funct3[2] &  funct3[1] & ~funct3[0] & ~funct7[0] ;
wire inst_sltu  = inst_type[3] & ~funct3[2] &  funct3[1] &  funct3[0] & ~funct7[0]  ;
wire inst_xor   = inst_type[3] &  funct3[2] & ~funct3[1] & ~funct3[0] & ~funct7[0] ;
wire inst_srl   = inst_type[3] &  funct3[2] & ~funct3[1] &  funct3[0] & ~funct7[5] & ~funct7[0];
wire inst_sra   = inst_type[3] &  funct3[2] & ~funct3[1] &  funct3[0] &  funct7[5] & ~funct7[0];
wire inst_or    = inst_type[3] &  funct3[2] &  funct3[1] & ~funct3[0] & ~funct7[0] ;
wire inst_and   = inst_type[3] &  funct3[2] &  funct3[1] &  funct3[0] & (funct7 ==  7'd0) ;
wire inst_div   = inst_type[3] &  funct3[2] & ~funct3[1] & ~funct3[0]  & funct7[0] ;
wire inst_divu  = inst_type[3] &  funct3[2] & ~funct3[1] &  funct3[0]  & funct7[0] ;
wire inst_mul   = inst_type[3] &  ~funct3[2] & ~funct3[1] & ~funct3[0] & funct7[0] ;
wire inst_mulh  = inst_type[3] &  ~funct3[2] & ~funct3[1] &  funct3[0] & funct7[0] ;
wire inst_mulhsu= inst_type[3] &  ~funct3[2] &  funct3[1] & ~funct3[0] & funct7[0] ;
wire inst_mulhu = inst_type[3] &  ~funct3[2] &  funct3[1] &  funct3[0] & funct7[0] ;
wire inst_rem   = inst_type[3] &  funct3[2] &  funct3[1] & ~funct3[0]  & funct7[0] ;
wire inst_remu  = inst_type[3] &  funct3[2] &  funct3[1] &  funct3[0]  & funct7[0] ;

wire inst_addi  = inst_type[4] & ~funct3[2] & ~funct3[1] & ~funct3[0]   ;
wire inst_slti  = inst_type[4] & ~funct3[2] &  funct3[1] & ~funct3[0]   ;
wire inst_sltiu = inst_type[4] & ~funct3[2] &  funct3[1] &  funct3[0]   ;
wire inst_xori  = inst_type[4] &  funct3[2] & ~funct3[1] & ~funct3[0]   ;
wire inst_ori   = inst_type[4] &  funct3[2] &  funct3[1] & ~funct3[0]   ;
wire inst_andi  = inst_type[4] &  funct3[2] &  funct3[1] &  funct3[0]   ;
wire inst_slli  = inst_type[4] & ~funct3[2] & ~funct3[1] &  funct3[0]   ;
wire inst_srli  = inst_type[4] &  funct3[2] & ~funct3[1] &  funct3[0] & ~i_imm[10]   ;
wire inst_srai  = inst_type[4] &  funct3[2] & ~funct3[1] &  funct3[0] &  i_imm[10]   ;

wire inst_addiw = inst_type[5] & ~funct3[2] & ~funct3[1] & ~funct3[0]   ;
wire inst_slliw = inst_type[5] & ~funct3[2] & ~funct3[1] &  funct3[0]   ;
wire inst_srliw = inst_type[5] &  funct3[2] & ~funct3[1] &  funct3[0] & ~i_imm[10]   ;
wire inst_sraiw = inst_type[5] &  funct3[2] & ~funct3[1] &  funct3[0] &  i_imm[10]   ;

wire inst_addw  = inst_type[6] & ~funct3[2] & ~funct3[1] & ~funct3[0] & ~i_imm[10] & ~funct7[0] ;
wire inst_subw  = inst_type[6] & ~funct3[2] & ~funct3[1] & ~funct3[0] &  i_imm[10] & ~funct7[0] ;
wire inst_sllw  = inst_type[6] & ~funct3[2] & ~funct3[1] &  funct3[0]   ;
wire inst_srlw  = inst_type[6] &  funct3[2] & ~funct3[1] &  funct3[0] & ~i_imm[10] & ~funct7[0] ;
wire inst_sraw  = inst_type[6] &  funct3[2] & ~funct3[1] &  funct3[0] &  i_imm[10] & ~funct7[0] ;
wire inst_divuw = inst_type[6] &  funct3[2] & ~funct3[1] &  funct3[0]  & funct7[0] ;
wire inst_divw  = inst_type[6] &  funct3[2] & ~funct3[1] & ~funct3[0]  & funct7[0] ;
wire inst_mulw  = inst_type[6] &  ~funct3[2] & ~funct3[1] & ~funct3[0] & funct7[0] ;
wire inst_remuw = inst_type[6] &  funct3[2] &  funct3[1] &  funct3[0]  & funct7[0] ;
wire inst_remw  = inst_type[6] &  funct3[2] &  funct3[1] & ~funct3[0]  & funct7[0] ;


wire inst_ecall  = inst_type[7] & ~funct3[2] & ~funct3[1] & ~funct3[0] && (i_imm == 12'd0)         ;
wire inst_mret   = inst_type[7] & ~funct3[2] & ~funct3[1] & ~funct3[0] & funct7[3] & funct7[4];
wire inst_csrrw  = inst_type[7] & ~funct3[2] & ~funct3[1] &  funct3[0]   ;
wire inst_csrrs  = inst_type[7] & ~funct3[2] &  funct3[1] & ~funct3[0]   ;
wire inst_csrrc  = inst_type[7] & ~funct3[2] &  funct3[1] &  funct3[0]   ;
wire inst_csrrwi = inst_type[7] &  funct3[2] & ~funct3[1] &  funct3[0]   ;
wire inst_csrrsi = inst_type[7] &  funct3[2] &  funct3[1] & ~funct3[0]   ;
wire inst_csrrci = inst_type[7] &  funct3[2] &  funct3[1] &  funct3[0]   ;
wire inst_ebreak = inst_type[7] & ~funct3[2] & ~funct3[1] & ~funct3[0] && (i_imm == 12'd1)         ;
wire inst_fencei = ~funct3[2] & ~funct3[1] & funct3[0] & (opcode[6:2] == 5'b00011); 

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//---------------------------------------------output signal-------------------------------------------------------//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//---------------------------------------------ctl signal------------------------------------------------------//

assign alu_ctl[7] = (rst == `ysyx_22051013_RSTABLE) ? 0 :   inst_srli | inst_xor | inst_auipc | inst_addw | inst_sraw | inst_ebreak | inst_sh | inst_sw | inst_bltu | inst_ld | inst_mulh | inst_div | inst_divw | inst_remu | inst_remuw | inst_csrrw | inst_csrrwi  |  inst_csrrsi | inst_csrrci | inst_fencei;

assign alu_ctl[6] = (rst == `ysyx_22051013_RSTABLE) ? 0 :   inst_slli | inst_sltu | inst_xor | inst_lui | inst_sraiw | inst_srlw | inst_jalr | inst_sb | inst_bge | inst_bltu | inst_lw | inst_ld | inst_mul | inst_mulw | inst_divuw | inst_rem | inst_mret | inst_csrrc | inst_csrrsi | inst_fencei;

assign alu_ctl[5] = (rst == `ysyx_22051013_RSTABLE) ? 0 :   inst_andi | inst_slt | inst_sltu | inst_and |inst_auipc | inst_srliw | inst_sllw | inst_jal | inst_blt | inst_bge | inst_bltu | inst_lh | inst_lw | inst_lwu | inst_mulh | inst_mulhu | inst_divu | inst_ecall | inst_csrrw | inst_csrrs | inst_csrrci;

assign alu_ctl[4] = (rst == `ysyx_22051013_RSTABLE) ? 0 :   inst_ori | inst_sll | inst_slt | inst_or | inst_lui |inst_slliw | inst_addw | inst_subw | inst_bne | inst_blt | inst_bge | inst_lb | inst_lh | inst_ld | inst_lhu | inst_mul | inst_mulh | inst_mulhu | inst_div | inst_remw | inst_mret | inst_csrrwi;

assign alu_ctl[3] = (rst == `ysyx_22051013_RSTABLE) ? 0 :   inst_xori  | inst_sub | inst_sll  | inst_sra  | inst_and  | inst_addiw  | inst_sraiw | inst_sraw | inst_beq | inst_bne   | inst_blt | inst_bgeu  | inst_lb  | inst_lw   | inst_lbu | inst_lwu | inst_mul | inst_mulw | inst_div | inst_divw | inst_ecall  | inst_csrrw | inst_csrrc | inst_csrrsi ;

assign alu_ctl[2] = (rst == `ysyx_22051013_RSTABLE) ? 0 :   inst_sltiu   | inst_add | inst_sub | inst_srl  | inst_or  | inst_srliw   | inst_srlw  | inst_ebreak  | inst_sd | inst_beq | inst_bne | inst_bgeu   | inst_lh | inst_lhu | inst_lwu | inst_mulhu | inst_mulw | inst_divuw | inst_divw | inst_remu | inst_remw | inst_mret  | inst_csrrs | inst_csrrwi | inst_csrrci ;

assign alu_ctl[1] = (rst == `ysyx_22051013_RSTABLE) ? 0 :   inst_slti | inst_srai  | inst_add  | inst_sra   | inst_slliw  | inst_sllw | inst_jalr  | inst_sh  | inst_sd   | inst_beq   | inst_lb  | inst_lbu | inst_lhu | inst_mulhsu | inst_mulhu | inst_divu | inst_divuw | inst_rem | inst_remu | inst_remuw | inst_ecall |inst_csrrc  ;

assign alu_ctl[0] = (rst == `ysyx_22051013_RSTABLE) ? 0 :   inst_addi | inst_srai  | inst_srl  | inst_addiw  | inst_subw | inst_jal | inst_sb | inst_sw   | inst_sd   | inst_bgeu    | inst_lbu | inst_mulhsu | inst_divu | inst_rem | inst_remuw | inst_remw  | inst_csrrs   | inst_fencei;          

wire inst_csr   = inst_csrrw | inst_csrrs | inst_csrrc ;
assign csr   = inst_csrrw | inst_csrrs | inst_csrrc | inst_csrrwi | inst_csrrsi | inst_csrrci;

//output to regfile signal
assign rs1_ena =  inst_type[6] | inst_type[5] | inst_type[4] | inst_type[3] | inst_type[2] | inst_type[1] | inst_type[0] | inst_jalr | inst_csr | inst_ecall;
assign rs2_ena =  inst_type[6] | inst_type[3] | inst_type[2] | inst_type[0] ;


//output to ifu singal
wire jump;
assign branch = inst_type[2];
assign jump = inst_jal | inst_jalr;
assign load = inst_type[1];

//output to exu singal
wire imm_ena;
assign imm_ena =  inst_type[0] | inst_type[1]  | inst_type[4] | inst_type[5] | inst_type[7] |  inst_lui | inst_auipc  ;
assign op1_sel = (jump | inst_auipc | inst_fencei) ? 2'b10 : rs1_ena ? 2'b01 : 2'b00;
assign op2_sel = (jump | inst_fencei) ? 3'b010 : imm_ena ? 3'b100 : rs2_ena ? 3'b001 : 3'b000;


//output to mem signal
always @(*) begin
	if(rst == `ysyx_22051013_RSTABLE) begin
		mem_ctl = 4'b0000; 
	end
	else begin
		case(alu_ctl) 
			`INST_SB : begin mem_ctl = 4'b0001; end
			`INST_SH : begin mem_ctl = 4'b0010; end
			`INST_SW : begin mem_ctl = 4'b0100; end
			`INST_SD : begin mem_ctl = 4'b0101; end
			`INST_LB : begin mem_ctl = 4'b1001; end
			`INST_LH : begin mem_ctl = 4'b1010; end
			`INST_LW : begin mem_ctl = 4'b1011; end
			`INST_LD : begin mem_ctl = 4'b1100; end
			`INST_LBU: begin mem_ctl = 4'b1101; end
			`INST_LHU: begin mem_ctl = 4'b1110; end
			`INST_LWU: begin mem_ctl = 4'b1111; end
			default : begin mem_ctl = 4'b0000; end
		endcase
	end
end


//output to wb signal 
assign wb_ctl = (inst_type[1] ) ? 2'b01 : (( inst_type[7] | inst_type[6] | inst_type[5] |inst_type[4] | inst_type[3] | inst_lui | inst_auipc | jump) ? 2'b10 : 2'b00 ) ;

//---------------------------------------------data signal------------------------------------------------------//

always @(*) begin
	if(rst == `ysyx_22051013_RSTABLE) begin
		ext_imm = `ysyx_22051013_ZERO64;
	end
	else if(inst_type[1] | inst_type[4] | inst_type[5] | inst_type[7] | inst_jalr) begin ext_imm = {{52{i_imm[11]}},i_imm}; end
	else if (inst_lui | inst_auipc)                            begin ext_imm = {{32{u_imm[19]}},u_imm,{12{1'b0}}}; end
	else if (inst_jal)                                         begin ext_imm = {{44{j_imm[20]}},j_imm[20:1]<<1}; end
	else if (inst_type[0])                                     begin ext_imm = {{52{s_imm[11]}},s_imm};   end
	else if (inst_type[2])                                     begin ext_imm = {{52{b_imm[12]}},b_imm<<1};   end
	else                                                       begin ext_imm = `ysyx_22051013_ZERO64; end
end 

endmodule

/*-------------------------------------
* Last modify date : 2023/7/2
* Function : id_ex reg
---------------------------------------*/

module ysyx_22051013_reg_idex(
	//front stage input
    input	wire					clk		,
    input	wire					rst		,
   // input	wire	[`ysyx_22051013_INST]		id_inst		,	
    input	wire	[`ysyx_22051013_PC]		id_pc		,
    input	wire	[`ysyx_22051013_REG]		id_op1		,
    input	wire	[`ysyx_22051013_REG]		id_op2		,
    input	wire	[1:0]				id_op1_sel	,
    input	wire	[2:0]				id_op2_sel	,
    input	wire	[`ysyx_22051013_IMM]		id_imm		,
    input	wire					id_rd_ena	,
    input	wire	[`ysyx_22051013_REGADDR]	id_rd_addr	,
    input	wire	[`ysyx_22051013_REGADDR]	id_rs1_addr	,
    input	wire	[7:0]         			id_alusrc	,
    input	wire	[3:0]      			id_lsctl	,
    input	wire	[1:0]     			id_wbctl	,
    input	wire 					id_load_flag	, 
    input	wire 					id_csr_ena	,
    
    	//ctl
    input	wire					id_valid	,
    input	wire					id_flush	,
    input	wire					ie_flush	,
    input	wire					ls_flush	,
    input	wire					ex_ready	,

	//output to next stage
    //output	reg	[`ysyx_22051013_INST]		ex_inst		,
    output	reg	[`ysyx_22051013_PC]		ex_pc		,
    output	reg	[`ysyx_22051013_REG]		ex_op1		,
    output	reg	[`ysyx_22051013_REG]		ex_op2		,
    output	reg	[1:0]				ex_op1_sel	,
    output	reg	[2:0]				ex_op2_sel	,
    output	reg	[`ysyx_22051013_IMM]		ex_imm 		,
    output	reg					ex_rd_ena	,
    output	reg	[`ysyx_22051013_REGADDR]	ex_rd_addr	,
    output	reg	[`ysyx_22051013_REGADDR]	ex_rs1_addr	,
    output	reg	[7:0]				ex_alusrc  	,
    output	reg	[3:0]      			ex_lsctl   	,
    output	reg 					ex_load_flag	,
    output	reg 					ex_csr_ena	,
    output	reg	[1:0]     			ex_wbctl    
   );

wire flush = id_flush | ie_flush | ls_flush;
wire stall = id_valid | ex_ready;

always@(posedge clk) begin
	if(rst == `ysyx_22051013_RSTABLE)begin 
		//ex_inst		<= 32'd0;
		ex_pc		<= `ysyx_22051013_ZERO64;
		ex_op1		<= `ysyx_22051013_ZERO64;
		ex_op2		<= `ysyx_22051013_ZERO64;
		ex_op1_sel	<= 2'b0;
		ex_op2_sel	<= 3'd0;
		ex_imm		<= `ysyx_22051013_ZERO64;
		ex_rd_ena	<= 1'b0;
		ex_rd_addr	<= 5'd0;
		ex_rs1_addr	<= 5'd0;
		ex_alusrc	<= 8'd0;
		ex_lsctl	<= 4'd0;
		ex_wbctl	<= 2'b0;
		ex_load_flag	<= 1'b0;
		ex_csr_ena	<= 1'b0;
	end
	else if(stall) begin 
		//ex_inst		<= ex_inst;
		ex_pc		<= ex_pc;
		ex_op1		<= ex_op1;
		ex_op2		<= ex_op2;
		ex_op1_sel	<= ex_op1_sel;
		ex_op2_sel	<= ex_op2_sel;
		ex_imm		<= ex_imm;
		ex_rd_ena	<= ex_rd_ena;
		ex_rd_addr	<= ex_rd_addr;
		ex_rs1_addr	<= ex_rs1_addr;
		ex_alusrc	<= ex_alusrc;
		ex_lsctl	<= ex_lsctl;
		ex_wbctl	<= ex_wbctl;
		ex_load_flag	<= ex_load_flag;
		ex_csr_ena	<= ex_csr_ena;
	end
	else if(flush) begin 
		//ex_inst		<= 32'd0;
		ex_pc		<= `ysyx_22051013_ZERO64;
		ex_op1		<= `ysyx_22051013_ZERO64;
		ex_op2		<= `ysyx_22051013_ZERO64;
		ex_op1_sel	<= 2'b0;
		ex_op2_sel	<= 3'd0;
		ex_imm		<= `ysyx_22051013_ZERO64;
		ex_rd_ena	<= 1'b0;
		ex_rd_addr	<= 5'd0;
		ex_rs1_addr	<= 5'd0;
		ex_alusrc	<= 8'd0;
		ex_lsctl	<= 4'd0;
		ex_wbctl	<= 2'b0;
		ex_load_flag	<= 1'b0;
		ex_csr_ena	<= 1'b0;
	end
	else begin
		//ex_inst		<= id_inst;
		ex_pc 		<= id_pc;
		ex_op1		<= id_op1;
		ex_op2		<= id_op2;
		ex_op1_sel	<= id_op1_sel;
		ex_op2_sel	<= id_op2_sel;
		ex_imm		<= id_imm;
		ex_rd_ena	<= id_rd_ena;
		ex_rd_addr	<= id_rd_addr;
		ex_rs1_addr	<= id_rs1_addr;
		ex_alusrc	<= id_alusrc;
		ex_lsctl	<= id_lsctl;
		ex_wbctl	<= id_wbctl;
		ex_load_flag	<= id_load_flag;
		ex_csr_ena	<= id_csr_ena;
	end
end

endmodule

/*----------------------------------
*	Last modify date : 2023/6/21
*	Function : execute 
-----------------------------------*/
 
module ysyx_22051013_exu(
	input	wire					clk	,
	input	wire					rst	,
	input	wire	[`ysyx_22051013_DATA]		reg_op1	,
	input	wire	[`ysyx_22051013_DATA]		reg_op2	,
	input	wire	[1:0]				op1_sel	,
	input	wire	[2:0]				op2_sel	,
	input	wire	[`ysyx_22051013_REGADDR]	rd_addr	,
	input	wire	[`ysyx_22051013_REGADDR]	rs1_addr,
	input	wire	[`ysyx_22051013_IMM]		imm	,
	input	wire	[`ysyx_22051013_PC]		pc_i	,
	input	wire	[7:0]				alu_sel	,
	
	
	input 	wire			 	ls_ready,
	input 	wire			 	id_valid,
	output	wire			 	ex_valid,
	output	wire			 	ex_ready,
	
	output	wire	[`ysyx_22051013_REG]	store_data 	,
	output	wire	[11:0]			csr_addr,
	output	wire	[6:0]			csr_ctl	,
	output	wire				fencei	,
	output	wire	[`ysyx_22051013_DATA]	exu_res
);

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//------------------------------------------------------hzd_ctl--------------------------------------------------------------//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

assign ex_valid = id_valid | mul_stall | div_stall;
assign ex_ready = ls_ready | mul_stall | div_stall; 

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//------------------------------------------------------alu--------------------------------------------------------------//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//------------------------------------------------------fencei--------------------------------------------------------------//

assign fencei = (alu_sel == `INST_FENCEI);

//------------------------------------------------------op sel--------------------------------------------------------------//

wire [`ysyx_22051013_DATA] op1;
wire [`ysyx_22051013_DATA] op2;

assign op1 = 	(op1_sel == 2'b01) ? reg_op1 : 
		(op1_sel == 2'b10) ? pc_i : 
		`ysyx_22051013_ZERO64;
		
assign op2 = 	(op2_sel == 3'b001) ? reg_op2 : 
		(op2_sel == 3'b010) ? `ysyx_22051013_PLUS4 : 
		(op2_sel == 3'b100) ? imm :
		`ysyx_22051013_ZERO64;

//------------------------------------------------------alu calculate--------------------------------------------------------------//

// addxx
wire     [`ysyx_22051013_DATA]  op1_add_op2   = op1 + op2 ;
wire     [`ysyx_22051013_DATA]  op1_addw_op2  = {{32{op1_add_op2[31]}},op1_add_op2[31:0]} ;

// sub subw
wire     [`ysyx_22051013_DATA]  op1_sub_op2	 = op1 - op2; 
wire     [`ysyx_22051013_DATA]  op1_subw_op2     = {{32{op1_sub_op2[31]}},op1_sub_op2[31:0]} ;

//slt slti sltiu sltu
wire     op1_lt_op2 = (op1[63] && ~op2[63]) || (~op1[63] && ~op2[63] && op1_sub_op2[63]) || (op1[63] && op2[63] && op1_sub_op2[63]) ;

//sra srai
wire	 [`ysyx_22051013_DATA] op1_sra_op2 = $signed(op1) >>> op2[5:0] ;

//sllw slliw
wire     [31:0]     sllw  = op1[31:0] << op2[4:0]          ;
wire     [`ysyx_22051013_DATA] op1_sllw_op2 = {{32{sllw[31]}} , sllw} ;

//srlw srliw 
wire     [31:0]     srlw  = op1[31:0] >> op2[4:0]          ;
wire     [`ysyx_22051013_DATA] op1_srlw_op2 = {{32{srlw[31]}} , srlw} ;

//sraiw sraw
wire	 [31:0]     sraw = $signed(op1[31:0]) >>> op2[4:0] ;
wire	 [`ysyx_22051013_DATA] op1_sraw_op2 = {{32{sraw[31]}} , sraw} ;

reg [`ysyx_22051013_DATA] alu_res ;


always@(*)begin
	if(rst == `ysyx_22051013_RSTABLE) begin
		alu_res = `ysyx_22051013_ZERO64;
	end
	else begin
		case(alu_sel)
			`INST_ADDI ,  `INST_ADD,
			`INST_LUI  ,  `INST_AUIPC, 
			`INST_JAL  ,  `INST_JALR,
			`INST_LB   ,  `INST_LH,
			`INST_LW   ,  `INST_LD,
			`INST_SB   ,  `INST_SH,
			`INST_SW   ,  `INST_SD,
			`INST_LBU  ,  `INST_LHU,  
			`INST_LWU  ,  `INST_FENCEI	:  begin alu_res = op1_add_op2			;end
			`INST_ADDW ,  `INST_ADDIW	:  begin alu_res = op1_addw_op2			;end

			`INST_SUB                	:  begin alu_res = op1_sub_op2			;end
			`INST_SUBW               	:  begin alu_res = op1_subw_op2			;end
  
			`INST_SLTI ,  `INST_SLT  	:  begin alu_res = {63'd0 , op1_lt_op2}		;end
			`INST_SLTIU , `INST_SLTU 	:  begin alu_res = {63'd0 , (op1 < op2)}	;end
			`INST_SRAI ,  `INST_SRA  	:  begin alu_res = op1_sra_op2			;end
			`INST_SLLIW,  `INST_SLLW 	:  begin alu_res = op1_sllw_op2			;end
			`INST_SRLIW,  `INST_SRLW 	:  begin alu_res = op1_srlw_op2			;end
			`INST_SRAIW,  `INST_SRAW 	:  begin alu_res = op1_sraw_op2			;end
			`INST_XORI ,  `INST_XOR  	:  begin alu_res = op1 ^ op2			;end
			`INST_ORI  ,  `INST_OR   	:  begin alu_res = op1 | op2			;end
			`INST_ANDI ,  `INST_AND  	:  begin alu_res = op1 & op2			;end
			`INST_SLLI ,  `INST_SLL  	:  begin alu_res = op1 << op2 [5:0]		;end
			`INST_SRLI ,  `INST_SRL  	:  begin alu_res = op1 >> op2 [5:0]		;end
			`INST_EBREAK             	:  begin alu_res = op1				;end
	  
			default				:  begin alu_res = `ysyx_22051013_ZERO64	;end
		endcase
	end
end

//------------------------------------------------------mul--------------------------------------------------------------//

//------------------mulctl signal----------------------------//

reg mul;
reg [1:0] mul_signed;
reg mulw;

always@(*) begin
	if(rst == `ysyx_22051013_RSTABLE) begin
		mul = 1'b0;
		mul_signed = 2'b00; 
		mulw = 1'b0; 
	end
	else begin
		case(alu_sel) 
			`INST_MUL	: begin	mul = 1'b1; mul_signed = 2'b11; mulw = 1'b0; end
			`INST_MULH	: begin	mul = 1'b1; mul_signed = 2'b11; mulw = 1'b0; end
			`INST_MULHU	: begin	mul = 1'b1; mul_signed = 2'b00; mulw = 1'b0; end
			`INST_MULHSU	: begin mul = 1'b1; mul_signed = 2'b10; mulw = 1'b0; end
			`INST_MULW	: begin mul = 1'b1; mul_signed = 2'b11; mulw = 1'b1; end
			default 	: begin mul = 1'b0; mul_signed = 2'b00; mulw = 1'b0; end
		endcase
	end
end

reg delay1;
always@(posedge clk) begin
	if(rst == `ysyx_22051013_RSTABLE) begin
		delay1 <= 1'b0;
	end
	else if(~(ex_valid | ex_ready)) begin
		delay1 <= 1'b0;
	end
	else if(mul) begin
		delay1 <= 1'b1;
	end
	else begin
		delay1 <= 1'b0;
	end
end

wire mul_valid;

assign mul_valid = mul & ~delay1;

wire mul_out_valid;

wire [`ysyx_22051013_DATA] result_hi;
wire [`ysyx_22051013_DATA] result_lo;

wire flush = 1'b0;

//------------------mul calcuate----------------------------//

ysyx_22051013_booth_mul booth_mul0(
		.clk(clk),
		.rst(rst),
		.mul_valid(mul_valid),
		.flush(flush),
		.mul_signed(mul_signed),
		.mulw(mulw),
		.mult_op1(op1),
		.mult_op2(op2),
		.out_valid(mul_out_valid),
		.result_hi(result_hi),
		.result_lo(result_lo)
);

reg [`ysyx_22051013_DATA] mul_res;
always@(*) begin
	if(rst == `ysyx_22051013_RSTABLE) begin
		mul_res = `ysyx_22051013_ZERO64;
	end
	else if(mul_out_valid) begin
		case(alu_sel)
			`INST_MUL : begin
				mul_res = result_lo;
			end
			`INST_MULH, `INST_MULHU, `INST_MULHSU : begin
				mul_res = result_hi;
			end
			`INST_MULW : begin
				mul_res = {{32{result_lo[31]}},result_lo[31:0]};
			end
			default : begin mul_res = `ysyx_22051013_ZERO64; end
		endcase
	end
	else begin
		mul_res = `ysyx_22051013_ZERO64;
	end
end

reg [`ysyx_22051013_DATA] mul_res_temp;

always@(posedge clk) begin
	if(rst == `ysyx_22051013_RSTABLE) begin
		mul_res_temp <= 64'b0;
	end
	else if(~(ex_valid | ex_ready)) begin
		mul_res_temp <= 64'b0;
	end
	else if(mul_out_valid) begin
		mul_res_temp <= mul_res;
	end
	else begin
		mul_res_temp <= mul_res_temp;
	end
end


///------------------------------------------------------mul--------------------------------------------------------------//

//------------------divctl signal----------------------------//
reg div;
reg div_signed;
reg divw;

always@(*) begin
	if(rst == `ysyx_22051013_RSTABLE) begin
		div = 1'b0; 
		div_signed = 1'b0; 
		divw = 1'b0; 
	end
	else begin
		case(alu_sel) 
			`INST_DIV	: begin div = 1'b1; div_signed = 1'b1; divw = 1'b0; end
			`INST_DIVU	: begin div = 1'b1; div_signed = 1'b0; divw = 1'b0; end
			`INST_DIVW	: begin div = 1'b1; div_signed = 1'b1; divw = 1'b1; end
			`INST_DIVUW	: begin div = 1'b1; div_signed = 1'b0; divw = 1'b1; end
			`INST_REM	: begin div = 1'b1; div_signed = 1'b1; divw = 1'b0; end
			`INST_REMU	: begin div = 1'b1; div_signed = 1'b0; divw = 1'b0; end
			`INST_REMW	: begin div = 1'b1; div_signed = 1'b1; divw = 1'b1; end
			`INST_REMUW	: begin div = 1'b1; div_signed = 1'b0; divw = 1'b1; end
			default		: begin div = 1'b0; div_signed = 1'b0; divw = 1'b0; end
		endcase
	end
end

reg delay2;
always@(posedge clk) begin
	if(rst == `ysyx_22051013_RSTABLE) begin
		delay2 <= 1'b0;
	end
	else if(~(ex_valid | ex_ready)) begin
		delay2 <= 1'b0;
	end
	else if(div) begin
		delay2 <= 1'b1;
	end
	else begin
		delay2 <= 1'b0;
	end
end

wire div_valid;
assign div_valid = div & ~delay2;

wire div_out_valid;

wire [`ysyx_22051013_DATA] quotient;
wire [`ysyx_22051013_DATA] remainder;

//------------------div calcuate----------------------------//

ysyx_22051013_divide divide1(
		.clk(clk),
		.rst(rst),
		.div_valid(div_valid),
		.flush(flush),
		.div_signed(div_signed),
		.divw(divw),
		.div_op1(op1),
		.div_op2(op2),
		.out_valid(div_out_valid),
		.quotient(quotient),
		.remainder(remainder)
);

reg [`ysyx_22051013_DATA] div_res;
always@(*) begin
	if(rst == `ysyx_22051013_RSTABLE) begin
		div_res = `ysyx_22051013_ZERO64;
	end
	if(div_out_valid) begin
		case(alu_sel)
			`INST_DIV, `INST_DIVU, `INST_DIVW, `INST_DIVUW : begin
				div_res = quotient;
			end
			
			`INST_REM, `INST_REMU, `INST_REMW, `INST_REMUW  : begin
				div_res = remainder;
			end
			
			default : begin div_res = `ysyx_22051013_ZERO64; end
		endcase
	end
	else begin
		div_res = `ysyx_22051013_ZERO64;
	end
end

reg [`ysyx_22051013_DATA] div_res_temp;

always@(posedge clk) begin
	if(rst == `ysyx_22051013_RSTABLE) begin
		div_res_temp <= 64'b0;
	end
	else if(~(ex_valid | ex_ready)) begin
		div_res_temp <= 64'b0;
	end
	else if(div_out_valid) begin
		div_res_temp <= div_res;
	end
	else begin
		div_res_temp <= div_res_temp;
	end
end


///------------------------------------------------------csr--------------------------------------------------------------//
reg csr_wr_ena;
reg csr_rd_ena;
reg mret_ena;
reg ecall_ena;
reg csrrw_ena;
reg csrrs_ena;
reg csrrc_ena;

wire [`ysyx_22051013_DATA] csr_op = {{59{1'b0}},rs1_addr};

assign csr_addr = (csr_ctl[3:0] != 4'd0) ? imm[11:0] : 12'd0;

wire csrrxi_ena = (alu_sel == `INST_CSRRWI) | (alu_sel == `INST_CSRRSI) | (alu_sel == `INST_CSRRCI) ;

always @(*) begin
	if(rst == `ysyx_22051013_RSTABLE) begin
  		csr_wr_ena = 1'b0;
		csr_rd_ena = 1'b0;
		mret_ena =  1'b0;
		ecall_ena = 1'b0;
		csrrw_ena = 1'b0;
		csrrs_ena = 1'b0;
		csrrc_ena = 1'b0;
	end
	else begin
  		case(alu_sel)
			`INST_ECALL : begin 
				ecall_ena = 1'b1; 
			end
				
			`INST_CSRRW, `INST_CSRRWI :  begin 	
				csr_wr_ena = `ysyx_22051013_WENABLE; 
				csr_rd_ena = (rd_addr == 5'd0) ? `ysyx_22051013_RDISABLE : `ysyx_22051013_RENABLE;
				csrrw_ena = 1'b1;
			end
		 
			`INST_CSRRS, `INST_CSRRSI :  begin	
				csr_wr_ena = (rs1_addr == 5'd0) ? `ysyx_22051013_WDISABLE : `ysyx_22051013_WENABLE; 
				csr_rd_ena = `ysyx_22051013_RENABLE;
				csrrs_ena = 1'b1;					
			end
	
			`INST_CSRRC, `INST_CSRRCI :  begin	
				csr_wr_ena = (rs1_addr == 5'd0) ? `ysyx_22051013_WDISABLE : `ysyx_22051013_WENABLE; 
				csr_rd_ena = `ysyx_22051013_RENABLE;
				csrrc_ena = 1'b1;
			end
	
			`INST_MRET :  begin  mret_ena = 1'b1 ;end
	
			default : begin	
				csr_wr_ena = 1'b0;
				csr_rd_ena = 1'b0;
				mret_ena =  1'b0;
				ecall_ena = 1'b0;
				csrrw_ena = 1'b0;
				csrrs_ena = 1'b0;
				csrrc_ena = 1'b0;
			end
		endcase 
	end
end


///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//------------------------------------------------------exu stall--------------------------------------------------------------//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
reg mul_reg;


always@(posedge clk) begin
	if(rst == `ysyx_22051013_RSTABLE) begin
		mul_reg <= 1'b0;
	end
	else if(mul & mul_out_valid) begin
		mul_reg <= 1'b1;
	end
	else if(~(ex_valid | ex_ready)) begin
		mul_reg <= 1'b0;
	end
	else begin
		mul_reg <= mul_reg;
	end
end

wire mul_stall;
assign mul_stall = mul & ~mul_reg;

reg div_reg;

always@(posedge clk) begin
	if(rst == `ysyx_22051013_RSTABLE) begin
		div_reg <= 1'b0;
	end
	else if(div & div_out_valid) begin
		div_reg <= 1'b1;
	end
	else if(~(ex_valid | ex_ready)) begin
		div_reg <= 1'b0;
	end
	else begin
		div_reg <= div_reg;
	end
end

wire div_stall;
assign div_stall = div & ~div_reg;

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//-----------------------------------------------------output--------------------------------------------------------------//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//out to lsu		     

wire muldiv_ena;
wire [`ysyx_22051013_DATA] muldiv_res;
assign muldiv_ena = mul | div;
assign muldiv_res = 	mul ? mul_res_temp :
			div ? div_res_temp :
			`ysyx_22051013_ZERO64;

assign exu_res = 	csrrxi_ena ? csr_op :
			(csr_ctl[3:0] != 4'd0) ? reg_op1 :
			muldiv_ena ? muldiv_res :
			alu_res ;
assign store_data = reg_op2 ;


//out to wbu
assign csr_ctl = {csrrw_ena, csrrs_ena, csrrc_ena, csr_wr_ena, csr_rd_ena, ecall_ena, mret_ena};

endmodule

/*-------------------------------------
* Last modify date : 2023/7/2
* Function : 2-bit booth multiply (32 clk)
---------------------------------------*/

 module ysyx_22051013_booth_mul(
	 input wire				clk	,
	 input wire				rst	,
	 input wire				mul_valid	,
	 input wire				flush	,
	 input wire [1:0]			mul_signed	,
	 input wire				mulw	,
	 input wire [`ysyx_22051013_DATA]	mult_op1	,
	 input wire [`ysyx_22051013_DATA]	mult_op2	,

	 output wire				out_valid	,
	 output wire [`ysyx_22051013_DATA]	result_hi	,
	 output wire [`ysyx_22051013_DATA]	result_lo
);

wire	mul_ready;

	assign mul_ready = flush | ~(|multiplier[66:0]);
	assign out_valid = flush | ~mul_doing ? 1'b0 : mul_ready;

reg mul_doing;

always@(posedge clk) begin
	if(rst == `ysyx_22051013_RSTABLE) begin 
		mul_doing <= 1'b0;
	end
	else if(mul_valid | ~mul_ready) begin
		mul_doing <= 1'b1;
	end
	else begin
		mul_doing <= 1'b0;
	end
end

wire [63:0] op1_temp;
wire [63:0] op2_temp;

assign op1_temp = mulw ? {{32{mult_op1[31]}},mult_op1[31:0]} : mult_op1 ;

assign op2_temp = mulw ? {{32{mult_op2[31]}},mult_op2[31:0]} : mult_op2 ;

wire [65:0] op1_ext;
wire [65:0] op2_ext;

assign op1_ext = mul_signed[0] ? {{2{op1_temp[63]}},op1_temp} : {2'd0,op1_temp} ;
assign op2_ext = mul_signed[1] ? {{2{op2_temp[63]}},op2_temp} : {2'd0,op2_temp} ;

reg [131:0] multiplicand ;
reg [66:0] multiplier	;

always@(posedge clk)	begin
	if(rst == `ysyx_22051013_RSTABLE) begin
		multiplicand <= 132'd0;
		multiplier <= 67'd0;
	end
	else if(mul_doing & ~mul_ready) begin
		multiplicand <= {multiplicand[129:0],2'b0};
		multiplier <= {2'b0,multiplier[66:2]};
	end
	else if(mul_valid) begin
		multiplicand <= {66'd0,op1_ext};
		multiplier <= {op2_ext,1'b0};
	end
	else begin
		multiplicand <= 132'd0;
		multiplier <= 67'd0;
	end
end

wire [2:0] sel;
wire carry;
wire [131:0] multiplicand_mod;

assign sel = multiplier[2:0];

ysyx_22051013_booth1 booth10(
	.mult(multiplicand),
	.sel(sel),
	.part_mul(multiplicand_mod),
	.carry(carry)
);


reg [131:0] result_temp;

always@(posedge clk) begin
	if(rst ==`ysyx_22051013_RSTABLE) begin
		result_temp <= 132'd0;
	end
	else if(mul_doing & ~mul_ready) begin
		result_temp <= result_temp + multiplicand_mod + {131'd0,carry};
	end
	else if(mul_valid)begin
		result_temp <= 132'd0;
	end
	else begin
		result_temp <= result_temp;
	end
end


assign result_hi = out_valid ? result_temp[127:64] : `ysyx_22051013_ZERO64;
assign result_lo = out_valid ? result_temp[63:0] : `ysyx_22051013_ZERO64;

endmodule

/*-------------------------------------
* Last modify date : 2023/7/2
* Function : booth part mul generate
---------------------------------------*/

 module ysyx_22051013_booth1(
	 input wire [131:0]	mult	,
	 input wire [2:0]		sel	,
	 output wire [131:0]	part_mul	,
	 output wire 			carry
);
  wire y_add,y,y_sub; 
  wire sel_negative,sel_double_negative,sel_positive,sel_double_positive;

  assign {y_add,y,y_sub} = sel;
  
  assign sel_negative =  y_add & (y & ~y_sub | ~y & y_sub);
  assign sel_positive = ~y_add & (y & ~y_sub | ~y & y_sub);
  assign sel_double_negative =  y_add & ~y & ~y_sub;
  assign sel_double_positive = ~y_add &  y &  y_sub;

  assign part_mul = sel_double_negative ? ~{mult[130:0] , 1'b0} : 
            	sel_double_positive ? {mult[130:0] , 1'b0} :
            	sel_negative ? ~mult :
            	sel_positive ? mult :
            	132'd0;

  assign carry = sel_double_negative | sel_negative;
  
endmodule

/*-------------------------------------
* Last modify date : 2023/7/2
* Function : shift divider
---------------------------------------*/

 module ysyx_22051013_divide(
	 input wire				clk	,
	 input wire				rst	,
	 input wire				div_valid	,
	 input wire				flush	,
	 input wire				divw	,
	 input wire				div_signed	,
	 input wire [`ysyx_22051013_DATA]	div_op1	,
	 input wire [`ysyx_22051013_DATA]	div_op2	,

	 output wire				out_valid	,
	 output wire [`ysyx_22051013_DATA]	quotient	,
	 output wire [`ysyx_22051013_DATA]	remainder
);
wire	div_ready;
	assign div_ready = flush | (cnt == 7'b0);
	assign out_valid = flush | ~div_doing ? 1'b0 : div_ready;

reg div_doing;

always@(posedge clk) begin
	if(rst == `ysyx_22051013_RSTABLE) begin 
		div_doing <= 1'b0;
	end
	else if(div_valid | ~div_ready) begin
		div_doing <= 1'b1;
	end
	else begin
		div_doing <= 1'b0;
	end
end

wire [63:0] op1_temp;
wire [63:0] op2_temp;

assign op1_temp = divw & ~div_signed ? {32'b0,div_op1[31:0]} : 
		divw & div_signed ? {{32{div_op1[31]}},div_op1[31:0]} :
	  div_op1;

assign op2_temp = divw & ~div_signed ? {32'b0,div_op2[31:0]} : 
		divw & div_signed ? {{32{div_op2[31]}},div_op2[31:0]} :
	  div_op2;

wire op1_sign;
wire op2_sign;

assign op1_sign = div_signed & op1_temp[63];
assign op2_sign = div_signed & op2_temp[63];

wire [63:0] op1_abs;
wire [63:0] op2_abs;

assign op1_abs = op1_sign ? (~op1_temp + 1) : op1_temp;
assign op2_abs = op2_sign ? (~op2_temp + 1) : op2_temp;

reg [127:0] dividend;
wire [64:0] divisor;
reg [6:0] cnt;
reg [63:0] temp_q;

assign divisor = {1'b0, op2_abs};

wire sub_sign ;
wire [63:0]  mod_dividend;

assign {sub_sign, mod_dividend} = dividend[127:63] - divisor;

always@(posedge clk)	begin
	if(rst == `ysyx_22051013_RSTABLE) begin
		dividend <= 128'd0;
		temp_q <= `ysyx_22051013_ZERO64	;
		cnt <= 7'b0;
	end
	else if(div_doing & cnt != 7'b0) begin
		if(sub_sign) begin
			dividend <= {dividend[126:0],1'b0};			
		end
		else begin
			dividend <= {mod_dividend,dividend[62:0],sub_sign};
		end
		temp_q <= {temp_q[62:0], ~sub_sign};
		cnt <= cnt - 1'b1;
	end
	else if(div_valid) begin
		dividend <= {64'd0,op1_abs};
		temp_q <= `ysyx_22051013_ZERO64	;
		cnt <= 7'd64;
	end
	else begin
		dividend <= dividend;
		temp_q <= temp_q	;
		cnt <= 7'd0;
	end
end

reg [63:0] mod_quo;
reg [63:0] mod_rem;

always@(*) begin
	if(rst == `ysyx_22051013_RSTABLE) begin
		mod_quo = `ysyx_22051013_ZERO64	;
		mod_rem = `ysyx_22051013_ZERO64	;
	end
	else if(out_valid) begin 
		if(op1_sign & op2_sign) begin 
			mod_rem = ~dividend[127:64] + 1;
			mod_quo = temp_q;
		end
		else if(op1_sign & ~op2_sign) begin
			mod_rem = ~dividend[127:64] + 1;
			mod_quo = ~temp_q + 1;
		end
		else if(~op1_sign & op2_sign) begin
			mod_rem = dividend[127:64];
			mod_quo = ~temp_q + 1;
		end
		else begin
			mod_rem = dividend[127:64];
			mod_quo = temp_q;
		end
	end
	else begin
		mod_rem = dividend[127:64];
		mod_quo = temp_q;
	end
end

assign quotient = out_valid ? mod_quo : `ysyx_22051013_ZERO64;
assign remainder = out_valid ? mod_rem : `ysyx_22051013_ZERO64;		


endmodule

/*-------------------------------------
* Last modify date : 2023/7/2
* Function : ex-ls reg
---------------------------------------*/

module ysyx_22051013_reg_exls(
	//front stage input
	input	wire					clk		,
	input	wire					rst		,
	//input	wire	[`ysyx_22051013_INST]		ex_inst 	,
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
	//output	reg	[`ysyx_22051013_INST]		ls_inst		,
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
		//ls_inst		<= 32'd0;
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
		//ls_inst		<= ls_inst;
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
		//ls_inst		<= 32'd0;
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
		//ls_inst		<= ex_inst;
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

/*-------------------------------------
* Last modify date : 2023/7/2
* Function : load store exe
---------------------------------------*/
 
 module ysyx_22051013_lsu(
  	input	wire                    		rst       ,
  	input	wire                    		clk       ,
 	input	wire	[`ysyx_22051013_DATA]           alu_res   ,
 	input	wire	[`ysyx_22051013_DATA]           store_data ,
 	input	wire	[3:0]               		ls_ctl ,
 	input	wire					fencei	,
	
	input	wire					wb_ready,
	input	wire					ex_valid,
	input	wire					except_ena,
 	output	wire					ls_ready,
 	output	wire					ls_valid,
 	output	wire					ls_flush,
 	output	wire					ls_jump,
 	output	wire	[`ysyx_22051013_PC]		ls_jump_pc,
 	
 	//axi
 	output	wire					we,
 	output	wire					re,
 	output	wire					fencei_o,
 	output	wire					core_ready,
 	output	wire	[`ysyx_22051013_PC]		data_pc,
 	input	wire	[`ysyx_22051013_DATA]		data_temp,
 	output	reg	[`ysyx_22051013_DATA]		data_o,
 	output 	wire	[2:0]				data_size	,
 	output	reg	[7:0]				wlen,
 	input	wire					data_valid,
 	
 	output	wire	[`ysyx_22051013_DATA]      	ls_data_forward,
 	output	wire	[`ysyx_22051013_DATA]      	ls_data_o
 );
 
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//------------------------------------------------------hzd_ctl--------------------------------------------------------------//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

 assign ls_ready = wb_ready | (data_ok  & (re | we | fencei));
 assign ls_valid = ex_valid | (data_ok  & (re | we | fencei));
 
 wire [`ysyx_22051013_DATAADDR] raddr ;
 wire [`ysyx_22051013_DATAADDR] waddr ; 
 reg [`ysyx_22051013_DATA] load_data ;
 
 reg data_ok;
 
always@(posedge clk) begin
	if(rst == `ysyx_22051013_RSTABLE) begin
		data_ok <= 1'b0;
	end
	else if(~(ls_ready | ex_valid)) begin 
		data_ok <= 1'b1;
	end
	else if(~data_valid)begin
		data_ok <= 1'b0;
	end
	else begin
		data_ok <= data_ok;
	end
end
 
 reg [`ysyx_22051013_DATA] data_i;
 
 always@(posedge clk) begin
	if(rst == `ysyx_22051013_RSTABLE) begin
		data_i <= 64'b0;
	end
	else if(~(ls_ready | ex_valid)) begin 
		data_i <= 64'd0;
	end
	else if(~data_valid)begin
		data_i <= data_temp;
	end
	else begin
		data_i <= data_i;
	end
end

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//------------------------------------------------------load store --------------------------------------------------------------//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
 
 //--------------------------load-----------------------------------------------------------------//
wire [ 2:0] byte_sel = alu_res[2:0] ;
wire [ 1:0] half_sel = alu_res[2:1] ;
wire 	    word_sel = alu_res[2]   ;

reg  [ 7:0] data_byte      ;
reg  [15:0] data_half	   ;
wire [31:0] data_word      ;

always @(*) begin
    if(rst == `ysyx_22051013_RSTABLE) begin
        data_byte = 8'b00000000           ;
    end 
    else begin 
        case (byte_sel)
            3'b000: data_byte = data_i[ 7: 0] ;
            3'b001: data_byte = data_i[15: 8] ;
            3'b010: data_byte = data_i[23:16] ;
            3'b011: data_byte = data_i[31:24] ;
            3'b100: data_byte = data_i[39:32] ;
            3'b101: data_byte = data_i[47:40] ;
            3'b110: data_byte = data_i[55:48] ;
            default: data_byte = data_i[63:56] ;
        endcase
    end 
end

always @(*) begin
    if(rst == `ysyx_22051013_RSTABLE) begin 
        data_half = 16'h0  ;
    end 
    else begin 
        case (half_sel)
            2'b00: data_half = data_i[15: 0] ;
            2'b01: data_half = data_i[31:16] ;
            2'b10: data_half = data_i[47:32] ; 
            default: data_half = data_i[63:48];
        endcase
    end 
end

assign data_word = word_sel ? data_i[63:32] : data_i[31:0] ;

always @(*) begin
    if(rst == `ysyx_22051013_RSTABLE) begin
        load_data = `ysyx_22051013_ZERO64 ;
    end 
    else if(ls_ctl[3] == 1'b1 ) begin
        case (ls_ctl[2:0])
            3'b001:begin load_data = {{56{data_byte[7]}} , data_byte} ; end
            3'b010:begin load_data = {{48{data_half[15]}} , data_half} ; end
            3'b011:begin load_data = {{32{data_word[31]}} , data_word} ; end
            3'b100:begin load_data = data_i			; end
            3'b101:begin load_data = {{56{1'b0}} , data_byte} ; end
            3'b110:begin load_data = {{48{1'b0}} , data_half} ; end
            3'b111:begin load_data = {{32{1'b0}} , data_word} ; end
            default:begin load_data = `ysyx_22051013_ZERO64 ; end
        endcase
    end
    else begin load_data = `ysyx_22051013_ZERO64 ; end
end


//--------------------------store--------------------------------------------------------------------//
reg [ 7:0]      sb_mask    ;
reg [ 7:0]      sh_mask    ;
reg [ 7:0]      sw_mask    ;

reg [`ysyx_22051013_DATA] sb_data;
reg [`ysyx_22051013_DATA] sw_data;
reg [`ysyx_22051013_DATA] sh_data;

always @(*) begin
    if(rst == `ysyx_22051013_RSTABLE) begin
        sb_mask = 8'd0  ;
        sb_data = 64'd0;
    end
    else begin
        case (byte_sel)
            3'b000:    begin
            	sb_data = {56'd0,store_data[7:0]};
                sb_mask = 8'b00000001 ;
            end 
            3'b001:    begin
            	sb_data = {48'd0,store_data[7:0],8'd0};
                sb_mask = 8'b00000010 ;
            end 
            3'b010:    begin 
            	sb_data = {40'd0,store_data[7:0],16'd0};
                sb_mask = 8'b00000100 ;
            end 
            3'b011:    begin
            	sb_data = {32'd0,store_data[7:0],24'd0};
                sb_mask = 8'b00001000 ;
            end 
            3'b100:    begin 
            	sb_data = {24'd0,store_data[7:0],32'd0};
                sb_mask = 8'b00010000 ;
            end 
            3'b101:    begin
            	sb_data = {16'd0,store_data[7:0],40'd0}; 
                sb_mask = 8'b00100000 ;
            end 
            3'b110:    begin
            	sb_data = {8'd0,store_data[7:0],48'd0};
                sb_mask = 8'b01000000 ;
            end  
            default:   begin 
            	sb_data = {store_data[7:0],56'd0};
                sb_mask = 8'b10000000 ;
            end
        endcase
    end
end

always @(*) begin
    if(rst == `ysyx_22051013_RSTABLE) begin
        sh_mask = 8'd0  ;
        sh_data = 64'd0;
    end
    else begin
        case (half_sel)
            2'b00:     begin
                sh_mask = 8'b00000011  ;
                sh_data = {48'd0,store_data[15:0]};
            end 
            2'b01:     begin
                sh_mask = 8'b00001100  ;
                sh_data = {32'd0,store_data[15:0],16'd0};
            end
            2'b10:     begin
                sh_mask = 8'b00110000  ;
                sh_data = {16'd0,store_data[15:0],32'd0};
            end
            default:   begin
                sh_mask = 8'b11000000  ;
                sh_data = {store_data[15:0],48'd0};
            end 
        endcase
    end
end

always @(*) begin
    if(rst == `ysyx_22051013_RSTABLE) begin
        sw_mask = 8'd0  ;
        sw_data = 64'd0;
    end
    else begin
        case (word_sel)
            1'b0:    begin
                sw_mask = 8'b00001111  ;
                sw_data = {32'd0,store_data[31:0]};
            end 
            default: begin
                sw_mask = 8'b11110000  ;
                sw_data = {store_data[31:0],32'd0};
            end 
        endcase
    end
end

always @(*) begin
    if(rst == `ysyx_22051013_RSTABLE) begin
        data_o = `ysyx_22051013_ZERO64 ;
        wlen = 8'd0  ;
    end
    else begin
        case (ls_ctl)
            4'b0001:   begin
                data_o = sb_data ;
                wlen = sb_mask ; 
            end
            4'b0010:   begin
                data_o = sh_data;
                wlen = sh_mask ; 
            end
            4'b0100:   begin
                data_o = sw_data ;
                wlen = sw_mask ; 
            end
            4'b0101:   begin
                data_o = store_data ;
                wlen = 8'b11111111 ; 
            end
            default: begin
                data_o = `ysyx_22051013_ZERO64 ;
                wlen = 8'd0  ;
            end
        endcase
    end
end

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//------------------------------------------------------output--------------------------------------------------------------//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//------------------------------------------------------out to ifu--------------------------------------------------------------//

 assign ls_flush = ls_jump;
 assign ls_jump_pc = alu_res;
 assign ls_jump = fencei;
 
//------------------------------------------------------out to idu--------------------------------------------------------------//

 assign ls_data_forward  = re ? load_data : alu_res ;

//------------------------------------------------------out to dcache--------------------------------------------------------------//
 assign fencei_o = fencei;
 
 assign core_ready = wb_ready | ~data_ok;
 
 assign data_size = 	((ls_ctl == 4'b0001) | (ls_ctl == 4'b1001) | (ls_ctl == 4'b1101)) ? 3'b000 : 
 			((ls_ctl == 4'b0010) | (ls_ctl == 4'b1010) | (ls_ctl == 4'b1110)) ? 3'b001 :
 			((ls_ctl == 4'b0100) | (ls_ctl == 4'b1011) | (ls_ctl == 4'b1111)) ? 3'b010 :
 			((ls_ctl == 4'b0101) | (ls_ctl == 4'b1100)) ? 3'b011 :
 			3'b000;

 assign re	= (rst == `ysyx_22051013_RSTABLE | ls_ctl == 4'b0000 | except_ena ) ? 1'b0 : ls_ctl[3];
 assign we	= (rst == `ysyx_22051013_RSTABLE | ls_ctl == 4'b0000 | except_ena ) ? 1'b0 : ~ls_ctl[3];
 assign waddr	= (rst == `ysyx_22051013_RSTABLE) ? `ysyx_22051013_ZERO64 : alu_res ;
 assign raddr	= (rst == `ysyx_22051013_RSTABLE) ? `ysyx_22051013_ZERO64 : alu_res ;


 assign data_pc = re ? raddr : we ? waddr : `ysyx_22051013_ZERO64;


//------------------------------------------------------out to wbu--------------------------------------------------------------//

 assign ls_data_o  = re ? load_data : `ysyx_22051013_ZERO64 ;

endmodule

/*-------------------------------------
* Last modify date : 2023/7/2
* Function : ls-wb reg
---------------------------------------*/

module ysyx_22051013_reg_lswb(
	//front stage input
	input	wire                                     clk		,
	input	wire                                     rst		,
	//input	wire	[`ysyx_22051013_INST]		ls_inst	,
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
	//output	reg	[`ysyx_22051013_INST]		wb_inst		,
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
		//wb_inst		<= 32'd0;
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
		//wb_inst		<= wb_inst;
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
		//wb_inst		<= 32'd0;
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
		//wb_inst		<= ls_inst;
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


/*--------------------------------------
* Last modify date : 2023/6/21
* Function : write back data to regs
--------------------------------------*/

 module ysyx_22051013_wbu(
 	input	wire 					clk	,
 	input	wire            			rst	,
 	input	wire	[`ysyx_22051013_DATA]		ls_rd_data  ,
 	input	wire	[1:0]      			wb_ctl	,
 	input	wire	[`ysyx_22051013_DATA]		exu_res	,
 	//input	wire	[`ysyx_22051013_INST]		inst_i	,
        input	wire	[`ysyx_22051013_PC]		pc_i	,
        input	wire					rd_ena	,
    	input	wire	[`ysyx_22051013_REGADDR]	rd_addr	, 
    	input	wire	[6:0]				csr_ctl	,
    	input	wire	[11:0]				csr_addr,
    	input	wire	[`ysyx_22051013_PC]		ls_pc_i	,
    	input	wire					ls_valid,
    	//input 	wire					id_stall,
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

endmodule

/*---------------------------------------------------------------------
* Last modify date : 2023/7/2
* Function : csr operate (mcycle mip mie mstatus mepc mtvec mcause)
---------------------------------------------------------------------*/

module ysyx_22051013_csr(
	input	wire				clk		,
	input	wire				rst		,
	input	wire	[`ysyx_22051013_PC]	pc_i		,
	input	wire	[3:0]			csr_ctl		,//{csr_wr_ena, csr_rd_ena, ecall_ena, mret_ena}
	input	wire	[11:0]			csr_addr	,
	input	wire				core_valid	,
	input	wire	[`ysyx_22051013_REG]	mcause_value	,
	input	wire	[`ysyx_22051013_DATA]	write_csr_data	,
	input	wire				time_interrupt	,
	output	wire				time_interrupt_confirm	,
	output	wire	[`ysyx_22051013_DATA]	read_csr_data
);
/*
import "DPI-C" function void difftest_dut_csr(
	input longint csr_mstatus,
	input longint csr_mtvec,
	input longint csr_mepc,
	input longint csr_mcause
);

always@(posedge clk) begin
   difftest_dut_csr(
   	mstatus,
   	mtvec,
   	mepc,
   	mcause
   );
end
*/
//0xb00 mcycle
wire mcycle_rd = (csr_addr == 12'hb00) && csr_ctl[2] ;
wire mcycle_wr = (csr_addr == 12'hb00) && csr_ctl[3] ;

reg [`ysyx_22051013_REG] mcycle;

always@(posedge clk) begin
  if(rst == `ysyx_22051013_RSTABLE) begin mcycle <= `ysyx_22051013_ZERO64; end
  else if(mcycle_wr) begin mcycle <= write_csr_data; end
  else             begin mcycle <= mcycle + 64'd1 ;end
end


//0x304 mie 
wire mie_rd = (csr_addr == 12'h304) && csr_ctl[2] ;
wire mie_wr = (csr_addr == 12'h304) && csr_ctl[3] ;

reg mtie;
wire [`ysyx_22051013_REG] mie = {56'd0, mtie, 7'd0};


always@(posedge clk) begin
  if(rst == `ysyx_22051013_RSTABLE) begin mtie <= 1'b0; end
  else if(mie_wr) begin mtie <= write_csr_data[7]; end
  //else if(time_interrupt_confirm & ~core_valid) begin mtie <= 1'b0; end
  else             begin mtie <= mtie ;end
end


//0x344 mip
wire mip_rd = (csr_addr == 12'h344) && csr_ctl[2] ;

reg mtip;
wire [`ysyx_22051013_REG] mip = {56'd0, mtip, 7'd0};


always@(posedge clk) begin
	if(rst == `ysyx_22051013_RSTABLE) begin mtip <= 1'b0; end
	else if(~core_valid) begin mtip <= time_interrupt; end
	else	begin mtip <= mtip ;end
end

//0X300 mstatus
wire mstatus_rd = (csr_addr == 12'h300) && csr_ctl[2] ;
wire mstatus_wr = (csr_addr == 12'h300) && csr_ctl[3] ;
reg mstatus_mie;
reg mstatus_mpie;
reg [1:0] mstatus_mpp;
wire [`ysyx_22051013_REG] mstatus = {51'd0, mstatus_mpp, 3'b000, mstatus_mpie, 3'b000, mstatus_mie, 3'b000};

wire mstatus_ie_ena = mstatus_wr | csr_ctl[1] | csr_ctl[0] | time_interrupt_confirm;

wire mie_set = (csr_ctl[1] | time_interrupt_confirm) ? 1'b0 : 
               csr_ctl[0] ? mstatus_mpie : 
		mstatus_wr ? write_csr_data[3] :
		mstatus_mie ;

wire mpie_set = (csr_ctl[1] | time_interrupt_confirm) ? mstatus_mie :
                csr_ctl[0] ? 1'b1 :
		mstatus_wr ? write_csr_data[7] :
		mstatus_mpie ;

wire [1:0] mpp_set = (csr_ctl[1] | time_interrupt_confirm)? 2'b11 : 
               csr_ctl[0] ? 2'b00 :
		mstatus_wr ? write_csr_data[12:11] :
		mstatus_mpp ;

always@(posedge clk) begin
  	if(rst == `ysyx_22051013_RSTABLE) begin 
  		mstatus_mie <= 1'b0;
  		mstatus_mpie <= 1'b0;
 	end
	else if(mstatus_ie_ena & ~core_valid) begin 
		mstatus_mie <= mie_set;
		mstatus_mpie <= mpie_set;
	end
	else begin  
		mstatus_mie <= mstatus_mie;
		mstatus_mpie <= mstatus_mpie;
	end
end
always@(posedge clk) begin
  	if(rst == `ysyx_22051013_RSTABLE) begin 
		mstatus_mpp <= 2'b00;
 	end
	else if(mstatus_ie_ena) begin 
		mstatus_mpp <= mpp_set; 
	end
	else begin  
		mstatus_mpp <= mstatus_mpp;
	end
end


//0x305 mtvec
wire mtvec_rd = ((csr_addr==12'h305) && csr_ctl[2]) | csr_ctl[1] | time_interrupt_confirm;
wire mtvec_wr = ((csr_addr==12'h305) && csr_ctl[3]) ;

reg [63:2] mtvec_base ;
always@(posedge clk) begin
  if(rst == `ysyx_22051013_RSTABLE) begin mtvec_base <= 62'd0; end
  else if(mtvec_wr) begin mtvec_base <= write_csr_data[63:2] ; end
  else         begin mtvec_base <= mtvec_base ; end
end

wire [1:0] mtvec_mode ;
assign mtvec_mode =2'b00;
wire [`ysyx_22051013_REG] mtvec = {mtvec_base,mtvec_mode};

//0x341 mepc
wire mepc_rd = ((csr_addr==12'h341) && csr_ctl[2]) | csr_ctl[0] ;
wire mepc_wr = ((csr_addr==12'h341) && csr_ctl[3]) | csr_ctl[1] | time_interrupt_confirm;

reg [`ysyx_22051013_REG] mepc ;
always@(posedge clk) begin
  if(rst == `ysyx_22051013_RSTABLE) begin mepc <= `ysyx_22051013_ZERO64; end
  else if(mepc_wr) begin mepc <= write_csr_data; end
  else             begin mepc <= mepc ;end
end

//0x342 mcause
wire mcause_rd = ((csr_addr == 12'h342) && csr_ctl[2]) ;
wire mcause_wr = ((csr_addr == 12'h342) && csr_ctl[3]) ;
reg [`ysyx_22051013_REG] mcause ;

always@(posedge clk) begin 
	if(rst == `ysyx_22051013_RSTABLE) begin mcause <= `ysyx_22051013_ZERO64 ; end
	else if(mcause_wr) begin mcause <= write_csr_data ; end
	else if(csr_ctl[1] | time_interrupt_confirm) begin mcause <= mcause_value ; end
	else               begin mcause <= mcause ;end
end

assign time_interrupt_confirm = mtie & mtip & mstatus[3] & (pc_i != 64'd0);

//read
assign read_csr_data =	({64{mstatus_rd}} & mstatus)
	                | ({64{mepc_rd}} & mepc) 
			| ({64{mtvec_rd}} & mtvec)  
			| ({64{mcause_rd}} & mcause) 
			| ({64{mie_rd}} & mie)
			| ({64{mcycle_rd}} & mcycle)
			| ({64{mip_rd}} & mip)
			| `ysyx_22051013_ZERO64;

endmodule

/*------------------------------------
* Last modify date: 2023/7/2
* Function : riscv64 register
------------------------------------*/

module ysyx_22051013_regfile(
	input	wire					clk	,
	input	wire					rst	,

	input	wire	[`ysyx_22051013_REGADDR]	waddr	,
	input	wire	[`ysyx_22051013_REG]		wdata	,
	input	wire					wen	,

	input	wire	[`ysyx_22051013_REGADDR]	raddr1	,
	output	wire	[`ysyx_22051013_REG]		rdata1	,
	input	wire					ren1	,

	input	wire	[`ysyx_22051013_REGADDR]	raddr2	,
	output	wire	[`ysyx_22051013_REG]		rdata2	,
	input	wire					ren2		

 
 );

 reg[`ysyx_22051013_REG] regs [0:31];
/* 
 import "DPI-C" function void difftest_dut_regs(
 	input longint Z0 ,
 	input longint ra ,
 	input longint sp ,
 	input longint gp ,
 	input longint tp ,
 	input longint t0 ,
 	input longint t1 ,
 	input longint t2 ,
 	input longint fp ,
 	input longint s1 ,
 	input longint a0 ,
 	input longint a1 ,
 	input longint a2 ,
 	input longint a3 ,
 	input longint a4 ,
 	input longint a5 ,
 	input longint a6 ,
 	input longint a7 ,
 	input longint s2 ,
 	input longint s3 ,
 	input longint s4 ,
 	input longint s5 ,
 	input longint s6 ,
 	input longint s7 ,
 	input longint s8 ,
 	input longint s9 ,
 	input longint s10 ,
 	input longint a11 ,
        input longint t3 ,
 	input longint t4 ,
 	input longint t5 ,
 	input longint t6 
 );

 always@(posedge clk)begin
 	difftest_dut_regs(
 		regs[0],
 		regs[1],
 		regs[2],
 		regs[3],
 		regs[4],
 		regs[5],
 		regs[6],
 		regs[7],
 		regs[8],
 		regs[9],
 		regs[10],
 		regs[11],
 		regs[12],
 		regs[13],
 		regs[14],
 		regs[15],
 		regs[16],
 		regs[17],
 		regs[18],
 		regs[19],
 		regs[20],
 		regs[21],
 		regs[22],
 		regs[23],
 		regs[24],
 		regs[25],
 		regs[26],
 		regs[27],
 		regs[28],
 		regs[29],
 		regs[30],
 		regs[31]
 	);
 end
 */

 always@(posedge clk) begin
	 if(rst == `ysyx_22051013_RSTABLE) begin
		regs[0] <= `ysyx_22051013_ZERO64; 
 		regs[1] <= `ysyx_22051013_ZERO64; 
 		regs[2] <= `ysyx_22051013_ZERO64; 
 		regs[3] <= `ysyx_22051013_ZERO64; 
 		regs[4] <= `ysyx_22051013_ZERO64; 
 		regs[5] <= `ysyx_22051013_ZERO64; 
 		regs[6] <= `ysyx_22051013_ZERO64; 
 		regs[7] <= `ysyx_22051013_ZERO64; 
 		regs[8] <= `ysyx_22051013_ZERO64; 
 		regs[9] <= `ysyx_22051013_ZERO64; 
 		regs[10] <= `ysyx_22051013_ZERO64; 
 		regs[11] <= `ysyx_22051013_ZERO64; 
 		regs[12] <= `ysyx_22051013_ZERO64; 
 		regs[13] <= `ysyx_22051013_ZERO64; 
 		regs[14] <= `ysyx_22051013_ZERO64; 
 		regs[15] <= `ysyx_22051013_ZERO64; 
 		regs[16] <= `ysyx_22051013_ZERO64; 
 		regs[17] <= `ysyx_22051013_ZERO64; 
 		regs[18] <= `ysyx_22051013_ZERO64; 
 		regs[19] <= `ysyx_22051013_ZERO64; 
 		regs[20] <= `ysyx_22051013_ZERO64; 
 		regs[21] <= `ysyx_22051013_ZERO64; 
 		regs[22] <= `ysyx_22051013_ZERO64; 
 		regs[23] <= `ysyx_22051013_ZERO64; 
 		regs[24] <= `ysyx_22051013_ZERO64; 
 		regs[25] <= `ysyx_22051013_ZERO64; 
 		regs[26] <= `ysyx_22051013_ZERO64; 
 		regs[27] <= `ysyx_22051013_ZERO64; 
 		regs[28] <= `ysyx_22051013_ZERO64; 
 		regs[29] <= `ysyx_22051013_ZERO64; 
 		regs[30] <= `ysyx_22051013_ZERO64; 
 		regs[31] <= `ysyx_22051013_ZERO64;
	 end
   else begin
		 if(wen == `ysyx_22051013_WENABLE && waddr != 5'd0)begin
			 regs[waddr]<=wdata;
		 end
	 end
 end

 assign rdata1 = ((rst != `ysyx_22051013_RSTABLE) && (ren1 == `ysyx_22051013_RENABLE)) ? regs[raddr1] : `ysyx_22051013_ZERO64;
 assign rdata2 = ((rst != `ysyx_22051013_RSTABLE) && (ren2 == `ysyx_22051013_RENABLE)) ? regs[raddr2] : `ysyx_22051013_ZERO64;

 endmodule
 
 /*------------------------------------
* Last modify date: 2023/7/2
* Function : icache device select
------------------------------------*/

module ysyx_22051013_icache_device_sel(
	input	wire				clk	,
	input	wire				rst	,
	//core
	input	wire	[`ysyx_22051013_PC]	core_addr	,
	input	wire				core_ready	,
	input	wire				fencei	,	
	//input	wire				jump		,
	
	output	wire				inst_valid	,
	output	wire	[`ysyx_22051013_DATA]	pc	,
	output	wire	[`ysyx_22051013_INST]	inst	,
	
	//axi
	output	wire				axi_re	,
	output	wire	[`ysyx_22051013_PC]	axi_inst_pc	,
	output	wire	[2:0]			axi_size	,
	input	wire				axi_valid	,
	input	wire	[`ysyx_22051013_DATA]	axi_inst_i	, 
	input	wire				icache_axi_re	,
	input	wire	[`ysyx_22051013_PC]	icache_axi_pc	,
	output	wire	[`ysyx_22051013_DATA]	axi_icache_inst	,
	output	wire				axi_icache_valid,
	
	//icache
	output	wire				icache_ena	,
	output	wire	[`ysyx_22051013_PC]	icache_inst_pc	,
	output	wire				icache_ready	,
	output	wire				icache_fencei	,
	input	wire				icache_valid	,
	input	wire	[`ysyx_22051013_PC]	icache_pc	,
	input	wire	[`ysyx_22051013_INST]	icache_inst_i	
);

wire mem_ena;

assign mem_ena =((core_addr >= `ysyx_22051013_MEM_START) & (core_addr <= `ysyx_22051013_MEM_END)) ;

wire clint_ena;
assign clint_ena = ((core_addr >= `ysyx_22051013_CLINT_START) & (core_addr <= `ysyx_22051013_CLINT_END));

wire apb_ena;
assign apb_ena = ((pc >= `ysyx_22051013_APB_START) & (pc <= `ysyx_22051013_APB_END));

reg sel_now;
reg core_re;
reg [63:0]	pc_now;

always@(posedge clk) begin
	if(rst == `ysyx_22051013_RSTABLE) begin
		sel_now <= `ysyx_22051013_DISABLE;
		core_re <= `ysyx_22051013_DISABLE;
		pc_now <= `ysyx_22051013_ZERO64;
	end
	else if(core_ready | ~inst_valid) begin 
		sel_now <= sel_now;
		core_re <= core_re;
		pc_now <= pc_now;
	end
	else begin
		sel_now <= mem_ena;
		core_re <= ~mem_ena;
		pc_now <= core_addr;
	end
end

//to icache
assign icache_fencei = fencei;
assign icache_ena = core_ready ? 1'b0 : mem_ena;
assign icache_inst_pc = mem_ena ? core_addr : `ysyx_22051013_ZERO64;
assign icache_ready = mem_ena ? core_ready : `ysyx_22051013_DISABLE;


assign axi_icache_inst = sel_now ? axi_inst_i : `ysyx_22051013_ZERO64;
assign axi_icache_valid = sel_now ? axi_valid : `ysyx_22051013_DISABLE;

// to axi
assign axi_re = sel_now & ~core_ready ? icache_axi_re : 
		~sel_now & ~clint_ena & ~core_ready ? core_re :
		1'b0;
		
assign axi_inst_pc = ~sel_now ? pc_now : icache_axi_pc;

assign axi_size = sel_now ? 3'b011 : 
			apb_ena ? 3'b010 : 
			3'b000;

//to core
assign inst_valid = ~sel_now ? ~(axi_re & ~axi_valid) : icache_valid ;
assign inst = ~sel_now ? axi_inst_i[31:0] : icache_inst_i;
assign pc = sel_now ? icache_pc : pc_now;

endmodule
 
/*------------------------------------
* Last modify date: 2023/7/2
* Function : dcache device select
------------------------------------*/

module ysyx_22051013_dcache_device_sel(
	//core
	input	wire				core_re	,
	input	wire				core_we	,
	input	wire	[7:0]			core_mask	,
	input	wire 	[`ysyx_22051013_DATA]	core_data_i	,
	input	wire	[`ysyx_22051013_PC]	core_addr	,
	input	wire				core_ready	,
	input	wire	[2:0]			core_size	,
	input	wire				fencei	,
		
	output	wire				data_valid	,
	output	wire	[`ysyx_22051013_DATA]	data_to_core	,
	
	//axi
	output	wire				clint_ena	,
	output	wire				axi_re	,
	output	wire				axi_we	,
	output	wire	[7:0]			axi_mask	,
	output	wire	[`ysyx_22051013_DATA]	axi_data_o	,
	output	wire	[`ysyx_22051013_PC]	axi_data_pc	,
	output	wire	[2:0]			axi_size	,
	input	wire				axi_valid	,
	input	wire	[`ysyx_22051013_DATA]	axi_data_i	, 
	input	wire				dcache_axi_re	,
	input	wire				dcache_axi_we	,
	input	wire	[`ysyx_22051013_PC]	dcache_axi_pc	,
	input	wire 	[`ysyx_22051013_DATA]	dcache_axi_data	,
	output	wire	[`ysyx_22051013_DATA]	axi_dcache_data	,
	output	wire				axi_dcache_valid,
	
	//dcache
	output	wire				dcache_re	,
	output	wire				dcache_we	,
	output	wire	[7:0]			dcache_mask	,
	output	wire	[`ysyx_22051013_DATA]	dcache_data_o	,
	output	wire	[`ysyx_22051013_PC]	dcache_data_pc	,
	output	wire				dcache_ready	,
	output	wire				dcache_fencei	,
	input	wire				dcache_valid	,
	input	wire	[`ysyx_22051013_DATA]	dcache_data_i	
);

wire device_ena;

assign clint_ena = ((core_addr >= `ysyx_22051013_CLINT_START) & (core_addr <= `ysyx_22051013_CLINT_END));

assign device_ena =((core_addr >= `ysyx_22051013_UART_START) & (core_addr <= `ysyx_22051013_UART_END)) | 
		((core_addr >= `ysyx_22051013_CLINT_START) & (core_addr <= `ysyx_22051013_CLINT_END)) |
		((core_addr >= `ysyx_22051013_SPI_START) & (core_addr <= `ysyx_22051013_SPI_END)) | 
		((core_addr >= `ysyx_22051013_FB_START) & (core_addr <= `ysyx_22051013_FB_END)) | 
		((core_addr >= `ysyx_22051013_VGA_START) & (core_addr <= `ysyx_22051013_VGA_END)) | 
		((core_addr >= `ysyx_22051013_KBD_START) & (core_addr <= `ysyx_22051013_KBD_END)) |
		((core_addr >= `ysyx_22051013_CHLINK_START) & (core_addr <= `ysyx_22051013_CHLINK_END)) |
		((core_addr >= `ysyx_22051013_SPIF_START) & (core_addr <= `ysyx_22051013_SPIF_END)) ;

wire apb_ena;
assign apb_ena = ((core_addr >= `ysyx_22051013_APB_START) & (core_addr <= `ysyx_22051013_APB_END));

//to dcache
assign dcache_re = ~device_ena ? core_re : `ysyx_22051013_DISABLE;
assign dcache_we = ~device_ena ? core_we : `ysyx_22051013_DISABLE;
assign dcache_mask = ~device_ena ? core_mask : 8'd0;
assign dcache_data_pc = ~device_ena ? core_addr : `ysyx_22051013_ZERO64;
assign dcache_data_o = ~device_ena ? core_data_i : `ysyx_22051013_ZERO64;
assign dcache_ready = ~device_ena ? core_ready : `ysyx_22051013_DISABLE;

assign dcache_fencei = fencei;

assign axi_dcache_data = fencei | ~device_ena ? axi_data_i : `ysyx_22051013_ZERO64;
assign axi_dcache_valid = fencei | ~device_ena ? axi_valid : `ysyx_22051013_DISABLE;

// to axi
assign axi_re = ~fencei & device_ena & ~core_ready ? core_re : dcache_axi_re;
assign axi_we = ~fencei & device_ena & ~core_ready ? core_we : dcache_axi_we;
assign axi_data_pc = ~fencei & device_ena ? addr : dcache_axi_pc;
assign axi_data_o = ~fencei & device_ena  ? core_data_i : dcache_axi_data;
assign axi_mask = ~fencei & device_ena  ? core_mask :  ~device_ena ? 8'hff : 8'h0;




assign axi_size = 	~fencei & device_ena & ~apb_ena ? core_size : 
			~fencei & device_ena & apb_ena ? 3'b010 : 
			3'b011;
			
wire [63:0] addr;
assign addr =	core_size == 3'b000 ? core_addr :
		core_size == 3'b001 ? {core_addr[63:1], 1'b0} :
		core_size == 3'b010 ? {core_addr[63:2], 2'b0} :
		core_size == 3'b011 ? {core_addr[63:3], 3'b0} :
		core_addr;

//to core
assign data_valid = ~fencei & device_ena ? ~axi_valid : dcache_valid ;
assign data_to_core = device_ena ? axi_data_i : dcache_data_i;


endmodule

/*------------------------------------
* Last modify date: 2023/7/2
* Function : cache tag ram
------------------------------------*/

module ysyx_22051013_cache_tag_ram (
    input	wire                               clk,
    input	wire                               rst,
    input	wire            [5:0]              addr,
    input	wire            [23:0]             tag_data_i,
    input	wire                               write_ena,
    output	wire            [22:0]             tag_data_o ,
    output	wire                               tag_valid
);

 reg [23:0] ram [0:63];
 reg [22:0] out_data  ;
 reg        out_vaild ;
 integer tg;

 always @(posedge clk) begin
     if(rst == `ysyx_22051013_RSTABLE) begin
     	for (tg = 0; tg<64; tg=tg+1) begin
     		ram[tg] <= 24'd0;
     	end
     	out_data <= 23'd0;
     	out_vaild  <= 1'b0;
     end
     else begin
     	if(write_ena) begin
         ram[addr] [22:0] <= tag_data_i[22:0];
         ram[addr] [23] <= tag_data_i[23];
     	end 
         out_data <= ram[addr] [22:0];
         out_vaild <= ram[addr] [23];
     end
 end

 assign tag_data_o = out_data;
 assign tag_valid = out_vaild;

endmodule 

/*---------------------------------------
Last modify date : 2023/6/21
Fucntion : generate PC,INST with icache
---------------------------------------*/

 module ysyx_22051013_i_cache(
	 input	wire		clk	,
	 input	wire		rst	,
	 
	 //to ifu
	 input	wire	[`ysyx_22051013_PC]	inst_pc	,
	 input	wire				pc_ready,	
	 input	wire				fencei	,
	 output	wire				i_valid	,
	 input	wire				icache_ena	,
	 input	wire				icache_valid	, 
	 output	reg	[`ysyx_22051013_INST]	inst	,
	 output	wire	[`ysyx_22051013_PC]	pc	,
	 
	 //to data ram
	 input	wire	[`ysyx_22051013_CACHE]	cache_data,
	 output	wire				ce,
	 output	wire	[`ysyx_22051013_CACHE]	ram_i_data,
	 output	wire	[`ysyx_22051013_CACHE]	ram_strb,
	 output	wire				ram_ena	,
	 output	wire	[5:0]			ram_index	,

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
	else if((icache_state_next == `ysyx_22051013_I_READ) & icache_valid & icache_ena ) begin 
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
			if(~rst & icache_ena & icache_valid) begin
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
			else if((hit1 | hit2)) begin
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
 	.rst(rst),
 	.addr(index),
 	.tag_data_i(tag_with_valid),
 	.write_ena(way1_tag_ena),
 	.tag_data_o(i_tag_way1),
 	.tag_valid(i_tag_valid1)
 );

 ysyx_22051013_cache_tag_ram tag_ram1(
 	.clk(clk),
 	.rst(rst),
 	.addr(index),
 	.tag_data_i(tag_with_valid),
 	.write_ena(way2_tag_ena),
 	.tag_data_o(i_tag_way2),
 	.tag_valid(i_tag_valid2)
 );
 
//------------------------------------------------------data ram--------------------------------------------------------------//

assign ce = (rst == `ysyx_22051013_RSTABLE);


assign ram_strb = ~cache_strb;

assign ram_ena = ~cache_ena;

assign ram_i_data = miss_data;

assign ram_index = hit_index;
/*
 ysyx_22051013_cache_data_ram data_ram0(
	.Q(cache_data),
 	.CLK(clk),
	.CEN(ce),
	.WEN(~cache_ena),
	.BWEN(~cache_strb),
 	.A(hit_index),
 	.D(miss_data)
 );
 */		
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

endmodule

/*---------------------------------------
Last modify date : 2023/6/21
Fucntion : dcache (write back)
---------------------------------------*/

 module ysyx_22051013_d_cache(
	 input	wire		clk	,
	 input	wire		rst	,
	 
	 //to lsu
	 input	wire	[`ysyx_22051013_PC]	data_pc	,
	 input	wire	[`ysyx_22051013_DATA]	data_i	,
	 input	wire				core_ready	,	
	 input	wire				re	,
	 input	wire				we	,
	 input	wire	[7:0]			wmask	,
	 input	wire				fencei	,
	 output	wire				data_valid	,
	 output	reg [`ysyx_22051013_DATA]	data_o	,
	 
	 //to data ram
	 input	wire	[`ysyx_22051013_CACHE]	cache_data,
	 output	wire				ce,
	 output	wire	[`ysyx_22051013_CACHE]	ram_i_data,
	 output	wire	[`ysyx_22051013_CACHE]	ram_strb,
	 output	wire				ram_ena	,
	 output	wire	[5:0]			ram_index	,

	 //to axi
	 output	wire	[`ysyx_22051013_PC]	axi_pc	,
	 output	wire				axi_r_ena	,
	 output	wire				axi_w_ena	,
	 output	wire	[`ysyx_22051013_DATA]	axi_data_o,
	 input	wire	[`ysyx_22051013_DATA]	axi_data_i,
	 input	wire				axi_valid	
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

wire [2:0] pc_zero = data_pc[2:0] & 3'b000;

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
		missr_pc = {data_pc[63:3],pc_zero};
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
			dirtyr_pc = {32'd0, d_tag_way2, dcache_index, 3'd0};
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
 	.rst(rst),
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
 	.rst(rst),
 	.addr(tag_index),
 	.tag_data_i(tag_with_valid),
 	.write_ena(way2_ena),
 	.tag_data_o(d_tag_way2),
 	.tag_valid(d_tag_valid2)
 );
 
//------------------------------------------------------data ram---------------------------------------------------------//


assign ce = (rst == `ysyx_22051013_RSTABLE);

wire	[`ysyx_22051013_CACHE] strb_temp;
assign strb_temp = (dread_state == `ysyx_22051013_D_MISSR) ? cache_r_strb : 
		(dwrite_state == `ysyx_22051013_D_MISSW) ? cache_w_strb : 
		(dwrite_state == `ysyx_22051013_D_HIT) ? hit_w_strb :
		128'd0;
assign ram_strb = ~strb_temp;

wire	ram_ena_temp;
assign ram_ena_temp = (dread_state == `ysyx_22051013_D_MISSR) ? write_r_valid : 
		(dwrite_state == `ysyx_22051013_D_MISSW) ? write_w_valid : 
		(dwrite_state == `ysyx_22051013_D_HIT) ? data_w_valid :
		`ysyx_22051013_DISABLE;

assign ram_ena = ~ram_ena_temp;

assign ram_i_data = (dread_state == `ysyx_22051013_D_MISSR) ? missr_data : 
		(dwrite_state == `ysyx_22051013_D_MISSW) ? missw_data : 
		(dwrite_state == `ysyx_22051013_D_HIT) ? data_write_o :
		128'd0;

assign ram_index = fencei ? fencei_index[5:0] : dcache_index;
/*
 ysyx_22051013_cache_data_ram data_ram0(
	.Q(cache_data),
 	.CLK(clk),
	.CEN(ce),
	.WEN(~ram_ena),
	.BWEN(~ram_strb),
 	.A(ram_index),
 	.D(ram_i_data)
 );
 */
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

/*---------------------------------------
Last modify date : 2023/6/21
Fucntion : axi master arbitrator
---------------------------------------*/

module ysyx_22051013_axi_master_arbitrator(
	input	wire				clk	,
	input	wire				rst	,
	
	//to icache
	input	wire	[`ysyx_22051013_PC]	icache_pc	,
	input	wire				icache_ena	,
	input	wire	[2:0]			inst_size	,
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
wire b_sh = axi_b_ready & axi_b_valid & ((axi_b_id == 4'd1) |(axi_b_id == 4'd2));
wire ar_sh = axi_ar_ready & axi_ar_valid;
wire r_sh = axi_r_ready & axi_r_valid & axi_r_last & ((axi_r_id == 4'd1) | (axi_r_id == 4'd2));

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
				if(w_sh & aw_sh) begin
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
assign axi_aw_id =  w_valid & clint_ena ? 4'd2 : 4'd1 ;
assign axi_aw_addr =  data_pc ;
assign axi_aw_valid = ((arb_w_state == `ysyx_22051013_ARB_ADDR)) & w_valid ;
assign axi_aw_len = 8'd0;
assign axi_aw_size = data_size;
assign axi_aw_burst = `ysyx_22051013_AXI_BURST_INCR;
//w_channel
assign axi_w_data =  data_i ;
assign axi_w_strb = wmask;
assign axi_w_valid = ((arb_w_state == `ysyx_22051013_ARB_ADDR) | (arb_w_state == `ysyx_22051013_ARB_WRITE)) & w_valid ;
assign axi_w_last = w_valid;
//b_channel
assign axi_b_ready = `ysyx_22051013_ENABLE;


//read
//ar_channel
assign axi_ar_id =  (read_state == 2'b10) & clint_ena ? 4'd2 : 4'd1 ;

assign axi_ar_len = 8'd0;

assign axi_ar_size = (read_state == 2'b01) ? inst_size : (read_state == 2'b10) ? data_size : 3'b000;

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
	if(rst == `ysyx_22051013_RSTABLE) begin
		read_state_next  = 2'b00 ;
	end
	else begin
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
end

assign data_o = ((read_state == 2'b10) & r_sh) ? axi_r_data : `ysyx_22051013_ZERO64;
assign axi_inst = ((read_state == 2'b01) & r_sh) ? axi_r_data : `ysyx_22051013_ZERO64;

wire data_w_not_ready = b_sh;
wire data_r_not_ready =  r_sh;
assign axi_inst_valid =  (read_state == 2'b01) & r_sh;

assign axi_data_valid = (read_state == 2'b10) ? data_r_not_ready : ls_write ? data_w_not_ready : 1'b0;

wire unused_ok = &{axi_r_resp,axi_b_resp};

endmodule

/*---------------------------------------
Last modify date : 2023/7/2
Fucntion : xbar (device select)
---------------------------------------*/

module ysyx_22051013_xbar(
//master
	//write address channel
	input	wire 	[`ysyx_22051013_ID]	axi_aw_id	,
	input	wire	[`ysyx_22051013_ADDR]	axi_aw_addr	,	
	input	wire				axi_aw_valid	,
	output	wire				axi_aw_ready	,
	input	wire	[7:0]			axi_aw_len	,
	input	wire	[2:0]			axi_aw_size	,
	input	wire	[1:0]			axi_aw_burst	,
	
	//write data channel
	input	wire	[`ysyx_22051013_DATA]	axi_w_data	,
	input	wire	[`ysyx_22051013_STRB]	axi_w_strb	,
	input	wire				axi_w_last	,
	input	wire				axi_w_valid	,
	output	wire				axi_w_ready	,
	
	//write respond channel
	output	wire	[`ysyx_22051013_ID]	axi_b_id	,
	output	wire	[`ysyx_22051013_RESP]	axi_b_resp	,	
	output	wire				axi_b_valid	,
	input	wire				axi_b_ready	,
	
	//read address channel
	input	wire	[`ysyx_22051013_ID]	axi_ar_id	,
	input	wire	[`ysyx_22051013_ADDR]	axi_ar_addr	,
	input	wire	[7:0]			axi_ar_len	,
	input	wire	[2:0]			axi_ar_size	,
	input	wire	[1:0]			axi_ar_burst	,	
	input	wire				axi_ar_valid	,
	output	wire				axi_ar_ready	,
	
	//read data channel
	output	wire	[`ysyx_22051013_ID]	axi_r_id	,
	output	wire	[`ysyx_22051013_DATA]	axi_r_data	,
	output	wire	[`ysyx_22051013_RESP]	axi_r_resp	,
	output	wire				axi_r_last	,
	output	wire				axi_r_valid	,
	input	wire				axi_r_ready	,
//soc
//write address channel
	output	wire 	[`ysyx_22051013_ID]	soc_axi_aw_id	,
	output	wire	[31:0]			soc_axi_aw_addr	,	
	output	wire				soc_axi_aw_valid	,
	input	wire				soc_axi_aw_ready	,
	output	wire	[7:0]			soc_axi_aw_len	,
	output	wire	[2:0]			soc_axi_aw_size	,
	output	wire	[1:0]			soc_axi_aw_burst	,
	
	//write data channel
	output	wire	[`ysyx_22051013_DATA]	soc_axi_w_data	,
	output	wire	[`ysyx_22051013_STRB]	soc_axi_w_strb	,
	output	wire				soc_axi_w_last	,
	output	wire				soc_axi_w_valid	,
	input	wire				soc_axi_w_ready	,
	
	//write respond channel
	input	wire	[`ysyx_22051013_ID]	soc_axi_b_id	,
	input	wire	[`ysyx_22051013_RESP]	soc_axi_b_resp	,	
	input	wire				soc_axi_b_valid	,
	output	wire				soc_axi_b_ready	,
	
	//read address channel
	output	wire	[`ysyx_22051013_ID]	soc_axi_ar_id	,
	output	wire	[31:0]			soc_axi_ar_addr	,
	output	wire	[7:0]			soc_axi_ar_len	,
	output	wire	[2:0]			soc_axi_ar_size	,
	output	wire	[1:0]			soc_axi_ar_burst	,	
	output	wire				soc_axi_ar_valid	,
	input	wire				soc_axi_ar_ready	,
	
	//read data channel
	input	wire	[`ysyx_22051013_ID]	soc_axi_r_id	,
	input	wire	[`ysyx_22051013_DATA]	soc_axi_r_data	,
	input	wire	[`ysyx_22051013_RESP]	soc_axi_r_resp	,
	input	wire				soc_axi_r_last	,
	input	wire				soc_axi_r_valid	,
	output	wire				soc_axi_r_ready	,
//clint
	//write address channel
	output	wire 	[`ysyx_22051013_ID]	t_axi_aw_id	,
	output	wire	[`ysyx_22051013_ADDR]	t_axi_aw_addr	,	
	output	wire				t_axi_aw_valid	,
	input	wire				t_axi_aw_ready	,
	output	wire	[7:0]			t_axi_aw_len	,
	output	wire	[2:0]			t_axi_aw_size	,
	output	wire	[1:0]			t_axi_aw_burst	,
	
	//write data channel
	output	wire	[`ysyx_22051013_DATA]	t_axi_w_data	,
	output	wire	[`ysyx_22051013_STRB]	t_axi_w_strb	,
	output	wire				t_axi_w_last	,
	output	wire				t_axi_w_valid	,
	input	wire				t_axi_w_ready	,
	
	//write respond channel
	input	wire	[`ysyx_22051013_ID]	t_axi_b_id	,
	input	wire	[`ysyx_22051013_RESP]	t_axi_b_resp	,	
	input	wire				t_axi_b_valid	,
	output	wire				t_axi_b_ready	,
	
	//read address channel
	output	wire	[`ysyx_22051013_ID]	t_axi_ar_id	,
	output	wire	[`ysyx_22051013_ADDR]	t_axi_ar_addr	,
	output	wire	[7:0]			t_axi_ar_len	,
	output	wire	[2:0]			t_axi_ar_size	,
	output	wire	[1:0]			t_axi_ar_burst	,	
	output	wire				t_axi_ar_valid	,
	input	wire				t_axi_ar_ready	,
	
	//read data channel
	input	wire	[`ysyx_22051013_ID]	t_axi_r_id	,
	input	wire	[`ysyx_22051013_DATA]	t_axi_r_data	,
	input	wire	[`ysyx_22051013_RESP]	t_axi_r_resp	,
	input	wire				t_axi_r_last	,
	input	wire				t_axi_r_valid	,
	output	wire				t_axi_r_ready	
);

wire clint_read = axi_ar_id == 4'd2;
wire clint_write = axi_aw_id == 4'd2;

wire [63:0] ar_addr;
wire [63:0] aw_addr;

assign t_axi_aw_id =	clint_write ? axi_aw_id 	: 4'd0;
assign t_axi_aw_addr =	clint_write ? axi_aw_addr 	: 64'd0;
assign t_axi_aw_valid =	clint_write ? axi_aw_valid 	: 1'd0;
assign t_axi_aw_len =	clint_write ? axi_aw_len 	: 8'd0;
assign t_axi_aw_size =	clint_write ? axi_aw_size 	: 3'd0;
assign t_axi_aw_burst =	clint_write ? axi_aw_burst 	: 2'd0;
assign t_axi_w_data =	clint_write ? axi_w_data 	: 64'd0;
assign t_axi_w_strb = 	clint_write ? axi_w_strb 	: 8'd0;
assign t_axi_w_last =	clint_write ? axi_w_last 	: 1'd0;
assign t_axi_w_valid =	clint_write ? axi_w_valid 	: 1'd0;
assign t_axi_b_ready = 	clint_write ? axi_b_ready 	: 1'd0;


assign soc_axi_aw_id =		~clint_write ? axi_aw_id 	: 4'd0;
assign aw_addr 		=	~clint_write ? axi_aw_addr 	: 64'd0;
assign soc_axi_aw_valid =	~clint_write ? axi_aw_valid 	: 1'd0;
assign soc_axi_aw_len =		~clint_write ? axi_aw_len 	: 8'd0;
assign soc_axi_aw_size =	~clint_write ? axi_aw_size 	: 3'd0;
assign soc_axi_aw_burst =	~clint_write ? axi_aw_burst 	: 2'd0;
assign soc_axi_w_data =		~clint_write ? axi_w_data 	: 64'd0;
assign soc_axi_w_strb = 	~clint_write ? axi_w_strb 	: 8'd0;
assign soc_axi_w_last =		~clint_write ? axi_w_last 	: 1'd0;
assign soc_axi_w_valid =	~clint_write ? axi_w_valid 	: 1'd0;
assign soc_axi_b_ready = 	~clint_write ? axi_b_ready 	: 1'd0;



assign t_axi_ar_id =	clint_read ? axi_ar_id		: 4'd0;
assign t_axi_ar_addr =	clint_read ? axi_ar_addr	: 64'd0;
assign t_axi_ar_valid =	clint_read ? axi_ar_valid	: 1'd0;
assign t_axi_ar_len =	clint_read ? axi_ar_len		: 8'd0;
assign t_axi_ar_size =	clint_read ? axi_ar_size	: 3'd0;
assign t_axi_ar_burst =	clint_read ? axi_ar_burst	: 2'd0;
assign t_axi_r_ready =	clint_read ? axi_r_ready	: 1'd0;

assign soc_axi_ar_id =		~clint_read ? axi_ar_id		: 4'd0;
assign ar_addr 		=	~clint_read ? axi_ar_addr	: 64'd0;
assign soc_axi_ar_valid =	~clint_read ? axi_ar_valid	: 1'd0;
assign soc_axi_ar_len =		~clint_read ? axi_ar_len	: 8'd0;
assign soc_axi_ar_size =	~clint_read ? axi_ar_size	: 3'd0;
assign soc_axi_ar_burst =	~clint_read ? axi_ar_burst	: 2'd0;
assign soc_axi_r_ready =	~clint_read ? axi_r_ready	: 1'd0;



assign axi_aw_ready =	clint_write ? t_axi_aw_ready 	: soc_axi_aw_ready;
assign axi_w_ready = 	clint_write ? t_axi_w_ready 	: soc_axi_w_ready;
assign axi_b_id =	clint_write ? t_axi_b_id	: soc_axi_b_id;
assign axi_b_resp =	clint_write ? t_axi_b_resp 	: soc_axi_b_resp;
assign axi_b_valid =	clint_write ? t_axi_b_valid	: soc_axi_b_valid;

assign axi_ar_ready =	clint_read ? t_axi_ar_ready	: soc_axi_ar_ready;
assign axi_r_id =	clint_read ? t_axi_r_id		: soc_axi_r_id;
assign axi_r_data =	clint_read ? t_axi_r_data	: soc_axi_r_data;
assign axi_r_last =	clint_read ? t_axi_r_last	: soc_axi_r_last;
assign axi_r_resp =	clint_read ? t_axi_r_resp 	: soc_axi_r_resp;
assign axi_r_valid =	clint_read ? t_axi_r_valid	: soc_axi_r_valid;

//for soc

assign soc_axi_ar_addr = ar_addr[31:0];
assign soc_axi_aw_addr = aw_addr[31:0];

wire unused_ok = &{ar_addr[63:32],aw_addr[63:32]};

endmodule

/*---------------------------------------
Last modify date : 2023/7/2
Fucntion : clint (only time-interrupt)
---------------------------------------*/

module ysyx_22051013_clint(
	input wire				clk	,
	input wire				rst	,
	output wire				time_interrupt	,

	//write address channel
	input	wire 	[`ysyx_22051013_ID]	t_axi_aw_id	,
	input	wire	[`ysyx_22051013_ADDR]	t_axi_aw_addr	,	
	input	wire				t_axi_aw_valid	,
	output	wire				t_axi_aw_ready	,
	input	wire	[7:0]			t_axi_aw_len	,
	input	wire	[2:0]			t_axi_aw_size	,
	input	wire	[1:0]			t_axi_aw_burst	,
	
	//write data channel
	input	wire	[`ysyx_22051013_DATA]	t_axi_w_data	,
	input	wire	[`ysyx_22051013_STRB]	t_axi_w_strb	,
	input	wire				t_axi_w_last	,
	input	wire				t_axi_w_valid	,
	output	wire				t_axi_w_ready	,
	
	//write respond channel
	output	wire	[`ysyx_22051013_ID]	t_axi_b_id	,
	output	wire	[`ysyx_22051013_RESP]	t_axi_b_resp	,	
	output	wire				t_axi_b_valid	,
	input	wire				t_axi_b_ready	,
	
	//read address channel
	input	wire	[`ysyx_22051013_ID]	t_axi_ar_id	,
	input	wire	[`ysyx_22051013_ADDR]	t_axi_ar_addr	,
	input	wire	[7:0]			t_axi_ar_len	,
	input	wire	[2:0]			t_axi_ar_size	,
	input	wire	[1:0]			t_axi_ar_burst	,	
	input	wire				t_axi_ar_valid	,
	output	wire				t_axi_ar_ready	,
	
	//read data channel
	output	wire	[`ysyx_22051013_ID]	t_axi_r_id	,
	output	wire	[`ysyx_22051013_DATA]	t_axi_r_data	,
	output	wire	[`ysyx_22051013_RESP]	t_axi_r_resp	,
	output	wire				t_axi_r_last	,
	output	wire				t_axi_r_valid	,
	input	wire				t_axi_r_ready	
);



reg  [1:0] clint_write_state     ;
 reg  [1:0] clint_write_state_next ;
 
 wire awc_shakehand = t_axi_aw_valid & t_axi_aw_ready;
wire wc_shakehand = t_axi_w_valid & t_axi_w_ready & t_axi_w_last;
wire bc_shakehand = t_axi_b_valid & t_axi_b_ready;
 
  always @(posedge clk) begin
      if(rst == `ysyx_22051013_RSTABLE) begin
          clint_write_state  <= `ysyx_22051013_S_IDLE ;
      end
      else begin
          clint_write_state  <= clint_write_state_next     ;
      end
  end
 
 
 always @(*) begin
	if(rst == `ysyx_22051013_RSTABLE) begin
		clint_write_state_next  = `ysyx_22051013_S_IDLE ;
	end
	else begin
		case (clint_write_state) 
		    	`ysyx_22051013_S_IDLE : begin
		    		if(awc_shakehand & wc_shakehand) begin
		    			clint_write_state_next = `ysyx_22051013_S_WRITE;
		    		end
		    		else begin
		    			clint_write_state_next = `ysyx_22051013_S_IDLE;
		    		end
		    	end
		    	`ysyx_22051013_S_WRITE : begin
		    		if(bc_shakehand) begin
		    			clint_write_state_next = `ysyx_22051013_S_IDLE;
		    		end
		    		else begin
		    			clint_write_state_next = `ysyx_22051013_S_WRITE;
		    		end
		    	end
		    	default : begin clint_write_state_next = `ysyx_22051013_S_IDLE; end
		endcase
	end
 end
 
assign t_axi_aw_ready = t_axi_aw_valid ;
assign t_axi_w_ready = t_axi_aw_valid & t_axi_w_valid;

assign t_axi_b_id = t_axi_aw_id;
assign t_axi_b_valid = (clint_write_state == `ysyx_22051013_S_WRITE) ;
assign t_axi_b_resp = 2'b00;

//read
 wire   arc_shakehand   = t_axi_ar_ready & t_axi_ar_valid;
 wire   rc_shakehand    = t_axi_r_ready & t_axi_r_valid ;
 
 reg  [1:0] clint_read_state     ;
 reg  [1:0] clint_read_state_next ;
 
  always @(posedge clk) begin
      if(rst == `ysyx_22051013_RSTABLE) begin
          clint_read_state  <= `ysyx_22051013_S_IDLE ;
      end
      else begin
          clint_read_state  <= clint_read_state_next     ;
      end
  end
  
 always @(*) begin
	if(rst == `ysyx_22051013_RSTABLE) begin
		clint_read_state_next  = `ysyx_22051013_S_IDLE ;
	end
	else begin
		case (clint_read_state) 
		    	`ysyx_22051013_S_IDLE : begin
		    		if(arc_shakehand) begin
		    			clint_read_state_next = `ysyx_22051013_S_DATA;
		    		end
		    		else begin
		    			clint_read_state_next = `ysyx_22051013_S_IDLE;
		    		end
		    	end
		    	`ysyx_22051013_S_DATA : begin
		    		if(rc_shakehand) begin
		    			clint_read_state_next = `ysyx_22051013_S_IDLE;
		    		end
		    		else begin
		    			clint_read_state_next = `ysyx_22051013_S_DATA;
		    		end
		    	end
		    	default : begin clint_read_state_next = `ysyx_22051013_S_IDLE; end
		endcase
	end
 end

  assign t_axi_ar_ready = (clint_read_state == `ysyx_22051013_S_IDLE);
 assign t_axi_r_valid = (clint_read_state == `ysyx_22051013_S_DATA);
 assign t_axi_r_id = (clint_read_state == `ysyx_22051013_S_DATA) ? t_axi_ar_id : 4'd0;
 assign t_axi_r_resp = 2'b00;
 assign t_axi_r_last = (clint_read_state == `ysyx_22051013_S_DATA);
 assign t_axi_r_data = (clint_read_state == `ysyx_22051013_S_DATA) ? read_csr_data : `ysyx_22051013_ZERO64;

//in clint
wire [63:0] read_csr_data;
reg [63:0] csr_mtime;
reg [63:0] csr_mtimecmp;

wire mtime_read;
wire mtime_write;
wire mtimecmp_read;
wire mtimecmp_write;

wire read_condi = (t_axi_ar_len == 8'd0) & (t_axi_ar_size == 3'b011) & (t_axi_ar_burst == `ysyx_22051013_AXI_BURST_INCR);
wire write_condi = (t_axi_aw_len == 8'd0) & (t_axi_aw_size == 3'b011) & (t_axi_aw_burst == `ysyx_22051013_AXI_BURST_INCR);

assign mtime_read = (t_axi_ar_addr == `ysyx_22051013_MTIME) & read_condi;
assign mtimecmp_read = (t_axi_ar_addr == `ysyx_22051013_MTIMECMP) & read_condi;
assign mtime_write = (t_axi_aw_addr == `ysyx_22051013_MTIME) & awc_shakehand & wc_shakehand & write_condi;
assign mtimecmp_write =(t_axi_aw_addr == `ysyx_22051013_MTIMECMP) & awc_shakehand & wc_shakehand & write_condi;

wire [63:0] wmask;

assign wmask = {{8{t_axi_w_strb[7]}},{8{t_axi_w_strb[6]}},{8{t_axi_w_strb[5]}},{8{t_axi_w_strb[4]}},{8{t_axi_w_strb[3]}},{8{t_axi_w_strb[2]}},{8{t_axi_w_strb[1]}},{8{t_axi_w_strb[0]}}};

wire [63:0] mtime_temp;
wire [63:0] mtimecmp_temp;

assign mtime_temp = mtime_write ? ((wmask & t_axi_w_data) | (~wmask & csr_mtime)) : (csr_mtime + 1);
assign mtimecmp_temp = mtimecmp_write ? ((wmask & t_axi_w_data) | (~wmask & csr_mtimecmp)) : csr_mtimecmp;

  always @(posedge clk) begin
      if(rst == `ysyx_22051013_RSTABLE) begin
          csr_mtime  <= `ysyx_22051013_ZERO64 ;
          csr_mtimecmp  <= `ysyx_22051013_ZERO64 ;
      end
      else begin
          csr_mtime  <= mtime_temp ;
          csr_mtimecmp  <= mtimecmp_temp ;
      end
  end
  
  assign read_csr_data = mtime_read ? csr_mtime : 
			 mtimecmp_read  ? csr_mtimecmp :
			 `ysyx_22051013_ZERO64;
			 
assign time_interrupt = (csr_mtime > csr_mtimecmp);

endmodule

/*---------------------------------------
Last modify date : 2023/7/2
Fucntion : top layer of rvcpu (core)
---------------------------------------*/

module ysyx_22051013_rvcore(
	input	wire					clk		,
	input	wire					rst		,
	
	//ifu
	input	wire					inst_valid	, 
	output  wire					if_core_ready	,
	input	wire	[`ysyx_22051013_INST]		if_inst	,
	input	wire	[`ysyx_22051013_PC]		if_pc	,
	output	wire	[`ysyx_22051013_PC]		if_pc_next	,
	
	//lsu
	output	wire					we,
 	output	wire					re,
 	output	wire					fencei_o,
 	output	wire					id_core_ready,
 	output	wire	[`ysyx_22051013_PC]		data_pc,
 	input	wire	[`ysyx_22051013_DATA]		data_temp,
 	output	wire	[`ysyx_22051013_DATA]		ls_data_o,
 	output 	wire	[2:0]				data_size	,
 	output	wire	[7:0]				wlen,
 	input	wire					data_valid,
	
	//interrupt
	input	wire					time_interrupt		
);

//-------------------------------------------in core------------------------------------//

//bpu
wire				bpu_ifid_jump;
wire	[`ysyx_22051013_PC]    	bpu_if_pc    	;

 
//if_id_reg
 wire	[`ysyx_22051013_INST]  	ifid_if_inst 	   ;
 wire	[`ysyx_22051013_PC]    	ifid_if_pc    	   ;
 wire 	[`ysyx_22051013_INST]  	ifid_id_inst 	   ;
 wire	[`ysyx_22051013_PC]    	ifid_id_pc    	   ;
 
 wire				ifid_id_jump;
//idu
wire	[`ysyx_22051013_REGADDR] id_reg_rs1_addr ;
wire	[`ysyx_22051013_REGADDR] id_reg_rs2_addr ;

wire				id_reg_rs1_ena	;
wire				id_reg_rs2_ena	;
wire	[`ysyx_22051013_PC]	id_if_pc 	   ;
wire				id_if_pc_sel  ;
wire				id_load_flag;
wire				csr_ena;
wire				ex_csr_ena;
wire				ls_csr_ena;
wire	[4:0]			csr_imm;

//id_ex_reg
wire [`ysyx_22051013_PC]    	idex_id_pc    	 ;   	   
wire [`ysyx_22051013_DATA] 	idex_id_op1 	;
wire [`ysyx_22051013_DATA] 	idex_id_op2 	;	
wire [`ysyx_22051013_IMM]     	idex_id_imm	;
wire                          	idex_id_rd_ena	;
wire [`ysyx_22051013_REGADDR] 	idex_id_rd_addr ;
wire [3:0]      		idex_id_lsctl  	;
wire [1:0]      		idex_id_wbctl   ;
wire [7:0]			idex_id_alu_sel	;
wire	[1:0]			idex_id_op1sel	;
wire	[2:0]			idex_id_op2sel	;
 
wire [`ysyx_22051013_PC]    	idex_ex_pc    	 ;
wire [`ysyx_22051013_DATA] 	idex_ex_op1 	;
wire [`ysyx_22051013_DATA] 	idex_ex_op2 	;	
wire [`ysyx_22051013_IMM]     	idex_ex_imm	;
wire                          	idex_ex_rd_ena	;
wire [`ysyx_22051013_REGADDR] 	idex_ex_rd_addr ;
wire [3:0]      		idex_ex_lsctl  	;
wire [1:0]      		idex_ex_wbctl   ;
wire [7:0]			idex_ex_alu_sel	;
wire	[1:0]			idex_ex_op1sel	;
wire	[2:0]			idex_ex_op2sel	;
wire [`ysyx_22051013_REGADDR]   idex_ex_rs1_addr  ;
wire                          	idex_ex_csr_ena	;

//exu

wire [`ysyx_22051013_REGADDR] 	ex_id_addr_forward;
wire [`ysyx_22051013_DATA] 	ex_id_data_forward;
wire				ex_load_ena;
wire	[6:0]			exls_ex_csr_ctl;
wire	[11:0]			exls_ex_csr_addr;
wire				exls_ex_fencei;

wire  [`ysyx_22051013_REG]      exls_ex_aludata    ;
wire [`ysyx_22051013_DATA] 	exls_ex_store_data  ;

wire				exls_ls_fencei;
wire [`ysyx_22051013_PC]    	exls_ls_pc    	   ; 
wire  [`ysyx_22051013_REG]      exls_ls_aludata    ;
wire [`ysyx_22051013_DATA] 	exls_ls_store_data  ;
wire                          	exls_ls_rd_ena	;
wire [`ysyx_22051013_REGADDR] 	exls_ls_rd_addr ;
wire [3:0]      		exls_ls_lsctl  	;
wire [1:0]      		exls_ls_wbctl   ;
wire	[6:0]			exls_ls_csr_ctl;
wire	[11:0]			exls_ls_csr_addr;

//lsu

wire [`ysyx_22051013_DATA] 	ls_lswb_data_forward;
wire [`ysyx_22051013_REGADDR] 	ls_id_addr_forward;
wire [`ysyx_22051013_DATA] 	ls_id_data_forward;
wire				ls_if_pc_sel	;
wire	[`ysyx_22051013_PC] 	ls_if_pc	;
wire				ls_flush	;


//is_wb_reg

wire [`ysyx_22051013_DATA]      lswb_ls_wbdata        ;


wire	[6:0]			lswb_wb_csr_ctl;
wire	[11:0]			lswb_wb_csr_addr;
wire [`ysyx_22051013_PC]    	lswb_wb_pc    	   ; 
wire [1:0]      		lswb_wb_wbctl  	;
wire [`ysyx_22051013_DATA]      lswb_wb_wbdata        ;
wire  [`ysyx_22051013_REG]      lswb_wb_aludata    ;
wire                          	lswb_wb_rd_ena	;
wire [`ysyx_22051013_REGADDR] 	lswb_wb_rd_addr ;

//wbu
wire [`ysyx_22051013_DATA]	   wb_reg_rd_data     ;
wire                          	wb_reg_rd_ena	;
wire [`ysyx_22051013_REGADDR] 	wb_reg_rd_addr ;

wire [`ysyx_22051013_REGADDR] 	wb_id_addr_forward;
wire [`ysyx_22051013_DATA] 	wb_id_data_forward;

wire				ie_if_pc_sel	;
wire	[`ysyx_22051013_PC] 	ie_if_pc	;
wire				ie_flush	;

// regfile
wire [`ysyx_22051013_REG] reg_id_rs1_data ;
wire [`ysyx_22051013_REG] reg_id_rs2_data ;

//ctl
wire if_valid;
wire id_valid;
wire ex_valid;
wire ls_valid;

wire wb_ready;
wire ls_ready;
wire ex_ready;
wire id_ready;

wire id_idex_flush;
wire id_ifid_flush;


//--------------------------------------in core ---------------------------------//

ysyx_22051013_bpu_static bpu_static(
		.clk(clk),
		.rst(rst)	,
		.inst(ifid_if_inst)	,
		.pc_i(ifid_if_pc)	,
		.pc_o(bpu_if_pc)	,
		.bpu_jump(bpu_ifid_jump)
);



ysyx_22051013_ifu ifu0(
		
		.id_pc_jump(id_if_pc_sel)  ,
 		.id_pc_i(id_if_pc)	,
 		.ie_pc_jump(ie_if_pc_sel)  ,
 		.ie_pc_i(ie_if_pc)	,
 		.ls_pc_jump(ls_if_pc_sel)  ,
 		.ls_pc_i(ls_if_pc)	,
 		.bpu_pc_i(bpu_if_pc)	,
 		.inst_valid(inst_valid),
 		.id_ready(id_ready)	,
 		.if_valid(if_valid)	,
 		.core_ready(if_core_ready),
 		.id_stall(id_idex_flush),
 		.inst_i(if_inst)	,
 		.inst_o(ifid_if_inst)	,
 		.pc_i(if_pc)	,
 		.pc_o(ifid_if_pc)	,		
		.pc_next(if_pc_next)
);

ysyx_22051013_reg_ifid reg_ifid1(
		.clk(clk)	,
		.rst(rst)	,
		.if_inst(ifid_if_inst),
		.if_pc(ifid_if_pc)	,
		.bpu_jump(bpu_ifid_jump),
		
		.if_valid(if_valid),
		.ls_flush(ls_flush),
		.id_flush(id_ifid_flush),
		.ie_flush(ie_flush),
		.id_stall(id_idex_flush),
		.id_ready(id_ready),

		.id_jump(ifid_id_jump),		
		.id_inst(ifid_id_inst)	,
		.id_pc(ifid_id_pc)	
);

ysyx_22051013_idu idu2(
	.rst(rst)	,
	.inst_i(ifid_id_inst)	,
	.pc_i(ifid_id_pc)	,
 	.pc_o(idex_id_pc)	,
 	
 	.bpu_jump(ifid_id_jump),
 	
	.rs1_addr(id_reg_rs1_addr)	,
	.rs2_addr(id_reg_rs2_addr)	,
	.rs1_ena(id_reg_rs1_ena)	,
	.rs2_ena(id_reg_rs2_ena)	,
	.rs1_data(reg_id_rs1_data)	,
	.rs2_data(reg_id_rs2_data)	,
	.rd_ena(idex_id_rd_ena)		,
	.rd_addr(idex_id_rd_addr)	,
	
	//forward
	.ex_addr_forward(ex_id_addr_forward),
	.ls_addr_forward(ls_id_addr_forward),
	.wb_addr_forward(wb_id_addr_forward),
	.ex_data_forward(ex_id_data_forward),
	.ls_data_forward(ls_id_data_forward),
	.wb_data_forward(wb_id_data_forward),
	.ex_load_ena(ex_load_ena)	,
	.ex_csr_ena(ex_csr_ena)		,
	.ls_csr_ena(ls_csr_ena)		,
	
	.alusrc_o(idex_id_alu_sel)	,
	.lsctl_o(idex_id_lsctl)		,
 	.wbctl_o(idex_id_wbctl)		,
 	.op1_sel(idex_id_op1sel)	,
 	.op2_sel(idex_id_op2sel)	,
 	.load_flag(id_load_flag)	,
 	.csr_ena(csr_ena)		,
 	
 	.if_valid(if_valid),
 	.id_valid(id_valid),
	.id_flush(id_ifid_flush),
	.id_ex_flush(id_idex_flush),
	.ex_ready(ex_ready),
	.id_ready(id_ready),
 	
	.jump_pc(id_if_pc)		,
	.jump_ena(id_if_pc_sel)	,
	.imm(idex_id_imm)		,
	.csr_imm(csr_imm)	,
	.op1(idex_id_op1)		,
	.op2(idex_id_op2)
);

ysyx_22051013_reg_idex reg_idex3(
	.clk(clk)	,
	.rst(rst)	,
	.id_pc(idex_id_pc)	,
	.id_op1(idex_id_op1)	,
	.id_op2(idex_id_op2)	,
	.id_op1_sel(idex_id_op1sel)	,
	.id_op2_sel(idex_id_op2sel)	,
	.id_imm(idex_id_imm)	,
	.id_rd_ena(idex_id_rd_ena),
	.id_rd_addr(idex_id_rd_addr),
	.id_rs1_addr(csr_imm),
	.id_alusrc(idex_id_alu_sel),
	.id_lsctl(idex_id_lsctl),
	.id_wbctl(idex_id_wbctl),
	.id_load_flag(id_load_flag),
	.id_csr_ena(csr_ena),
	
	.id_valid(id_valid),
	.id_flush(id_idex_flush),
	.ie_flush(ie_flush),
	.ls_flush(ls_flush),
	.ex_ready(ex_ready),

	.ex_csr_ena(idex_ex_csr_ena),
	.ex_pc(idex_ex_pc)	,
	.ex_op1(idex_ex_op1)	,
	.ex_op2(idex_ex_op2)	,
	.ex_imm(idex_ex_imm)	,
	.ex_rd_ena(idex_ex_rd_ena),
	.ex_rd_addr(idex_ex_rd_addr),
	.ex_op1_sel(idex_ex_op1sel)	,
	.ex_op2_sel(idex_ex_op2sel)	,
	.ex_alusrc(idex_ex_alu_sel),
	.ex_rs1_addr(idex_ex_rs1_addr),
	.ex_lsctl(idex_ex_lsctl),
	.ex_load_flag(ex_load_ena),
	.ex_wbctl(idex_ex_wbctl)
);


ysyx_22051013_exu exu4(
	.clk(clk)	,
	.rst(rst)	,
	.reg_op1(idex_ex_op1)	,
	.reg_op2(idex_ex_op2)	,
	.op1_sel(idex_ex_op1sel)	,
	.op2_sel(idex_ex_op2sel)	,
	.rd_addr(idex_ex_rd_addr)	,
	.rs1_addr(idex_ex_rs1_addr)	,
	.pc_i(idex_ex_pc)	,
	.imm(idex_ex_imm)	,
	.alu_sel(idex_ex_alu_sel)	,
	.fencei(exls_ex_fencei),
	
	.id_valid(id_valid),
	.ex_valid(ex_valid),
	.ex_ready(ex_ready),
	.ls_ready(ls_ready),
	
	.exu_res(exls_ex_aludata)	,
	.csr_addr(exls_ex_csr_addr)	,
	.csr_ctl(exls_ex_csr_ctl)	,	
	.store_data(exls_ex_store_data) 
	
);

ysyx_22051013_reg_exls reg_exls5(
	.clk(clk)	,
	.rst(rst)	,
	.ex_pc(idex_ex_pc)	,
	.ex_store_data(exls_ex_store_data),
	.ex_exu_res(exls_ex_aludata),
	.ex_rd_ena(idex_ex_rd_ena),
	.ex_rd_addr(idex_ex_rd_addr),
	.ex_lsctl(idex_ex_lsctl),
	.ex_wbctl(idex_ex_wbctl),
	.ex_csr_addr(exls_ex_csr_addr),
	.ex_csr_ctl(exls_ex_csr_ctl),
	.ex_fencei(exls_ex_fencei),
	.ex_csr_ena(idex_ex_csr_ena),
	
	.ex_rd_addr_forward(ex_id_addr_forward),
	.ex_rd_data_forward(ex_id_data_forward),
	.ex_csr(ex_csr_ena),
	
	.ex_valid(ex_valid),
	.ls_ready(ls_ready),
	.ie_flush(ie_flush),
	.ls_flush(ls_flush),

	.ls_csr_ena(ls_csr_ena),
	.ls_fencei(exls_ls_fencei),	
	.ls_csr_addr(exls_ls_csr_addr),
	.ls_csr_ctl(exls_ls_csr_ctl),
	.ls_pc(exls_ls_pc),
	.ls_store_data(exls_ls_store_data),
	.ls_exu_res(exls_ls_aludata),
	.ls_rd_ena(exls_ls_rd_ena),
	.ls_rd_addr(exls_ls_rd_addr),
	.ls_lsctl(exls_ls_lsctl),
	.ls_wbctl(exls_ls_wbctl)
);

ysyx_22051013_lsu lsu6(
 	.rst(rst)		,
 	.clk(clk)		,
 	.alu_res(exls_ls_aludata)	,
 	.store_data(exls_ls_store_data)	,
 	.ls_ctl	(exls_ls_lsctl) 	,
 	.fencei(exls_ls_fencei),
 	.except_ena(ie_flush),
 	
 	.ex_valid(ex_valid),
 	.ls_valid(ls_valid),
	.ls_ready(ls_ready),
	.wb_ready(wb_ready),
	.ls_jump(ls_if_pc_sel),
	.ls_jump_pc(ls_if_pc),
	.ls_flush(ls_flush),
	
	//axi
	.data_pc(data_pc)	,
	.data_o(ls_data_o)	,
	.data_temp(data_temp)	,
	.data_valid(data_valid)	,
	.core_ready(id_core_ready),
	.we(we),
	.re(re),
	.fencei_o(fencei_o),
	.data_size(data_size),
	.wlen(wlen),
 	
 	.ls_data_forward(ls_lswb_data_forward),
 	.ls_data_o(lswb_ls_wbdata)	
 );
 
 ysyx_22051013_reg_lswb reg_lswb7(
	.clk(clk)	,
	.rst(rst)	,
	.ls_pc(exls_ls_pc)	,
	.ls_rd_ena(exls_ls_rd_ena),
	.ls_rd_addr(exls_ls_rd_addr),
	.ls_wbctl(exls_ls_wbctl),
	.ls_exu_res(exls_ls_aludata),
	.ls_wbdata(lswb_ls_wbdata),
	.ls_data_forward(ls_lswb_data_forward),
	.ls_csr_addr(exls_ls_csr_addr),
	.ls_csr_ctl(exls_ls_csr_ctl),
	
	
	.ls_rd_addr_forward(ls_id_addr_forward),
	.ls_rd_data_forward(ls_id_data_forward),
	
	.wb_ready(wb_ready),
	.ls_valid(ls_valid),
	.ie_flush(ie_flush),
	
	.wb_csr_addr(lswb_wb_csr_addr),
	.wb_csr_ctl(lswb_wb_csr_ctl),
	.wb_pc(lswb_wb_pc)	,
	.wb_rd_ena(lswb_wb_rd_ena),
	.wb_rd_addr(lswb_wb_rd_addr),
	.wb_wbctl(lswb_wb_wbctl),
	.wb_exu_res(lswb_wb_aludata),
	.wb_wbdata(lswb_wb_wbdata)
);
	
	

ysyx_22051013_wbu wbu8(
	.clk(clk)	,
 	.rst(rst),
 	.pc_i(lswb_wb_pc)	,
 	
 	.rd_ena(lswb_wb_rd_ena),
 	.rd_addr(lswb_wb_rd_addr),
	.wb_rd_addr_forward(wb_id_addr_forward),
	.wb_rd_data_forward(wb_id_data_forward), 	
 	.wb_rd_ena(wb_reg_rd_ena),
 	.wb_rd_addr(wb_reg_rd_addr),
 	.ls_pc_i(exls_ls_pc),
 	
	.wb_ready(wb_ready),
	.ls_valid(ls_valid), 	
	.time_interrupt(time_interrupt),
	
	.csr_ctl(lswb_wb_csr_ctl),
	.csr_addr(lswb_wb_csr_addr),
	
	.ie_jump(ie_if_pc_sel),
	.ie_jump_pc(ie_if_pc),
	.ie_flush(ie_flush),
 	
 	.ls_rd_data(lswb_wb_wbdata)	,
 	.wb_ctl(lswb_wb_wbctl)	,
 	.exu_res(lswb_wb_aludata)	,
 	.wb_data(wb_reg_rd_data )	
);

ysyx_22051013_regfile reg9(
	.clk(clk)	,
	.rst(rst)	,
	.waddr(wb_reg_rd_addr)	,
	.wdata(wb_reg_rd_data)	,
	.raddr1(id_reg_rs1_addr)	,
	.raddr2(id_reg_rs2_addr)	,
	.rdata1(reg_id_rs1_data)	,
	.rdata2(reg_id_rs2_data)	,
	.wen(wb_reg_rd_ena)	,
	.ren1(id_reg_rs1_ena)	,
	.ren2(id_reg_rs2_ena)	
);
endmodule

/*---------------------------------------
Last modify date : 2023/7/2
Fucntion : top layer of SOC
---------------------------------------*/

module ysyx_22051013(
	input				clock		,
	input				reset		,

	input				io_interrupt	,

	output	[3:0]			io_master_awid		,
	output	[31:0]			io_master_awaddr	,
	output	[7:0]			io_master_awlen		,
	output	[2:0]			io_master_awsize	,
	output	[1:0]			io_master_awburst	,
	output				io_master_awvalid	,
	input				io_master_awready	,

	output	[63:0]			io_master_wdata       ,
	output	[7:0]			io_master_wstrb       ,
	output				io_master_wlast       ,
	output				io_master_wvalid      ,
	input				io_master_wready      ,

	input	[3:0]			io_master_bid         ,
	input	[1:0]			io_master_bresp       ,
	input				io_master_bvalid      ,
	output				io_master_bready      ,

	output	[3:0]			io_master_arid        ,
	output	[31:0]			io_master_araddr      ,
	output	[7:0]			io_master_arlen       ,
	output	[2:0]			io_master_arsize      ,
	output	[1:0]			io_master_arburst     ,
	output				io_master_arvalid     ,
	input				io_master_arready     ,

	input	[3:0]			io_master_rid         ,
 	input	[63:0]			io_master_rdata       ,
	input	[1:0]			io_master_rresp       ,
	input				io_master_rlast       ,
	input				io_master_rvalid      ,
	output				io_master_rready      ,

	output				io_slave_awready      ,
	input				io_slave_awvalid      ,
	input	[3:0]			io_slave_awid         ,
	input	[31:0]			io_slave_awaddr       ,
	input	[7:0]			io_slave_awlen        ,
	input	[2:0]			io_slave_awsize       ,
	input	[1:0]			io_slave_awburst      ,
	output				io_slave_wready       ,
	input				io_slave_wvalid       ,
	input	[63:0]			io_slave_wdata        ,
	input	[7:0]			io_slave_wstrb        ,
	input				io_slave_wlast        ,
	input				io_slave_bready       ,
	output				io_slave_bvalid       , 
	output	[3:0]			io_slave_bid          ,
	output	[1:0]			io_slave_bresp        ,
	output				io_slave_arready      ,
	input				io_slave_arvalid      ,
	input	[3:0]			io_slave_arid         ,
 	input	[31:0]			io_slave_araddr       ,
	input	[7:0]			io_slave_arlen        ,
 	input	[2:0]			io_slave_arsize       ,
 	input	[1:0]			io_slave_arburst      ,
	input				io_slave_rready       ,
	output				io_slave_rvalid       ,
	output	[3:0]			io_slave_rid          ,
	output	[63:0]			io_slave_rdata        ,
	output	[1:0]			io_slave_rresp        ,
	output				io_slave_rlast        ,

	output	[5:0]			io_sram0_addr         ,
	output				io_sram0_cen          ,
	output				io_sram0_wen          ,
	output	[127:0]			io_sram0_wmask        ,
	output	[127:0]			io_sram0_wdata        ,
	input	[127:0]			io_sram0_rdata        ,
	output	[5:0]			io_sram1_addr         ,
	output				io_sram1_cen          ,
	output				io_sram1_wen          ,
	output	[127:0]			io_sram1_wmask        , 
	output	[127:0]			io_sram1_wdata        ,
	input	[127:0]			io_sram1_rdata        ,
	output	[5:0]			io_sram2_addr         ,
	output 				io_sram2_cen          ,
 	output				io_sram2_wen          ,
	output	[127:0]			io_sram2_wmask        ,
 	output	[127:0]			io_sram2_wdata        ,
	input	[127:0]			io_sram2_rdata        ,
	output 	[5:0]			io_sram3_addr         ,
	output				io_sram3_cen          ,
	output				io_sram3_wen          ,
	output	[127:0]			io_sram3_wmask        ,
	output	[127:0]			io_sram3_wdata        ,
	input 	[127:0]			io_sram3_rdata        ,
	output	[5:0]			io_sram4_addr         ,
	output				io_sram4_cen          ,
	output				io_sram4_wen          ,
	output	[127:0]			io_sram4_wmask        ,
	output	[127:0]			io_sram4_wdata        ,
	input	[127:0]			io_sram4_rdata        ,
	output	[5:0]			io_sram5_addr         ,
	output				io_sram5_cen          ,
	output				io_sram5_wen          ,
	output	[127:0]			io_sram5_wmask        ,
	output	[127:0]			io_sram5_wdata        ,
	input	[127:0]			io_sram5_rdata        ,
	output	[5:0]			io_sram6_addr         ,
	output				io_sram6_cen          ,
	output				io_sram6_wen          ,
	output	[127:0]			io_sram6_wmask        ,
	output	[127:0]			io_sram6_wdata        ,
	input	[127:0]			io_sram6_rdata        ,
	output	[5:0]			io_sram7_addr         ,
	output				io_sram7_cen          ,
	output				io_sram7_wen          ,
	output	[127:0]			io_sram7_wmask        ,
	output	[127:0]			io_sram7_wdata        ,
	input	[127:0]			io_sram7_rdata        
);
	
	
	
//----------------------------------------------zero-signal--------------------------------------//
    assign io_sram2_addr    = 6'b000000  ;
    assign io_sram2_cen     = 1'b1       ;
    assign io_sram2_wen     = 1'b1       ;
    assign io_sram2_wmask   = 128'h0     ;
    assign io_sram2_wdata   = 128'h0     ;

    assign io_sram3_addr    = 6'b000000  ;
    assign io_sram3_cen     = 1'b1       ;
    assign io_sram3_wen     = 1'b1       ;
    assign io_sram3_wmask   = 128'h0     ;
    assign io_sram3_wdata   = 128'h0     ;

    assign io_sram4_addr    = 6'b000000  ;
    assign io_sram4_cen     = 1'b1       ;
    assign io_sram4_wen     = 1'b1       ;
    assign io_sram4_wmask   = 128'h0     ;
    assign io_sram4_wdata   = 128'h0     ;

    assign io_sram5_addr    = 6'b000000  ;
    assign io_sram5_cen     = 1'b1       ;
    assign io_sram5_wen     = 1'b1       ;
    assign io_sram5_wmask   = 128'h0     ;
    assign io_sram5_wdata   = 128'h0     ;

    assign io_sram6_addr    = 6'b000000  ;
    assign io_sram6_cen     = 1'b1       ;
    assign io_sram6_wen     = 1'b1       ;
    assign io_sram6_wmask   = 128'h0     ;
    assign io_sram6_wdata   = 128'h0     ;

    assign io_sram7_addr    = 6'b000000  ;
    assign io_sram7_cen     = 1'b1       ;
    assign io_sram7_wen     = 1'b1       ;
    assign io_sram7_wmask   = 128'h0     ;
    assign io_sram7_wdata   = 128'h0     ;
    
    
    
    assign io_slave_awready = 1'b0 ;
    assign io_slave_wready  = 1'b0 ;
    assign io_slave_bvalid  = 1'b0 ;
    assign io_slave_bid     = 4'b0000;
    assign io_slave_bresp   = 2'b00 ;
    assign io_slave_arready = 1'b0 ;
    assign io_slave_rvalid  = 1'b0 ;
    assign io_slave_rid     = 4'b0000;
    assign io_slave_rdata   = 64'h0 ;
    assign io_slave_rresp   = 2'b00 ;
    assign io_slave_rlast   = 1'b0  ;





//ifu axi_lite


//master
wire	[`ysyx_22051013_ID]	axi_aw_id	;
wire	[`ysyx_22051013_ADDR]	axi_aw_addr	;
wire				axi_aw_valid	;
wire				axi_aw_ready	;
wire	[7:0]			axi_aw_len	;
wire	[2:0]			axi_aw_size	;
wire	[1:0]			axi_aw_burst	;

wire	[`ysyx_22051013_DATA]	axi_w_data	;
wire	[`ysyx_22051013_STRB]	axi_w_strb	;
wire				axi_w_last	;
wire				axi_w_valid	;
wire				axi_w_ready	;

wire	[`ysyx_22051013_ID]	axi_b_id	;
wire	[`ysyx_22051013_RESP]	axi_b_resp	;
wire				axi_b_valid	;
wire				axi_b_ready	;

wire	[`ysyx_22051013_ID]	axi_ar_id	;
wire	[`ysyx_22051013_ADDR]	axi_ar_addr	;	
wire				axi_ar_valid	;
wire				axi_ar_ready	;
wire	[7:0]			axi_ar_len	;
wire	[2:0]			axi_ar_size	;
wire	[1:0]			axi_ar_burst	;

wire	[`ysyx_22051013_ID]	axi_r_id	;
wire	[`ysyx_22051013_DATA]	axi_r_data	;
wire	[`ysyx_22051013_RESP]	axi_r_resp	;
wire				axi_r_last	;
wire				axi_r_valid	;
wire				axi_r_ready	;

//clint
wire	[`ysyx_22051013_ID]	t_axi_aw_id	;
wire	[`ysyx_22051013_ADDR]	t_axi_aw_addr	;
wire				t_axi_aw_valid	;
wire				t_axi_aw_ready	;
wire	[7:0]			t_axi_aw_len	;
wire	[2:0]			t_axi_aw_size	;
wire	[1:0]			t_axi_aw_burst	;

wire	[`ysyx_22051013_DATA]	t_axi_w_data	;
wire	[`ysyx_22051013_STRB]	t_axi_w_strb	;
wire				t_axi_w_last	;
wire				t_axi_w_valid	;
wire				t_axi_w_ready	;

wire	[`ysyx_22051013_ID]	t_axi_b_id	;
wire	[`ysyx_22051013_RESP]	t_axi_b_resp	;
wire				t_axi_b_valid	;
wire				t_axi_b_ready	;

wire	[`ysyx_22051013_ID]	t_axi_ar_id	;
wire	[`ysyx_22051013_ADDR]	t_axi_ar_addr	;	
wire				t_axi_ar_valid	;
wire				t_axi_ar_ready	;
wire	[7:0]			t_axi_ar_len	;
wire	[2:0]			t_axi_ar_size	;
wire	[1:0]			t_axi_ar_burst	;

wire	[`ysyx_22051013_ID]	t_axi_r_id	;
wire	[`ysyx_22051013_DATA]	t_axi_r_data	;
wire	[`ysyx_22051013_RESP]	t_axi_r_resp	;
wire				t_axi_r_last	;
wire				t_axi_r_valid	;
wire				t_axi_r_ready	;

//icache

wire	[`ysyx_22051013_PC]	core_idsel_inst_pc;
wire				core_idsel_core_ready;
wire				idsel_core_inst_valid;
wire	[`ysyx_22051013_INST]	idsel_core_inst;
wire	[`ysyx_22051013_PC]    	idsel_core_pc;
		
wire				idsel_axi_re;
wire	[`ysyx_22051013_DATA]	axi_idsel_inst_i;
wire	[2:0]    		idsel_axi_inst_size;
wire	[`ysyx_22051013_PC]	idsel_axi_pc;
wire				axi_idsel_valid;
wire				icache_idsel_axi_re;
wire	[`ysyx_22051013_PC]	icache_idsel_axi_pc;
		
wire				idsel_icache_ena;
wire				idsel_icache_fencei;
wire	[`ysyx_22051013_INST]	icache_idsel_inst;
wire	[`ysyx_22051013_PC]	icache_core_pc;
wire	[`ysyx_22051013_PC]	idsel_icache_pc;
wire				icache_idsel_valid;
wire				idsel_icache_ready;

wire	[`ysyx_22051013_DATA]	axi_idsel_icache_inst;
wire				axi_idsel_icache_valid;

//dcache
wire				core_ddsel_we	;
wire				core_ddsel_re	;
wire	[7:0]			core_ddsel_wlen	;
wire	[`ysyx_22051013_PC]	core_ddsel_data_pc	;
wire	[`ysyx_22051013_DATA]	ddsel_core_data_temp;
wire	[`ysyx_22051013_DATA]	core_ddsel_ls_data;
wire				core_ddsel_core_ready;
wire				ddsel_core_data_valid;
wire				core_ddsel_fencei;

wire	[2:0]			core_ddsel_data_size;

wire 				ddsel_axi_clint;
wire 				ddsel_axi_re;
wire 				ddsel_axi_we;

wire	[7:0]			ddsel_axi_mask;
wire	[`ysyx_22051013_DATA]	ddsel_axi_data_o;
wire	[`ysyx_22051013_DATA]	axi_ddsel_data_i;
wire	[`ysyx_22051013_PC]	ddsel_axi_pc;
wire 				axi_ddsel_valid;
wire	[2:0]			ddsel_axi_data_size;

wire				ddsel_dcache_fencei;		
wire 				ddsel_dcache_re;
wire 				ddsel_dcache_we;
wire	[7:0]			ddsel_dcache_mask;
wire	[`ysyx_22051013_DATA]	ddsel_dcache_data;
wire	[`ysyx_22051013_DATA]	dcache_ddsel_data;
wire	[`ysyx_22051013_PC]	ddsel_dcache_pc;
wire 				dcache_ddsel_valid;
wire 				ddsel_dcache_ready;
		
wire 				dcache_ddsel_axi_re;
wire 				dcache_ddsel_axi_we;
wire	[`ysyx_22051013_DATA]	axi_ddsel_dcache_data;
wire	[`ysyx_22051013_DATA]	dcache_ddsel_axi_data;
wire	[`ysyx_22051013_PC]	dcache_ddsel_axi_pc;
wire 				axi_ddsel_dcache_valid;
wire	time_interrupt;


ysyx_22051013_rvcore rvcore0(
		.clk(clock),
		.rst(reset),
		
		//ifu
		.if_pc(idsel_core_pc)	,
		.if_pc_next(core_idsel_inst_pc),
		.if_inst(idsel_core_inst),
		.if_core_ready(core_idsel_core_ready)	,
		.inst_valid(idsel_core_inst_valid)	,
		
		//lsu
		.we(core_ddsel_we),
		.re(core_ddsel_re),
		.fencei_o(core_ddsel_fencei),
		.id_core_ready(core_ddsel_core_ready),
		.data_pc(core_ddsel_data_pc),
		.data_temp(ddsel_core_data_temp),
		.ls_data_o(core_ddsel_ls_data),
		.data_size(core_ddsel_data_size),
		.wlen(core_ddsel_wlen),
		.data_valid(ddsel_core_data_valid),
		
		//interupt
		.time_interrupt(time_interrupt)
);

//ifu axi_lite
ysyx_22051013_axi_master_arbitrator axi_master_arbitrator1(
		.clk(clock),
		.rst(reset),
		.icache_pc(idsel_axi_pc)	,
		.icache_ena(idsel_axi_re)	,
		.inst_size(idsel_axi_inst_size)	,
		.axi_inst(axi_idsel_inst_i)	,
		.axi_inst_valid(axi_idsel_valid)	,
		
		.data_pc(ddsel_axi_pc)	,
		.data_o(axi_ddsel_data_i)	,
		.data_i(ddsel_axi_data_o)	,
		.axi_data_valid(axi_ddsel_valid)	,
		.we(ddsel_axi_we),
		.re(ddsel_axi_re),
		.clint_ena(ddsel_axi_clint)	,
		.wmask(ddsel_axi_mask),
		.data_size(ddsel_axi_data_size),
		
		.axi_aw_id(axi_aw_id)		,
		.axi_aw_addr(axi_aw_addr)	,
		.axi_aw_valid(axi_aw_valid)	,
		.axi_aw_ready(axi_aw_ready)	,
		.axi_aw_len(axi_aw_len)	,
		.axi_aw_size(axi_aw_size)	,
		.axi_aw_burst(axi_aw_burst)	,
		
		.axi_w_data(axi_w_data)		,
		.axi_w_strb(axi_w_strb)		,
		.axi_w_valid(axi_w_valid)	,
		.axi_w_last(axi_w_last)		,
		.axi_w_ready(axi_w_ready)	,
		
		.axi_b_id(axi_b_id)		,
		.axi_b_resp(axi_b_resp)		,
		.axi_b_valid(axi_b_valid)	,
		.axi_b_ready(axi_b_ready)	,
		
		.axi_ar_id(axi_ar_id)		,
		.axi_ar_addr(axi_ar_addr)	,
		.axi_ar_valid(axi_ar_valid)	,
		.axi_ar_ready(axi_ar_ready)	,
		.axi_ar_len(axi_ar_len)	,
		.axi_ar_size(axi_ar_size)	,
		.axi_ar_burst(axi_ar_burst)	,
		
		.axi_r_id(axi_r_id)		,
		.axi_r_data(axi_r_data)		,
		.axi_r_last(axi_r_last)		,
		.axi_r_resp(axi_r_resp)		,
		.axi_r_valid(axi_r_valid)	,
		.axi_r_ready(axi_r_ready)
);

ysyx_22051013_icache_device_sel icache_device_sel2(
		.clk(clock),
		.rst(reset),
		.core_addr(core_idsel_inst_pc),
		.core_ready(core_idsel_core_ready),
		.fencei(core_ddsel_fencei),
		.inst_valid(idsel_core_inst_valid),
		.inst(idsel_core_inst),
		.pc(idsel_core_pc),
		
		.axi_re(idsel_axi_re),
		.axi_inst_i(axi_idsel_inst_i),
		.axi_size(idsel_axi_inst_size),
		.axi_inst_pc(idsel_axi_pc),
		.axi_valid(axi_idsel_valid),
		.icache_axi_re(icache_idsel_axi_re),
		.icache_axi_pc(icache_idsel_axi_pc),
		
		.icache_ena(idsel_icache_ena),
		.icache_fencei(idsel_icache_fencei),
		.icache_inst_i(icache_idsel_inst),
		.icache_pc(icache_core_pc)	,
		.icache_inst_pc(idsel_icache_pc),
		.icache_valid(icache_idsel_valid),
		.icache_ready(idsel_icache_ready),
		
		
		.axi_icache_inst(axi_idsel_icache_inst),
		.axi_icache_valid(axi_idsel_icache_valid)
);

ysyx_22051013_i_cache i_cache3(
		.clk(clock),
		.rst(reset),
		
		.inst_pc(idsel_icache_pc)	,
		.pc_ready(idsel_icache_ready)	,
		.inst(icache_idsel_inst)	,
		.icache_ena(idsel_icache_ena),	
		.icache_valid(idsel_core_inst_valid),
		.pc(icache_core_pc),
		.fencei(idsel_icache_fencei),
		.i_valid(icache_idsel_valid)	,
		
		.cache_data(io_sram0_rdata),
		.ce(io_sram0_cen),
		.ram_i_data(io_sram0_wdata),
		.ram_strb(io_sram0_wmask), 
		.ram_ena(io_sram0_wen),
		.ram_index(io_sram0_addr),
		
		.axi_pc(icache_idsel_axi_pc)	,
		.axi_ena(icache_idsel_axi_re)	,
		.axi_inst(axi_idsel_icache_inst),
		.axi_valid(axi_idsel_icache_valid)
		
);

ysyx_22051013_dcache_device_sel dcache_device_sel4(
		.core_re(core_ddsel_re),
		.core_we(core_ddsel_we),
		.core_mask(core_ddsel_wlen),
		.core_data_i(core_ddsel_ls_data),
		.core_addr(core_ddsel_data_pc),
		.core_ready(core_ddsel_core_ready),
		.core_size(core_ddsel_data_size),
		.fencei(core_ddsel_fencei),
		.data_valid(ddsel_core_data_valid),
		.data_to_core(ddsel_core_data_temp),
		
		.clint_ena(ddsel_axi_clint),
		.axi_re(ddsel_axi_re),
		.axi_we(ddsel_axi_we),
		.axi_mask(ddsel_axi_mask),
		.axi_data_o(ddsel_axi_data_o),
		.axi_data_i(axi_ddsel_data_i),
		.axi_size(ddsel_axi_data_size),
		.axi_data_pc(ddsel_axi_pc),
		.axi_valid(axi_ddsel_valid),
		
		.dcache_re(ddsel_dcache_re),
		.dcache_we(ddsel_dcache_we),
		.dcache_fencei(ddsel_dcache_fencei),
		.dcache_mask(ddsel_dcache_mask),
		.dcache_data_o(ddsel_dcache_data),
		.dcache_data_i(dcache_ddsel_data),
		.dcache_data_pc(ddsel_dcache_pc),
		.dcache_valid(dcache_ddsel_valid),
		.dcache_ready(ddsel_dcache_ready),
		
		.dcache_axi_re(dcache_ddsel_axi_re),
		.dcache_axi_we(dcache_ddsel_axi_we),
		.axi_dcache_data(axi_ddsel_dcache_data),
		.dcache_axi_data(dcache_ddsel_axi_data),
		.dcache_axi_pc(dcache_ddsel_axi_pc),
		.axi_dcache_valid(axi_ddsel_dcache_valid)
);

ysyx_22051013_d_cache d_cache5(
		.clk(clock),
		.rst(reset),
		
		.data_pc(ddsel_dcache_pc)	,
		.data_i(ddsel_dcache_data)	,
		.data_o(dcache_ddsel_data)	,
		.core_ready(ddsel_dcache_ready)	,
		.wmask(ddsel_dcache_mask),
		.we(ddsel_dcache_we),
		.re(ddsel_dcache_re),
		.fencei(ddsel_dcache_fencei),
		.data_valid(dcache_ddsel_valid)	,
		
		.cache_data(io_sram1_rdata),
		.ce(io_sram1_cen),
		.ram_i_data(io_sram1_wdata),
		.ram_strb(io_sram1_wmask), 
		.ram_ena(io_sram1_wen),
		.ram_index(io_sram1_addr),
		
		.axi_pc(dcache_ddsel_axi_pc)	,
		.axi_r_ena(dcache_ddsel_axi_re)	,
		.axi_w_ena(dcache_ddsel_axi_we)	,
		.axi_data_i(axi_ddsel_dcache_data),
		.axi_data_o(dcache_ddsel_axi_data),
		.axi_valid(axi_ddsel_dcache_valid)
		
);

ysyx_22051013_xbar xbar6(
		.axi_aw_id(axi_aw_id)		,
		.axi_aw_addr(axi_aw_addr)	,
		.axi_aw_valid(axi_aw_valid)	,
		.axi_aw_ready(axi_aw_ready)	,
		.axi_aw_len(axi_aw_len)	,
		.axi_aw_size(axi_aw_size)	,
		.axi_aw_burst(axi_aw_burst)	,
		
		.axi_w_data(axi_w_data)		,
		.axi_w_strb(axi_w_strb)		,
		.axi_w_valid(axi_w_valid)	,
		.axi_w_last(axi_w_last)		,
		.axi_w_ready(axi_w_ready)	,
		
		.axi_b_id(axi_b_id)		,
		.axi_b_resp(axi_b_resp)		,
		.axi_b_valid(axi_b_valid)	,
		.axi_b_ready(axi_b_ready)	,
		
		.axi_ar_id(axi_ar_id)		,
		.axi_ar_addr(axi_ar_addr)	,
		.axi_ar_valid(axi_ar_valid)	,
		.axi_ar_ready(axi_ar_ready)	,
		.axi_ar_len(axi_ar_len)	,
		.axi_ar_size(axi_ar_size)	,
		.axi_ar_burst(axi_ar_burst)	,
		
		.axi_r_id(axi_r_id)		,
		.axi_r_data(axi_r_data)		,
		.axi_r_last(axi_r_last)		,
		.axi_r_resp(axi_r_resp)		,
		.axi_r_valid(axi_r_valid)	,
		.axi_r_ready(axi_r_ready)	,
	//soc
		.soc_axi_aw_id(io_master_awid)		,
		.soc_axi_aw_addr(io_master_awaddr)	,
		.soc_axi_aw_valid(io_master_awvalid)	,
		.soc_axi_aw_ready(io_master_awready)	,
		.soc_axi_aw_len(io_master_awlen)	,
		.soc_axi_aw_size(io_master_awsize)	,
		.soc_axi_aw_burst(io_master_awburst)	,
		
		.soc_axi_w_data(io_master_wdata)		,
		.soc_axi_w_strb(io_master_wstrb)		,
		.soc_axi_w_valid(io_master_wvalid)	,
		.soc_axi_w_last(io_master_wlast)		,
		.soc_axi_w_ready(io_master_wready)	,
		
		.soc_axi_b_id(io_master_bid)		,
		.soc_axi_b_resp(io_master_bresp)		,
		.soc_axi_b_valid(io_master_bvalid)	,
		.soc_axi_b_ready(io_master_bready)	,
		
		.soc_axi_ar_id(io_master_arid)		,
		.soc_axi_ar_addr(io_master_araddr)	,
		.soc_axi_ar_valid(io_master_arvalid)	,
		.soc_axi_ar_ready(io_master_arready)	,
		.soc_axi_ar_len(io_master_arlen)	,
		.soc_axi_ar_size(io_master_arsize)	,
		.soc_axi_ar_burst(io_master_arburst)	,
		
		.soc_axi_r_id(io_master_rid)		,
		.soc_axi_r_data(io_master_rdata)		,
		.soc_axi_r_last(io_master_rlast)		,
		.soc_axi_r_resp(io_master_rresp)		,
		.soc_axi_r_valid(io_master_rvalid)	,
		.soc_axi_r_ready(io_master_rready)	,
	//clint	
		.t_axi_aw_id(t_axi_aw_id)		,
		.t_axi_aw_addr(t_axi_aw_addr)	,
		.t_axi_aw_valid(t_axi_aw_valid)	,
		.t_axi_aw_ready(t_axi_aw_ready)	,
		.t_axi_aw_len(t_axi_aw_len)	,
		.t_axi_aw_size(t_axi_aw_size)	,
		.t_axi_aw_burst(t_axi_aw_burst)	,
		
		.t_axi_w_data(t_axi_w_data)		,
		.t_axi_w_strb(t_axi_w_strb)		,
		.t_axi_w_valid(t_axi_w_valid)	,
		.t_axi_w_last(t_axi_w_last)		,
		.t_axi_w_ready(t_axi_w_ready)	,
		
		.t_axi_b_id(t_axi_b_id)		,
		.t_axi_b_resp(t_axi_b_resp)		,
		.t_axi_b_valid(t_axi_b_valid)	,
		.t_axi_b_ready(t_axi_b_ready)	,
		
		.t_axi_ar_id(t_axi_ar_id)		,
		.t_axi_ar_addr(t_axi_ar_addr)	,
		.t_axi_ar_valid(t_axi_ar_valid)	,
		.t_axi_ar_ready(t_axi_ar_ready)	,
		.t_axi_ar_len(t_axi_ar_len)	,
		.t_axi_ar_size(t_axi_ar_size)	,
		.t_axi_ar_burst(t_axi_ar_burst)	,
		
		.t_axi_r_id(t_axi_r_id)		,
		.t_axi_r_data(t_axi_r_data)		,
		.t_axi_r_last(t_axi_r_last)		,
		.t_axi_r_resp(t_axi_r_resp)		,
		.t_axi_r_valid(t_axi_r_valid)	,
		.t_axi_r_ready(t_axi_r_ready)
);		

ysyx_22051013_clint clint7(
	.clk(clock),
	.rst(reset),
	.time_interrupt(time_interrupt),
	
	.t_axi_aw_id(t_axi_aw_id)		,
	.t_axi_aw_addr(t_axi_aw_addr)	,
	.t_axi_aw_valid(t_axi_aw_valid)	,
	.t_axi_aw_ready(t_axi_aw_ready)	,
	.t_axi_aw_len(t_axi_aw_len)	,
	.t_axi_aw_size(t_axi_aw_size)	,
	.t_axi_aw_burst(t_axi_aw_burst)	,
	
	.t_axi_w_data(t_axi_w_data)		,
	.t_axi_w_strb(t_axi_w_strb)		,
	.t_axi_w_valid(t_axi_w_valid)	,
	.t_axi_w_last(t_axi_w_last)		,
	.t_axi_w_ready(t_axi_w_ready)	,
	
	.t_axi_b_id(t_axi_b_id)		,
	.t_axi_b_resp(t_axi_b_resp)		,
	.t_axi_b_valid(t_axi_b_valid)	,
	.t_axi_b_ready(t_axi_b_ready)	,
	
	.t_axi_ar_id(t_axi_ar_id)		,
	.t_axi_ar_addr(t_axi_ar_addr)	,
	.t_axi_ar_valid(t_axi_ar_valid)	,
	.t_axi_ar_ready(t_axi_ar_ready)	,
	.t_axi_ar_len(t_axi_ar_len)	,
	.t_axi_ar_size(t_axi_ar_size)	,
	.t_axi_ar_burst(t_axi_ar_burst)	,
	
	.t_axi_r_id(t_axi_r_id)		,
	.t_axi_r_data(t_axi_r_data)		,
	.t_axi_r_last(t_axi_r_last)		,
	.t_axi_r_resp(t_axi_r_resp)		,
	.t_axi_r_valid(t_axi_r_valid)	,
	.t_axi_r_ready(t_axi_r_ready)
);
      
wire unused_ok = &{io_interrupt,io_slave_awvalid,io_slave_awid,io_slave_awaddr,io_slave_awlen,io_slave_awsize,io_slave_awburst,io_slave_wvalid,
	io_slave_wdata,io_slave_wstrb,io_slave_wlast,io_slave_bready,io_slave_arvalid,io_slave_arid,io_slave_araddr,io_slave_arlen,io_slave_arsize,
	io_slave_arburst,io_slave_rready,io_sram2_rdata,io_sram3_rdata,io_sram4_rdata,io_sram5_rdata,io_sram6_rdata,io_sram7_rdata };
endmodule


/*-------
* Last modify date : 2022/2/16
* Function : load & store data
*/
 
 `include "pip_cpu/define.v"
 /* verilator lint_off DECLFILENAME */
 module ysyx_22051013_lsu(
  	input     wire                    		rst       ,
  	input     wire                    		clk       ,
 	input     wire [`ysyx_22051013_DATA]            alu_res   ,
 	input     wire [`ysyx_22051013_DATA]            store_data ,
 	input     wire [3:0]               		ls_ctl ,
	
	input	  wire					wb_ready,
	input	  wire					ex_valid,
 	output    wire					ls_ready,
 	output	  wire					ls_valid,
 	//output	  wire					ls_flush,
 	
 	//axi
 	output	wire					we,
 	output	wire					re,
 	output	wire					core_ready,
 	output	wire	[`ysyx_22051013_PC]		data_pc,
 	input	wire	[`ysyx_22051013_DATA]		data_temp,
 	output	reg	[`ysyx_22051013_DATA]		data_o,
 	output 	wire	[2:0]				data_size	,
 	output	wire [`ysyx_22051013_DATA]		device_data_o,
 	output	reg [7:0]				wlen,
 	input	wire					data_valid,
 	
 	output    wire [`ysyx_22051013_DATA]      	ls_data_forward,
 	output    wire [`ysyx_22051013_DATA]      	ls_data_o
 );
 
 //hzd_ctl
 assign ls_ready = wb_ready | (data_ok  & (re | we));
 assign ls_valid = ex_valid | (data_ok  & (re | we));
 //assign ls_flush = data_not_ready;
 
 assign core_ready = wb_ready | ~data_ok;
 
 assign device_data_o = store_data;
 
 assign data_size = 	((ls_ctl == 4'b0001) | (ls_ctl == 4'b1001) | (ls_ctl == 4'b1101)) ? 3'b011 : 
 			((ls_ctl == 4'b0010) | (ls_ctl == 4'b1010) | (ls_ctl == 4'b1110)) ? 3'b100 :
 			((ls_ctl == 4'b0100) | (ls_ctl == 4'b1011) | (ls_ctl == 4'b1111)) ? 3'b101 :
 			((ls_ctl == 4'b1000) | (ls_ctl == 4'b1100)) ? 3'b110 :
 			3'b000;
 
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
 
 assign re    = (rst == `ysyx_22051013_RSTABLE | ls_ctl == 4'b0000 ) ? 1'b0 : ls_ctl[3];
 assign we    = (rst == `ysyx_22051013_RSTABLE | ls_ctl == 4'b0000 ) ? 1'b0 : ~ls_ctl[3];
 assign waddr    = (rst == `ysyx_22051013_RSTABLE) ? `ysyx_22051013_ZERO64 : alu_res ;
 assign raddr    = (rst == `ysyx_22051013_RSTABLE) ? `ysyx_22051013_ZERO64 : {alu_res[63:3],3'b000} ;


assign data_pc = re ? raddr : we ? waddr : `ysyx_22051013_ZERO64;
 
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
/*
//--------------------------dpi-c--------------------------------------------------------------------//
 import "DPI-C" function void pmem_read(input longint raddr, output longint rdata, input byte rlen);
 
 import "DPI-C" function void pmem_write( input longint waddr, input longint wdata, input byte wlen);
  
  
always @(negedge clk) begin
 if(ls_valid) begin
  if(re) begin
  pmem_read(raddr, data_i, rlen);end
  //else begin data_i = `ysyx_22051013_ZERO64;end
  if(we)begin
  pmem_write(waddr, data_o , wlen);end
 end
end
*/
//------------------------output----------------------------------------------------------------------//


assign ls_data_o  = re/* & ~data_ok */? load_data : `ysyx_22051013_ZERO64 ;
assign ls_data_forward  = re /*& ~data_not_ready */? load_data : alu_res ;
//wire _unused_ok = &{alu_res[2:0]};
endmodule

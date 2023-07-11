#include "include/isa.h"
#include "include/memory.h"
/* We use the POSIX regex functions to process regular expressions.
 * Type 'man regex' for more information about POSIX regex functions.
 */
#include <regex.h>

enum {
  TK_NOTYPE = 256, TK_EQ, TK_NUM, TK_LEFT_BRACKET, TK_RIGHT_BRACKET, TK_NEQ, TK_AND, TK_OR, TK_REG, TK_HEX, TK_NOT, TK_DEREF, TK_NEG

  /* TODO: Add more token types */

};

static struct rule {
  const char *regex;
  int token_type;
} rules[] = {

  /* TODO: Add more rules.
   * Pay attention to the precedence level of different rules.
   */

  {" +", TK_NOTYPE},    // spaces
  {"0x[0-9,a-f,A-F]+", TK_HEX}, //hex
  {"[0-9]+", TK_NUM},   //decimal number
  {"\\$[a-z0-9]+", TK_REG}, //reg
  {"\\+",  '+'}, 	//plus
  {"-",    '-'},         // subtract
  {"\\*",  '*'},	//multiply
  {"/" ,   '/'},	//division
  {"\\(",  TK_LEFT_BRACKET}, // (
  {"\\)",  TK_RIGHT_BRACKET}, // )
  {"==", TK_EQ},        // equal
  {"!=", TK_NEQ},       // not equal
  {"&&", TK_AND},       // and
  {"\\|\\|", TK_OR},    // or
  {"~", TK_NOT},        //not
};

#define NR_REGEX ARRLEN(rules)

static regex_t re[NR_REGEX] = {};

/* Rules are used for many times.
 * Therefore we compile them only once before any usage.
 */
void init_regex() {
  int i;
  char error_msg[128];
  int ret;

  for (i = 0; i < NR_REGEX; i ++) {
    ret = regcomp(&re[i], rules[i].regex, REG_EXTENDED);
    if (ret != 0) {
      regerror(ret, &re[i], error_msg, 128);
      panic("regex compilation failed: %s\n%s", error_msg, rules[i].regex);
    }
  }
}

typedef struct token {
  int type;
  char str[32];
} Token;

static Token tokens[3000] __attribute__((used)) = {};
static int nr_token __attribute__((used))  = 0;

static bool make_token(char *e) {
  int position = 0;
  int i;
  regmatch_t pmatch;

  nr_token = 0;

  while (e[position] != '\0') {
    /* Try all rules one by one. */
    for (i = 0; i < NR_REGEX; i ++) {
      if (regexec(&re[i], e + position, 1, &pmatch, 0) == 0 && pmatch.rm_so == 0) {
        char *substr_start = e + position;
        int substr_len = pmatch.rm_eo;

//        Log("match rules[%d] = \"%s\" at position %d with len %d: %.*s",
//            i, rules[i].regex, position, substr_len, substr_len, substr_start);

        position += substr_len;

        /* TODO: Now a new token is recognized with rules[i]. Add codes
         * to record the token in the array `tokens'. For certain types
         * of tokens, some extra actions should be performed.
         */

        switch (rules[i].token_type) {
          case TK_NOTYPE : break;
          case TK_NUM : case TK_HEX : case TK_REG:
          	if(substr_len>31){
          		panic("value out of limit\n");
          	}
          	tokens[nr_token].type = rules[i].token_type;
          	strncpy(tokens[nr_token].str,substr_start,substr_len);
          	tokens[nr_token].str[substr_len]='\0';
          	nr_token++;
          	break;
          default: tokens[nr_token].type = rules[i].token_type;
          	   nr_token++;
          	   break;
        }

        break;
      }
    }

    if (i == NR_REGEX) {
      printf("no match at position %d\n%s\n%*.s^\n", position, e, position, "");
      return false;
    }
  }
 /*    for(int i=0;i<nr_token;i++)
	{
		printf("%5d%5s\n",tokens[i].type,tokens[i].str);
	}*/
  return true;
}

static bool check_parentheses(int p, int q){
 // printf("in check_parentheses\n");
  if(q<=p+1){
    return false;
  }
  if(tokens[p].type !=TK_LEFT_BRACKET||tokens[q].type !=TK_RIGHT_BRACKET){
    return false;
  }
  int check_flag=0;
  int i=0;
  for(i=p+1;i<q;i++){
    if(tokens[i].type==TK_LEFT_BRACKET){
      check_flag++;
    }
    else if(tokens[i].type==TK_RIGHT_BRACKET){
      if(check_flag<=0){
        return false;
      }
      else{
	check_flag--;
      }
    }
  }
  if(check_flag==0&&i<q){
    printf("legal expression, but isn't BNF type\n");
    return true;
  }
  else if(check_flag<0){
    panic("Extra right bracket\n");
  }
  else if(check_flag>0){
    panic("Extra left bracket\n");
  }
  else{
    return true;
  }
}

static int op_order(int Tokens_type){
	switch(Tokens_type){
	  case TK_LEFT_BRACKET: case TK_RIGHT_BRACKET: return 10;
	  case TK_NOT: case TK_DEREF: case TK_NEG: return 8;
	  case '*': case '/' : return 6;
          case '+': case '-' : return 4;
          case TK_EQ: case TK_NEQ: return 2;
          case TK_AND : return 1;
          case TK_OR : return 0;
	  default : return -1;
 }
}

static int main_op_position(int p, int q) {
 // printf("in main_op_position\n");
	int main_op = -1;
	int parentheses_cnt = 0;
	int cmp_op_priority = 0;
	for (int i=p;i<=q;i++){
		switch(tokens[i].type){
			case TK_NUM:case TK_HEX: case TK_REG: continue;
			case TK_LEFT_BRACKET:parentheses_cnt++; break;
			case TK_RIGHT_BRACKET:parentheses_cnt--; break;
			default :
				cmp_op_priority = op_order(tokens[i].type) - op_order(tokens[main_op].type);
				if(parentheses_cnt==0){
					if(main_op==-1 || cmp_op_priority <= 0){
						main_op = i;
					}
				}
	  }
	}
	return main_op;
}

static void recheck_op(Token *t){
  for(int i=0;i<nr_token;i++)
    if(i==0||(tokens[i-1].type!=TK_NUM && tokens[i-1].type!=TK_HEX && tokens[i-1].type!=TK_REG  && tokens[i-1].type!=TK_RIGHT_BRACKET)){
      switch(tokens[i].type){
        case '-': tokens[i].type=TK_NEG;continue;
        case '*': tokens[i].type=TK_DEREF;continue;
        default: tokens[i].type=tokens[i].type;continue;
        }
    }
}

static uint64_t eval(int p, int q) {
 // printf("in eval\n");
  if (p > q) {
    panic("bad expression\n");
  }
  else if (p == q) {
    uint64_t temp;
    bool success;
    switch(tokens[p].type){
    case TK_NUM:
      sscanf(tokens[p].str,"%lu",&temp);
      return temp;
    case TK_HEX:
      temp = strtoul(tokens[p].str,NULL,0);
      return temp;
    case TK_REG: 
      temp = isa_reg_str2val(tokens[p].str,&success);
      return temp;
    default : 
      panic("wrong number\n");
    }  
  }
  else if (check_parentheses(p, q) == true) {
    /* The expression is surrounded by a matched pair of parentheses.
     * If that is the case, just throw away the parentheses.
     */
    return eval(p + 1, q - 1);
  }
  else {
    int op = main_op_position(p,q);
    int op_type = tokens[op].type;
    uint64_t val1 = 0;
    uint64_t val2 = 0;
    if(tokens[op].type!=TK_DEREF && tokens[op].type!=TK_NEG && tokens[op].type!=TK_NOT){
      val1=eval(p,op-1);
      val2=eval(op+1,q);
      }
    else {
      val2 = eval(op+1,q);
      }

    switch (op_type) {
      case '+': return val1 + val2;
      case '-': return (uint64_t)(val1 - val2);
      case '*': return val1 * val2;  
      case '/': if(val2==0){panic("Divide denominator is zero");}
	        else return (int)val1/(int)val2;
      case TK_EQ: return val1==val2;
      case TK_NEQ: return val1!=val2;
      case TK_AND: return val1&&val2;
      case TK_OR: return val1||val2;
      case TK_NOT: return ~val2;
      case TK_DEREF: return host_read(gi_to_hi(val2),4);
      case TK_NEG: return -val2;
      default: panic("wrong operator");;
    }
  }
}


uint64_t expr(char *e, bool *success) {
  if (!make_token(e)) {
    *success = false;
    return 0;
  }
  recheck_op(tokens);
  *success = true ;
  return eval(0,nr_token-1);

}

#include <stdio.h>
#include <fixedptc.h>

int main() {
	fixedpt a = fixedpt_rconst(-1.3);
	fixedpt b = fixedpt_fromint(10);
	fixedpt c = fixedpt_rconst(9.7);
	int d = 0;
	int e = 0;
	if( b > fixedpt_rconst(7.9)){
		d = fixedpt_toint(fixedpt_div(fixedpt_mul(a + FIXEDPT_ONE,b),fixedpt_rconst(2.3)));
		e = fixedpt_toint(fixedpt_muli(fixedpt_divi(c - FIXEDPT_ONE, 3), 4));
	}
	printf("%d, %d\n", fixedpt_toint(fixedpt_mul(a + FIXEDPT_ONE, b)), d);
	printf("%d, %d\n", fixedpt_toint(fixedpt_divi(c - FIXEDPT_ONE, 3)), e);
  printf("%d\n", fixedpt_toint(fixedpt_abs(a)));
  printf("%d, %d\n", fixedpt_toint(fixedpt_ceil(a)),fixedpt_toint(fixedpt_ceil(c)));
  printf("%d, %d\n", fixedpt_toint(fixedpt_floor(a)),fixedpt_toint(fixedpt_floor(c)));
  }

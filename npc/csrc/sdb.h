#ifndef __SDB_H__
#define __SDB_H__

#include "include/common.h"

typedef struct watchpoint {
  int NO;
  struct watchpoint *next;
  uint64_t value;
  char expr[300];

  /* TODO: Add more members if necessary */

} WP;

uint64_t expr(char *e, bool *success);
WP* new_wp();
bool delete_wp(int NO);
void print_wp();

bool test_change();

#endif


#include "sdb.h"

#define NR_WP 32

static WP wp_pool[NR_WP] = {};
static WP *head = NULL, *free_ = NULL;

void init_wp_pool() {
  int i;
  for (i = 0; i < NR_WP; i ++) {
    wp_pool[i].NO = i;
    wp_pool[i].next = (i == NR_WP - 1 ? NULL : &wp_pool[i + 1]);
  }

  head = NULL;
  free_ = wp_pool;
}

WP* new_wp(){
  WP* temp = free_;
  free_ = temp->next;
  temp->next = NULL;
  if(head!=NULL){
    WP* p = head;
    while(p->next){
      p=p->next;
      }
    p->next=temp;
    }
  else{
    head = temp;
    }
  return temp;
}

void free_wp(WP* wp){
  assert(wp!=NULL);
  assert(head!=NULL);
  if(head == wp){
    head =head->next;
    }
  else{
    WP* p = head;
    while(p!=NULL&&p->next!=wp){p=p->next;}
    assert(p!=NULL);
    p->next = p->next->next;
    wp->next = free_;
    free_ = wp;
    }
}

bool delete_wp(int NO){
  WP *p;
  for(p=head; p != NULL; p = p->next){
    if(p->NO == NO) {break;}

  }
  
  free_wp(p);
  return true;
}
   
   
void print_wp(){
  if(head == NULL) printf("no watchpoint\n");

  WP *p; 
  for(p = head; p != NULL; p = p->next){
    printf("%8d\t %s\t 0x%016lx \n", p->NO, p->expr, p->value);
  }
} 

bool test_change(){
WP *p;
for(p = head; p!= NULL; p=p->next){
  bool success;
  uint64_t new_value = expr(p->expr, &success);
  //printf("watchpoint value current 0x%08lx \n", new_vale);
  if(p->value != new_value) return 1;
}
return 0;
}

/* TODO: Implement the functionality of watchpoint */


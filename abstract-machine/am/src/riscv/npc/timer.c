#include <am.h>
#include "../riscv.h"
#include <stdio.h>
uint64_t init_time_us;

void __am_timer_init() {
  init_time_us = inll(RTC_ADDR);
   //printf("%d,,, \n",init_time_us);
}

void __am_timer_uptime(AM_TIMER_UPTIME_T *uptime) {
  uint64_t now_time_us = inll(RTC_ADDR);
  uint64_t time_us = now_time_us ;
  uptime->us = time_us;
  //printf("%d,,, \n",now_time_us);
}

void __am_timer_rtc(AM_TIMER_RTC_T *rtc) {
  rtc->second = 0;
  rtc->minute = 0;
  rtc->hour   = 0;
  rtc->day    = 0;
  rtc->month  = 0;
  rtc->year   = 1900;
}

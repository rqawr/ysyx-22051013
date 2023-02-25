#include <am.h>
#include <nemu.h>
#include <stdio.h>

uint32_t init_time_us;
uint32_t init_time_s;

void __am_timer_init() {
  init_time_us = inl(RTC_ADDR);
  init_time_s = inl(RTC_ADDR + 4);
 // printf("%d  %d\n",init_time_s,init_time_us);
}

void __am_timer_uptime(AM_TIMER_UPTIME_T *uptime) {
  uint32_t now_time_us = inl(RTC_ADDR);
  uint32_t now_time_s = inl(RTC_ADDR + 4);
  uint32_t s = now_time_s - init_time_s;
  uint32_t us = now_time_us - init_time_us;
  uint64_t time_us = s * 1000000 + us;
  uptime->us = time_us;
  //printf("%d  %d\n",now_time_s,now_time_us);
}

void __am_timer_rtc(AM_TIMER_RTC_T *rtc) {
  rtc->second = 0;
  rtc->minute = 0;
  rtc->hour   = 0;
  rtc->day    = 0;
  rtc->month  = 0;
  rtc->year   = 1900;
}

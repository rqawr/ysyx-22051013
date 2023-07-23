#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <sys/time.h>
#include <assert.h>

static int evtdev = -1;
static int fbdev = -1;
static int screen_w = 0, screen_h = 0;
static int central_w = 0, central_h = 0;
struct timeval tv;
struct timezone tz;

struct timeval init_tv;
struct timeval init_tz;
uint32_t init_time;

uint32_t NDL_GetTicks() {
  //printf("in NDL_GetTicks\n");
  gettimeofday(&tv, &tz);
  uint32_t time =tv.tv_sec * 1000 + tv.tv_usec / 1000;
  return (time-init_time);
}

int NDL_PollEvent(char *buf, int len) {
//printf("in NDL_PollEvent\n");
  int fd = open("/dev/events", 0, 0);
  int valid = read(fd, buf, len);
  //if(valid !=0) printf("%s\n",buf);
  return valid != 0;
}

void NDL_OpenCanvas(int *w, int *h) {
//printf("in NDL_OpenCanvas\n");
  if (getenv("NWM_APP")) {
    int fbctl = 4;
    fbdev = 5;
    screen_w = *w; screen_h = *h;
    char buf[64];
    int len = sprintf(buf, "%d %d", screen_w, screen_h);
    // let NWM resize the window and create the frame buffer
    write(fbctl, buf, len);
    while (1) {
      // 3 = evtdev
      int nread = read(3, buf, sizeof(buf) - 1);
      if (nread <= 0) continue;
      buf[nread] = '\0';
      if (strcmp(buf, "mmap ok") == 0) break;
    }
    close(fbctl);
  }
  if (*w == 0) *w = screen_w;
  if (*h == 0) *h = screen_h;
  assert(1 <= *w && *w <= screen_w);
  assert(1 <= *h && *h <= screen_h);
  //printf("*w=%d,*h=%d,screen_w=%d,screen_h=%d\n", *w, *h, screen_w, screen_h);
  central_w = (screen_w - *w)/2;
  central_h = (screen_h - *h)/2;
}

void NDL_DrawRect(uint32_t *pixels, int x, int y, int w, int h) {
//printf("in NDL_DrawRect\n");
 int fd;
 fd = open("/dev/fb",0,0);
 if(__ISA__ == "native") {
 	for (int i = 0; i < h; ++i) {
   		lseek(fd, ((central_h + y + i) * screen_w + central_w + x) * 4, SEEK_SET);
   		write(fd, pixels + i * w, w*4);
  	}
  }
  else {
  	lseek(fd,((central_h + y) * screen_w + central_w + x) * 4, SEEK_SET);
  	write(fd, pixels, (h<<16 | w));
  }
}

void NDL_OpenAudio(int freq, int channels, int samples) {
}

void NDL_CloseAudio() {
}

int NDL_PlayAudio(void *buf, int len) {
  return 0;
}

int NDL_QueryAudio() {
  return 0;
}

int NDL_Init(uint32_t flags) {
  if (getenv("NWM_APP")) {
    evtdev = 3;
  }
  int fd;
  fd = open("/proc/dispinfo", 0, 0);
  assert(fd!=0);
  char buf[80];
  read(fd, buf, 80);
  int len = strlen(buf), flag = 0;
  for (int i = 0; i < len; ++i) {
    if ('0' <= buf[i] && buf[i] <= '9') {
      if (flag==1) screen_w = screen_w * 10 + buf[i] - '0';
      else if(flag==2) screen_h = screen_h * 10 + buf[i] - '0';
    } 
    else if (buf[i] == ':') flag += 1;
  } 
  gettimeofday(&init_tv, &init_tz);
  init_time = init_tv.tv_sec * 1000 + init_tv.tv_usec / 1000;
  return 0;
}

void NDL_Quit() {
}

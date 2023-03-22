#include <common.h>

#if defined(MULTIPROGRAM) && !defined(TIME_SHARING)
# define MULTIPROGRAM_YIELD() yield()
#else
# define MULTIPROGRAM_YIELD()
#endif

#define NAME(key) \
  [AM_KEY_##key] = #key,

static const char *keyname[256] __attribute__((used)) = {
  [AM_KEY_NONE] = "NONE",
  AM_KEYS(NAME)
};

size_t serial_write(const void *buf, size_t offset, size_t len) {
  for (int i = 0; i < len; ++i){
    putch(*(char *)(buf+i));
    }
    return len;
}

size_t events_read(void *buf, size_t offset, size_t len) {
  AM_INPUT_KEYBRD_T kbd;
  ioe_read(AM_INPUT_KEYBRD, &kbd);
  if (kbd.keycode == 0) return 0;
  if (kbd.keydown == true) {
    len = snprintf(buf, len,  "kd %s\n", keyname[kbd.keycode]);
  } else {
    len = snprintf(buf, len,  "ku %s\n", keyname[kbd.keycode]);
  }
  //printf("%s\n",buf);
  return len;
}

size_t dispinfo_read(void *buf, size_t offset, size_t len) {
  AM_GPU_CONFIG_T g_cfg;
  ioe_read(AM_GPU_CONFIG, &g_cfg);
  return snprintf(buf, len,  "WIDTH: %d\nHEIGHT: %d \n", g_cfg.width, g_cfg.height);
}

size_t fb_write(const void *buf, size_t offset, size_t len) {
  offset /= 4;
  AM_GPU_CONFIG_T cfg;
  ioe_read(AM_GPU_CONFIG, &cfg);
  
  AM_GPU_FBDRAW_T ctl;
  ctl.x = offset % cfg.width, ctl.y = offset / cfg.width;
  ctl.h = 1, ctl.w = len;
  ctl.pixels = (void *)(buf);
  ctl.sync = true;
  
  ioe_write(AM_GPU_FBDRAW, &ctl);
  return len;

}

void init_device() {
  Log("Initializing devices...");
  ioe_init();
}

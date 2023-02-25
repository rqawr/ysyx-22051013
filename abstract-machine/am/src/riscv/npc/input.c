#include <am.h>
#include "../riscv.h"

#define KEYDOWN_MASK 0x8000

void __am_input_keybrd(AM_INPUT_KEYBRD_T *kbd) {
  uint32_t keybd = inl(KBD_ADDR);
  kbd->keydown = (keybd & KEYDOWN_MASK ? 1:0);

  kbd->keycode = keybd & ~KEYDOWN_MASK;
}

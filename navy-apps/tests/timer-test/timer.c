#include <unistd.h>
#include <stdio.h>
#include <SDL.h>

int main(){
  SDL_Init(0);
  
  int id = 0;
  uint32_t delay = 500;
  while (1) {
      SDL_Delay(delay);
      printf("0.5s passed for the %d time...\n", id++);
  }
}

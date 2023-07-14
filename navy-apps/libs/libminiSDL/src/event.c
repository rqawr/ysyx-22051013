#include <NDL.h>
#include <SDL.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

#define keyname(k) #k,


static const char *keyname[] = {
  "NONE",
  _KEYS(keyname)
};

#define NUM_KEY  sizeof(keyname) / sizeof(keyname[0])

static char buf[64];
static uint8_t status[NUM_KEY] = {0};

int SDL_PushEvent(SDL_Event *ev) {
  printf("Unimplemented function: SDL_PushEvent\n");
  while (1);
  return 0;
}

int SDL_PollEvent(SDL_Event *ev) {
//printf("in SDL_PollEvent\n");
  char ud;
  char key[32];

  if(NDL_PollEvent(buf, 64) == 0){
    ev->type = SDL_KEYUP;
    ev->key.keysym.sym = SDLK_NONE;
    return 0;
  }
  
  sscanf(buf, "k%s %s\n", &ud, key);
  //printf("%s\n",buf);
  if(buf[0] == 'k') {
    ev->key.keysym.sym = 0;
    for (int i = 0; i < NUM_KEY; i++){
      if (strcmp(key, keyname[i]) == 0){
        ev->key.keysym.sym = i;
        break;
      }
    }   
   // printf("%d\n",ev->key.keysym.sym);
    assert(ev->key.keysym.sym != 0);
  
    if(ud == 'd'){
      ev->type = SDL_KEYDOWN;
      status[ev->key.keysym.sym] = 1;
      }
    else if (ud == 'u'){
      ev->key.type = SDL_KEYUP;
      status[ev->key.keysym.sym] = 0;
      }
    else{
      assert(0);
    }
    return 1;
  }
  printf("SDL_PollEvent receive wrong format input\n");
  while(1);
}

int SDL_WaitEvent(SDL_Event *event) {
  while(SDL_PollEvent(event) == 0);
  return 1;

}

int SDL_PeepEvents(SDL_Event *ev, int numevents, int action, uint32_t mask) {
  printf("Unimplemented function: SDL_PeepEvents\n");
  while (1);
  return 0;
}

uint8_t* SDL_GetKeyState(int *numkeys) {
  if(numkeys){
  *numkeys = NUM_KEY;}
  return status;
}

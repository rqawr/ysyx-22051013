#include <NDL.h>
#include <sdl-video.h>
#include <assert.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

void SDL_BlitSurface(SDL_Surface *src, SDL_Rect *srcrect, SDL_Surface *dst, SDL_Rect *dstrect) {
//printf("in SDL_BlitSurface\n");
  assert(dst && src);
  assert(dst->format->BitsPerPixel == src->format->BitsPerPixel);
  int src_x, src_y, dst_x, dst_y, sur_h, sur_w;
  
  if (srcrect == NULL){
    src_x = 0;
    src_y = 0;
    sur_w = src->w;
    sur_h = src->h;
  }
  else {
    src_x = srcrect->x;
    src_y = srcrect->y;
    sur_w = srcrect->w;
    sur_h = srcrect->h;
  }
  
  if (dstrect == NULL){
    dst_x = 0;
    dst_y = 0;
  }
  else {
    dst_x = dstrect->x;
    dst_y = dstrect->y;
  }
  if(src->format->BitsPerPixel == 32){
    uint32_t* src_pixels = (uint32_t*)src->pixels;
    uint32_t* dst_pixels = (uint32_t*)dst->pixels;
    
    for (int i = 0; i < sur_h; ++i){
      for (int j = 0; j < sur_w; ++j){
        dst_pixels[(dst_y + i) * dst->w + dst_x + j] = src_pixels[(src_y + i) * src->w + src_x + j];
      }
    }
}
  else if(src->format->BitsPerPixel == 8){
    uint8_t *src_pixels = (uint8_t *)src->pixels;
    uint8_t *dst_pixels = (uint8_t *)dst->pixels;
    
    uint64_t temp_dst;
    uint64_t temp_src;
    temp_dst = dst_y * dst->w + dst_x;
    temp_src = src_y * src->w + src_x;
    
    for (int i = 0; i < sur_h; ++i){
      for (int j = 0; j < sur_w; ++j){
        dst_pixels[temp_dst + j] = src_pixels[temp_src + j];
      }
      temp_dst += dst->w;
      temp_src += src->w;
    }
	}
	else{
		assert(0);
	}
}

void SDL_FillRect(SDL_Surface *dst, SDL_Rect *dstrect, uint32_t color) {
//printf("in SDL_FillRect\n");

 
  int sur_x, sur_y, sur_h, sur_w;

  if (dstrect == NULL){
    sur_x = 0;
    sur_y = 0;
    sur_w = dst->w;
    sur_h = dst->h;
  }
  else {
    sur_x = dstrect->x;
    sur_y = dstrect->y;
    sur_w = dstrect->w;
    sur_h = dstrect->h;
  }
 if(dst->format->BitsPerPixel == 32){
   uint32_t *pixels = (uint32_t *)dst->pixels;
   for (int i = 0; i < sur_h; ++i){
     for (int j = 0; j < sur_w; ++j){
       pixels[(sur_y + i) * dst->w + sur_x + j] = color;
     }
   }
}
  else if(dst->format->BitsPerPixel == 8){
    uint8_t *pixels = (uint8_t *)dst->pixels;
    uint64_t temp_dst;
    temp_dst = sur_y * dst->w + sur_x;
    for (int i = 0; i < sur_h; ++i){
      for (int j = 0; j < sur_w; ++j){
      	pixels[temp_dst + j] = color;
      }
      temp_dst += dst->w;
    }
  }	
  else{
	assert(0);
	}
}

static inline uint32_t color_sequence(SDL_Color *color){
	return (color->a << 24) | (color->r << 16) | (color->g << 8) | (color->b);//argb
}

void SDL_UpdateRect(SDL_Surface *s, int x, int y, int w, int h) {
//printf("in SDL_UpdateRect\n");
	if(s->format->BitsPerPixel == 32){
	  if(w == 0 && h == 0 && x ==0 && y == 0){
	    NDL_DrawRect((uint32_t *)s->pixels, 0, 0, s->w, s->h);
	    return;
	  }
  
	uint32_t *pixels = malloc(sizeof(uint32_t) * w * h);
	assert(pixels);
	uint32_t *surf_pix = (uint32_t *)s->pixels;
	  for (int i = 0; i < h; i++){
	    memcpy(&pixels[i * w],&surf_pix[(y + i) * s->w + x],sizeof(uint32_t) * w);
	  }
	NDL_DrawRect(pixels, x, y, w, h);
	free(pixels);
	}
	else if(s->format->BitsPerPixel == 8){
	  if(w == 0 && h == 0 && x ==0 && y == 0){
	    w = s->w; h = s->h;
	  }
	  int size = w*h;
	  uint32_t *pixels = malloc(sizeof(uint32_t) *size);
	  assert(pixels);
	  uint8_t *src_pix = (uint8_t *)s->pixels;
		
	  uint64_t temp_dst;
	  uint64_t temp_src;
	  temp_src = y * s->w + x;
	  temp_dst = 0;
	  for (int i = 0; i < h; i++){
	    for (int j = 0; j < w; j++){
	      pixels[temp_dst + j] = color_sequence(&(s->format->palette->colors[src_pix[temp_src + j]]));
	    }
	    temp_dst += w;
	    temp_src += s->w;
	  }
	  NDL_DrawRect(pixels, x, y, w, h);
	  free(pixels);
	}
	else{
		assert(0);
	}
}

// APIs below are already implemented.

static inline int maskToShift(uint32_t mask) {
  switch (mask) {
    case 0x000000ff: return 0;
    case 0x0000ff00: return 8;
    case 0x00ff0000: return 16;
    case 0xff000000: return 24;
    case 0x00000000: return 24; // hack
    default: assert(0);
  }
}

SDL_Surface* SDL_CreateRGBSurface(uint32_t flags, int width, int height, int depth,
    uint32_t Rmask, uint32_t Gmask, uint32_t Bmask, uint32_t Amask) {
  assert(depth == 8 || depth == 32);
  SDL_Surface *s = malloc(sizeof(SDL_Surface));
  assert(s);
  s->flags = flags;
  s->format = malloc(sizeof(SDL_PixelFormat));
  assert(s->format);
  if (depth == 8) {
    s->format->palette = malloc(sizeof(SDL_Palette));
    assert(s->format->palette);
    s->format->palette->colors = malloc(sizeof(SDL_Color) * 256);
    assert(s->format->palette->colors);
    memset(s->format->palette->colors, 0, sizeof(SDL_Color) * 256);
    s->format->palette->ncolors = 256;
  } else {
    s->format->palette = NULL;
    s->format->Rmask = Rmask; s->format->Rshift = maskToShift(Rmask); s->format->Rloss = 0;
    s->format->Gmask = Gmask; s->format->Gshift = maskToShift(Gmask); s->format->Gloss = 0;
    s->format->Bmask = Bmask; s->format->Bshift = maskToShift(Bmask); s->format->Bloss = 0;
    s->format->Amask = Amask; s->format->Ashift = maskToShift(Amask); s->format->Aloss = 0;
  }

  s->format->BitsPerPixel = depth;
  s->format->BytesPerPixel = depth / 8;

  s->w = width;
  s->h = height;
  s->pitch = width * depth / 8;
  assert(s->pitch == width * s->format->BytesPerPixel);

  if (!(flags & SDL_PREALLOC)) {
    s->pixels = malloc(s->pitch * height);
    assert(s->pixels);
  }

  return s;
}

SDL_Surface* SDL_CreateRGBSurfaceFrom(void *pixels, int width, int height, int depth,
    int pitch, uint32_t Rmask, uint32_t Gmask, uint32_t Bmask, uint32_t Amask) {
  SDL_Surface *s = SDL_CreateRGBSurface(SDL_PREALLOC, width, height, depth,
      Rmask, Gmask, Bmask, Amask);
  assert(pitch == s->pitch);
  s->pixels = pixels;
  return s;
}

void SDL_FreeSurface(SDL_Surface *s) {
  if (s != NULL) {
    if (s->format != NULL) {
      if (s->format->palette != NULL) {
        if (s->format->palette->colors != NULL) free(s->format->palette->colors);
        free(s->format->palette);
      }
      free(s->format);
    }
    if (s->pixels != NULL && !(s->flags & SDL_PREALLOC)) free(s->pixels);
    free(s);
  }
}

SDL_Surface* SDL_SetVideoMode(int width, int height, int bpp, uint32_t flags) {
  if (flags & SDL_HWSURFACE) NDL_OpenCanvas(&width, &height);
  return SDL_CreateRGBSurface(flags, width, height, bpp,
      DEFAULT_RMASK, DEFAULT_GMASK, DEFAULT_BMASK, DEFAULT_AMASK);
}

void SDL_SoftStretch(SDL_Surface *src, SDL_Rect *srcrect, SDL_Surface *dst, SDL_Rect *dstrect) {
  assert(src && dst);
  assert(dst->format->BitsPerPixel == src->format->BitsPerPixel);
  assert(dst->format->BitsPerPixel == 8);

  int x = (srcrect == NULL ? 0 : srcrect->x);
  int y = (srcrect == NULL ? 0 : srcrect->y);
  int w = (srcrect == NULL ? src->w : srcrect->w);
  int h = (srcrect == NULL ? src->h : srcrect->h);

  assert(dstrect);
  if(w == dstrect->w && h == dstrect->h) {
    /* The source rectangle and the destination rectangle
     * are of the same size. If that is the case, there
     * is no need to stretch, just copy. */
    SDL_Rect rect;
    rect.x = x;
    rect.y = y;
    rect.w = w;
    rect.h = h;
    SDL_BlitSurface(src, &rect, dst, dstrect);
  }
  else {
    assert(0);
  }
}

void SDL_SetPalette(SDL_Surface *s, int flags, SDL_Color *colors, int firstcolor, int ncolors) {
  assert(s);
  assert(s->format);
  assert(s->format->palette);
  assert(firstcolor == 0);

  s->format->palette->ncolors = ncolors;
  memcpy(s->format->palette->colors, colors, sizeof(SDL_Color) * ncolors);

  if(s->flags & SDL_HWSURFACE) {
    assert(ncolors == 256);
    for (int i = 0; i < ncolors; i ++) {
      uint8_t r = colors[i].r;
      uint8_t g = colors[i].g;
      uint8_t b = colors[i].b;
    }
    SDL_UpdateRect(s, 0, 0, 0, 0);
  }
}

static void ConvertPixelsARGB_ABGR(void *dst, void *src, int len) {
  int i;
  uint8_t (*pdst)[4] = dst;
  uint8_t (*psrc)[4] = src;
  union {
    uint8_t val8[4];
    uint32_t val32;
  } tmp;
  int first = len & ~0xf;
  for (i = 0; i < first; i += 16) {
#define macro(i) \
    tmp.val32 = *((uint32_t *)psrc[i]); \
    *((uint32_t *)pdst[i]) = tmp.val32; \
    pdst[i][0] = tmp.val8[2]; \
    pdst[i][2] = tmp.val8[0];

    macro(i + 0); macro(i + 1); macro(i + 2); macro(i + 3);
    macro(i + 4); macro(i + 5); macro(i + 6); macro(i + 7);
    macro(i + 8); macro(i + 9); macro(i +10); macro(i +11);
    macro(i +12); macro(i +13); macro(i +14); macro(i +15);
  }

  for (; i < len; i ++) {
    macro(i);
  }
}

SDL_Surface *SDL_ConvertSurface(SDL_Surface *src, SDL_PixelFormat *fmt, uint32_t flags) {
  assert(src->format->BitsPerPixel == 32);
  assert(src->w * src->format->BytesPerPixel == src->pitch);
  assert(src->format->BitsPerPixel == fmt->BitsPerPixel);

  SDL_Surface* ret = SDL_CreateRGBSurface(flags, src->w, src->h, fmt->BitsPerPixel,
    fmt->Rmask, fmt->Gmask, fmt->Bmask, fmt->Amask);

  assert(fmt->Gmask == src->format->Gmask);
  assert(fmt->Amask == 0 || src->format->Amask == 0 || (fmt->Amask == src->format->Amask));
  ConvertPixelsARGB_ABGR(ret->pixels, src->pixels, src->w * src->h);

  return ret;
}

uint32_t SDL_MapRGBA(SDL_PixelFormat *fmt, uint8_t r, uint8_t g, uint8_t b, uint8_t a) {
  assert(fmt->BytesPerPixel == 4);
  uint32_t p = (r << fmt->Rshift) | (g << fmt->Gshift) | (b << fmt->Bshift);
  if (fmt->Amask) p |= (a << fmt->Ashift);
  return p;
}

int SDL_LockSurface(SDL_Surface *s) {
  return 0;
}

void SDL_UnlockSurface(SDL_Surface *s) {
}

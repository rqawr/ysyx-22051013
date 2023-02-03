#include <klib.h>
#include <klib-macros.h>
#include <stdint.h>

#if !defined(__ISA_NATIVE__) || defined(__NATIVE_USE_KLIB__)

size_t strlen(const char *s) {
  assert(s!=NULL);
  size_t cont = 0;
  while(*s++){
    ++cont;
    }
  return cont;
}

char *strcpy(char *dst, const char *src) {
  assert(dst!=NULL&&src!=NULL);
  char *cp = dst;
  while((*cp++ = *src++) !='\0')
    ;
  return dst;
}

char *strncpy(char *dst, const char *src, size_t n) {
  char *temp = dst;
  while(n&&(*dst++=*src++ !='\0')){
    n--;}
  if(n){
    while(n--){
      *dst++ = '\0';
    }
  }
return temp;
}

char *strcat(char *dst, const char *src) {
  assert(dst != NULL && src != NULL);
  char *temp = dst;
  while(*dst != '\0'){
    dst++;
  }
  while((*dst++ = *src++) != '\0');
  return temp;
}

int strcmp(const char *s1, const char *s2) {
  assert(s1 != NULL && s2 != NULL);
  for(;(*s1 == *s2)&&(*s1!='\0');s1++,s2++)
    ;
  return *s1-*s2;
}

int strncmp(const char *s1, const char *s2, size_t n) {
  
  while(--n && *s1 && *s1 == *s2){
    s1++;
    s2++;
  }
  if(n==0){ return 0;}
  else {return (*s1 - *s2);}
}

void *memset(void *s, int c, size_t n) {
  char *temp = (char *)s;
  while(n-->0)
    *temp++ = c;
  return s;
}

void *memmove(void *dst, const void *src, size_t n) {  
  void* temp = dst;
  if(dst > src){
    while(n--){*(((char*)dst) + n) = *(((char*)src) + n);} 
  }
  else{
    temp = memcpy(dst, src, n);
  }
  return temp;
}

void *memcpy(void *out, const void *in, size_t n) {
  assert(out!=NULL&&in!=NULL);
  char* psrc = (char*)in;
  char* pdst = (char*)out;
  if((psrc < pdst) && (psrc + n > pdst)){
    psrc = psrc + n - 1;
    pdst = pdst + n - 1;
    while(n--) *pdst-- = *psrc--;
  }
  else{
    while(n--) *pdst++ = *psrc++;
  }
  return out;
}

int memcmp(const void *s1, const void *s2, size_t n) {
  assert(s1 != NULL && s2 != NULL && n>0);
  const char *dest = (char *)s1;
  const char *src  = (char *)s2;
  while(*dest == *src && --n > 0){
    dest++;
    src ++;
  }
  int a = *dest - *src;
  if(a>0) {return 1;}
  else if(a <0) {return -1;}
  else {return 0;};
  return a;
}

#endif

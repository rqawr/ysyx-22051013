#include <am.h>
#include <klib.h>
#include <klib-macros.h>
#include <stdarg.h>

#if !defined(__ISA_NATIVE__) || defined(__NATIVE_USE_KLIB__)

char* num2str(char *str, long long num, int base, unsigned int width) {
  char tmp[66];
  if (num < 0) {
    *str++ = '-';
    num = -num;
    width--;
  }
  int len = 0;
  if (num == 0){tmp[len++] = 0;}
  else while (num!=0) {
    tmp[len++] = num % base;
    num = num / base;
  }
  while (width-- > 0 && len-- >0) {
    if (tmp[len] < 10) *str++ = tmp[len] + '0';
    else *str++ = tmp[len] - 10 + 'A';

  }
  return str;
}

int klib_atoi(const char **s){
  int i,c;
  for(i=0 ; '0'<=(c=**s)&&c<='9';++*s){
    i=i*10+c-'0';
    }
  return i;
}

int printf(const char *fmt, ...) {
  int n;
  char buf[8000];
  va_list args;
  va_start(args, fmt);
  n = vsprintf(buf, fmt, args);
  va_end(args);
  putstr(buf);
  return n;
}

int vsprintf(char *out, const char *fmt, va_list ap) {
  char *s;
  char *str;
  for (str = out; *fmt; fmt++) {
    if (*fmt != '%') {
      *str++ = *fmt;
      continue;
    }
    fmt++;
  if(*fmt == '0') {fmt++;}
  
  unsigned int field_width = -1;
  
  if('0'<=*fmt && *fmt <= '9'){
    field_width = klib_atoi(&fmt);}
   
  switch (*fmt) {
    case 'c':
      *str++ = (unsigned char)va_arg(ap, int);
      break;
    case 's':
      s = va_arg(ap, char *);
      while (*s) *str++ = *s++;
      break;
    case 'd':      
      str = num2str(str, (long long)va_arg(ap,  int), 10 , field_width);
      break;
    case 'p' :
      str = num2str(str, (long long)va_arg(ap, void *), 16, field_width);
      break;    
    case 'o' :
      str = num2str(str, (long long)va_arg(ap, int), 8, field_width);
      break;          
    case 'x' :
      str = num2str(str, (long long)va_arg(ap, int), 16, field_width);
      break;        
    default:
      *str++ = '%';
      if (*fmt) *str++ = *fmt;
      else fmt--;
      break;
    }
  }
  *str = '\0';
  return str-out;
}

int sprintf(char *out, const char *fmt, ...) {
  va_list ap;
  int i;
  va_start(ap,fmt);
  i = vsprintf(out,fmt,ap);
  va_end(ap);
  return i;
  
}

int snprintf(char *out, size_t n, const char *fmt, ...) {
  va_list ap;
  int i;
  va_start(ap,fmt);
  i = vsnprintf(out,n,fmt,ap);
  va_end(ap);
  return i;
}

int vsnprintf(char *out, size_t n, const char *fmt, va_list ap) {
  char *s;
  char *str;
  int cnt = 0;
  for (str = out; *fmt; fmt++) {
  if(cnt<=n){
    cnt += 1;
    if (*fmt != '%') {
      *str++ = *fmt;
      continue;
    }
    fmt++;
  if(*fmt == '0') {fmt++;}
  
  unsigned int field_width = -1;
  
  if('0'<=*fmt && *fmt <= '9'){
    field_width = klib_atoi(&fmt);}
   
  switch (*fmt) {
    case 'c':
      *str++ = (unsigned char)va_arg(ap, int);
      break;
    case 's':
      s = va_arg(ap, char *);
      while (*s) *str++ = *s++;
      break;
    case 'd':      
      str = num2str(str, (long long)va_arg(ap,  int), 10 , field_width);
      break;
    case 'p' :
      str = num2str(str, (long long)va_arg(ap, void *), 16, field_width);
      break;    
    case 'o' :
      str = num2str(str, (long long)va_arg(ap, int), 8, field_width);
      break;          
    case 'x' :
      str = num2str(str, (long long)va_arg(ap, int), 16, field_width);
      break;        
    default:
      *str++ = '%';
      if (*fmt) *str++ = *fmt;
      else fmt--;
      break;
    }
   }
  }
  *str = '\0';
  return str-out;
}

#endif

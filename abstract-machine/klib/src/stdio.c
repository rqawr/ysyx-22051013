#include <am.h>
#include <klib.h>
#include <klib-macros.h>
#include <stdarg.h>

#if !defined(__ISA_NATIVE__) || defined(__NATIVE_USE_KLIB__)

char* num2str(char *str, long long num, int base) {
  char tmp[66];
  if (num < 0) {
    *str++ = '-';
    num = -num;
  }
  int len = 0;
  if (num == 0) tmp[len++] = '0';
  else while (num!=0) {
    tmp[len++] = num % base;
    num = num / base;
  }
  while (len-- > 0) {
    *str++ = tmp[len] + '0';
  }
  return str;
}

int printf(const char *fmt, ...) {
  panic("Not implemented");
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
  switch (*fmt) {
    case 'c':
      *str++ = (unsigned char)va_arg(ap, int);
      break;
    case 's':
      s = va_arg(ap, char *);
      while (*s) *str++ = *s++;
      break;
    case 'd':      
      str = num2str(str, (long long)va_arg(ap, int), 10);
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
  panic("Not implemented");
}

int vsnprintf(char *out, size_t n, const char *fmt, va_list ap) {
  panic("Not implemented");
}

#endif

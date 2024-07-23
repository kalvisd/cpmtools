#include <stdio.h>
#include <string.h>

#include "filename.h"

#if defined(__STDC_VERSION__) && __STDC_VERSION__ >= 199900L
# define RESTRICT restrict
#else
# define RESTRICT
#endif

void cpm_to_host(char *dst, char const *RESTRICT src, size_t capacity) /*{{{C}}}*//*{{{*/
{
  while (*src && capacity>0)
  {
    *dst = *src=='/' ? ',' : *src;
    dst++;
    src++;
    --capacity;
  }
  if (capacity>0) *dst='\0';
  else *(dst-1)='\0';
}
/*}}}*/
void host_to_cpm(char *dst, char const *RESTRICT src, size_t capacity) /*{{{*/
{
  while (*src && capacity>0)
  {
    *dst = *src==',' ? '/' : *src;
    dst++;
    src++;
    --capacity;
  }
  if (capacity>0) *dst='\0';
  else *(dst-1)='\0';
}
/*}}}*/
char const *mybasename(char const *name) /*{{{*/
{
  char const *base;

  if ((base=strrchr(name,'/'))!=(char*)0) ++base; else base=name;
  return base;
}
/*}}}*/

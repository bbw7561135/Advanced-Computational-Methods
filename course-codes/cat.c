#include <stdio.h>

/* main: copy stdin to stdout */
int main(void) {
  int c;
  while ((c=getchar())!=EOF){
    putchar(c);
  }
  return 0;
}


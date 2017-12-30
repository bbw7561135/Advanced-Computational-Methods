#include <stdio.h>
#include <string.h>
int main(void) {
  char c[]="Hello World---";
  int i=0;
  for (i=0; i<strlen(c); i++) {/* use array     */
    printf("%c", c[i]);        /* subscripts    */
  }
  for (i=0; i<strlen(c); i++) {/* use   pointer */
    printf("%c", *(c+i));      /* arithmetic    */
  }
return 0;}

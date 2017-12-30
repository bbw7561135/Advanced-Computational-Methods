#include <stdio.h>

/* main: count number of lines in stdin */
int main(void) {
  long nl=0;        /* Number of Lines */
  int c;          
  while ( (c=getchar())!=EOF ) {
    if (c=='\n')
      nl++;
  }
  printf("%ld\n", nl);
  return 0;
}


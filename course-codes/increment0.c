#include<stdio.h>
int main(void) {
  int k=5,n=0;
  n = k;
  k = k + 1;  /* could also write 'k++;' or '++k' */
  printf("case 1: -> k=%d, n=%d\n", k, n);
  k = 5; n=0; /* reset to original values */
  k = k + 1;  /* could also write 'k++;' or '++k' */
  n = k;
  printf("case 2: -> k=%d, n=%d\n", k, n);
  return 0;}

#include<stdio.h>
int main(void) {
  int k=5,n=0;
  n = k++;    /* instead of: n=k; k=k+1 */
  printf("postfix: n=k++ -> k=%d, n=%d\n", k, n);
  k = 5; n=0;
  n = ++k;   /* instead of: k=k+1; n=k */
  printf("prefix : n=++k -> k=%d, n=%d\n", k, n);
  return 0;
}

#include <stdio.h>
#define N 10

int main(void) {
  int a[N];
  int i;
  for (i=0; i<N; i++) {
    printf("a[%d]=%d\n",i,a[i]);
  }
  return 0;
}

#include <stdio.h>
#define N 36
long fib(int n) {
  long fibs[N+1]; 
  long i;
  fibs[0]=0; fibs[1]=1;
  for (i=2; i<=N; i++) {
    fibs[i]=fibs[i-1]+fibs[i-2];
  }
  return fibs[N];
}

int main(void) {
  printf("fib(%d)=%ld\n",N,fib(N));
  return 0;
}

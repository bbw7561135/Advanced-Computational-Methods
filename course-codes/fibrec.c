#include <stdio.h>
#include <time.h>
/* Compute Fibonacci number n 
   (recursively */
int fib(int n) {
  if (n==0) 
    return 0;
  else 
    if (n==1)
    return 1;
    else
      return fib(n-1) + fib(n-2);
}

int main(void) {
  time_t starttime;
  starttime = time(NULL);
  printf("fib(36)=%d\n",fib(36));
  printf("Time taken: %4.2g\n",(double) (time(NULL)-starttime));
  return 0;
}

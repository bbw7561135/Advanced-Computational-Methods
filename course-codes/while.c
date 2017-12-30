#include<stdio.h>
int main( void ) {
  double x = 1;
  while (x < 50) {
    printf("In this iteration, x=%f\n",x);
    x = x * 1.5;
  }
  return 0;
}

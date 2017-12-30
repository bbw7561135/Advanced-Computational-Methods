#include<stdio.h>
int main( void ) {
  double x;
  for (x=1; x < 50; x=x*1.5) {
    printf("In this iteration, x=%f\n",x);
  }
  return 0;
}

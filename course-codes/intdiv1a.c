#include<stdio.h> 

int main( void ) {
  int a=10; int b=3; double c;

  c = (double) b/a;     /* OR  c = b/(double) a;  */
  
  printf("a=%d, b=%d, c=%f\n", a, b, c);

  return 0;
}

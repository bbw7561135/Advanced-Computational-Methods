#include<stdio.h> 
int max( double a, double b ) {   
  /* function that returns the larger double of a and b */
  if (a>b) {
    return a;
  }
  else {
    return b;
  }
}

int main( void ) {
  double x = 2.7182;      
  double y = 3.1416;
  printf("x=%f and y=%f. The larger value is %f.\n", x, y, max(x,y) );
  return 0;  
}

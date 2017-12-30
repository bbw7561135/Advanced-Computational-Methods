#include<stdio.h> 
int max( int a, int b ) {   
  /* function that returns the larger integer of a and b */
  if (a>b) {
    return a;
  }
  else {
    return b;
  }
}

int main( void ) {
  int x=1;      /* declare variables */
  int y=2;      /* and initialise variables */
  printf("x=%d and y=%d. The larger value is %d.\n", 
	 x, y, max(x,y) );
  return 0;   /* return 0 to operating system */
}

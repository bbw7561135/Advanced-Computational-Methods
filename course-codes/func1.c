#include<stdio.h> 

int square( int a ) {   
  return a*a;
}

int main( void ) {
  int mynumber;           /* declare variable    */
  mynumber = 4;           /* initialise variable */

  printf("mynumber is %d, and mynumber squared is %d.\n", 
	 mynumber, square(mynumber) );

  return 0;               /* return 0 to operating system */
}

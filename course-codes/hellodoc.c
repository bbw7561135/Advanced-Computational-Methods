/* hello.c - a program printing "Hello World!" to the screen 
Hans Fangohr, March 2003, University of Southampton, fangohr@soton.ac.uk

History: - inspired by standard C-greeting program
Purpose: - to provide students a small example of working C-code
Modifications:
                Sept 2010: minor changes for SESG6025 
*/
#include<stdio.h> 
int main( void ) {        // The latest ANSI C (>1999) allows one-line 
                          // comments starting with a double slash
                          // but best not to rely on this.
  printf("Hello World!\n");  
  return 0;
}

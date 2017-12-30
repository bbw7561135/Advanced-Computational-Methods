#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (void) {
  int i=1;
  int last;
  while (i>0) {
    last = i;
    i=i+1;
  }
  printf("Largest long int value=%d, smallest long int value=%d\n",last,i);
  return 0;
}

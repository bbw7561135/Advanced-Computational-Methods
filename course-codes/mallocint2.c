#include <stdio.h>
#include <stdlib.h>  /* provides malloc */
#define N 10         /* define array length */
int main() {
  int i; 
  int *a; /* array of int */
  a = (int *)malloc(sizeof(int)*N);
  if (a == NULL) {
    printf("ERROR: Out of memory\n");
    return 1;
  }
  else {
    printf("Have allocated %d bytes for a.\n", 
	   (int) sizeof(int)*N);
  }
  for (i=0; i<N; a[i++]=0) ; /* initialise */
  a[4]=42;                   /* some activity */
  for (i=0; i<N; printf("%d ",a[i++])) ;
  free(a);
  return 0;
}



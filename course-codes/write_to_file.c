#include<stdio.h>
#include<time.h>
int main(void) {
  FILE *f;           /* pointer to file */
  if ( (f=fopen("myfile.txt","w"))==NULL) {
    printf("Cannot open 'myfile.txt' for writing");
    return -1;
  }
  fprintf(f,"We can now print to the file f using Fprintf\n");
  fprintf(f,"For example, a number %d and %d and %d, and\n",1,2,42);
  
  if  (fclose(f) != 0 ) {
    fprintf(f,"File could not be closed.\n");
    return -1;
  }
  return 0;
}

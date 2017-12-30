#include<stdio.h>
#include<stdlib.h>
int main(void) {
  FILE *f, *g;                    /* pointer to file */
  char c;

  /* create file with data */
  if ( (f = fopen("myfile.txt", "w")) == NULL ) {
    printf("Cannot open 'myfile.txt' for writing");
    return -1;
  }
  fprintf(f, "Hello\n2nd Line");
  if ( fclose(f) != 0 ) {
      printf("Could not close file!");
      return -1;
    }

  /* open the file for reading */
  if ( (g = fopen("myfile.txt","r")) == NULL) {
    printf("Cannot open 'myfile.txt' for reading");
    return -1;
  }
  /* read file content char by char and print to stdout */
  while ( (c=fgetc(g)) != EOF) {
    printf("Character read = '%c', as integer = %d\n",c,c);
  }
  printf("Character read = EOF, as integer = %d\n",c);
  if  (fclose(g) != 0 ) {
    printf("File could not be closed.\n");
    return -1;
  }
  return 0;
}

#include <stdio.h>

/* main: count number of characters in stdin */
int main(void) {
  long nc=0;         /* Number of Characters */
  while ( getchar()!=EOF){
    nc++;
  }
  printf("%ld\n", nc);   
  return 0;
}


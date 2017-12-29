#include <stdio.h>
#include <stdlib.h>

char* mix(char *s1, char *s2){

  /* the +1 is for the null character '\0' */
  char *str = (char*)malloc(sizeof(s1) * 2 + 1);
  char *strIndex = str;

  /* I'm not sure why you have to do this, but it werks */
  while (*s1 != '\0' && *s2 != '\0'){
    *strIndex++ = *s1++;
    *strIndex++ = *s2++;
  }
  
  /* add the null character at the end */
  *strIndex = '\0'; 

  return str;

}

int main(void){

  char s1[] = "Hello World";
  char s2[] = "1234567890!";

  printf("s1 = %s\n", s1);
  printf("s2 = %s\n", s2);
  printf("r  = %s\n", mix(s1, s2));

  return 0;

}
 
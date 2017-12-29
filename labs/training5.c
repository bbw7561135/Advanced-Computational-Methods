#include <stdio.h>
#include <string.h>

/* Function void rstrip(char s[])
modies the string s: if at the end of the string s there are one or more
spaces, then remove these from the strings.

The name rstrip stands for Right STRIP, trying to indicate that spaces at the
'right' end of the string should be removed */

void rstrip(char s[]){

int i;

for(i = strlen(s)-1; s[i] == ' ' ; i--){
    s[i] = 0;
  }
}

int main(void){
  char test1[] = "Hello World    ";

  printf("Original string reads  : |%s|\n", test1);
  rstrip(test1);
  printf("R-stripped string reads: |%s|\n", test1);

  return 0;
}

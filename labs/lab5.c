#include <stdio.h>
#include <string.h>

void lstrip(char s[]){

int i, j;

while(s[0] == ' '){
  for(i =0; i < strlen(s); i++){
    s[i] = s[i+1];
  }
}
}


int main(void){
  char test1[] = "      Hello World";

  printf("Original string reads  : |%s|\n", test1);
  lstrip(test1);
  printf("R-stripped string reads: |%s|\n", test1);

  return 0;
}

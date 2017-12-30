#define N 10
#include <stdio.h>

/* Given an array of char s and an number of elements n 
in this array, print them one by one. Only print lower-
case letters a to z. Print '0' instead of the binary zero 
(which is '\0'). Print '?' for all other char values.
*/
void print_char_array(char *s, int n)
{
  int i;
  /* Actual printing of data */
  printf("raw-data: s=|");
  for (i=0; i<n; i++) {
      if ((s[i] >= 'a') && (s[i] <= 'z')) {
        printf("%c", s[i]);
      }
      else {
          if (s[i] == '\0') {
            printf("0");
          } 
          else {
            printf("?");
            /* printf("--> i=%d='%c'\n", s[i], s[i]);       */
          }  /* if i=='0' else */
        }  /* if a<i<z else */ 
      }  /* for i=.. */  
  printf("| (%d elements)\n", n);
}


int main(void) {
  char s[N];
  int i;
  for (i = 'a'; i <= 'j'; i++ ) {
      s[i-'a'] = i;
  }

  print_char_array(s, N);
  printf("printf:   s='%s'\n",s); 
  printf("\n1. Terminate string at 9 with \\0, i.e. replace 'j' with '\\0':\n");
  s[9]='\0';           
  print_char_array(s, N);
  printf("printf:   s='%s'\n",s); 
  printf("\n2. Terminate string at 5 with \\0, i.e. replace 'e' with '\\0':\n");
  s[5]='\0';           /* terminate string */
  print_char_array(s, N);  
  printf("printf:   s='%s'\n",s); 
  printf("\n3. Unterminate string at 5 with x:\n");  
  s[5]='x§';           /* unterminate string earlier*/
  print_char_array(s, N);
  printf("printf:   s='%s'\n",s); 
  return 0;
}

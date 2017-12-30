#include <stdio.h>

int main(void) {
  char s[27];
  int i;
  for (i=0; i<26; i++) {/* put abc...xyz in s */
    s[i] = 'A'+i;
  }
  s[26]='\0';           /* terminate string */
  printf("s=%s\n",s);
  s[10]='\0';           /* terminate string earlier*/
  printf("s=%s\n",s);
  return 0;
}

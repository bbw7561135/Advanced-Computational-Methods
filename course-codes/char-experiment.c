#include<stdio.h>

int main(void) {
  int c;
  c = 'A';
  printf(" c='A' => c = %c = %d\n",c,c);
  c = 'd';
  printf(" c='d' => c = %c = %d\n",c,c);
  c = 'd'-'A';
  printf(" c='d'-'A' => c = %c = %d\n",c,c);
  return 0;
}

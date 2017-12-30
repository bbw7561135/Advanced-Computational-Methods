#include<stdio.h>

void f(int k){ /* f: print k dots in line*/
  while (k>0) {
    printf(".");
    --k;
  }  
  printf("\n");
} /* k is zero when function is left */

int main(void) {
  int k = 10;        
  printf("k=%d\n",k); 
  f(k);               
  printf("k=%d\n",k);
  return 0;
}


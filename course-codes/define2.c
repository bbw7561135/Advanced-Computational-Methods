#include <stdio.h>
#define MYINT char

MYINT square(MYINT x) {
  return x*x;
}

int main(void) {
    MYINT a=3;
    printf("Myint a=%d uses %ld bytes. %d^2=%d\n", 
	   a, sizeof(a), a, square(a));
    return 0;
}

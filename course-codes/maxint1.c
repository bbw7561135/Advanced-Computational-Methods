#include <stdio.h>
int main(void) {
	char a = 120;  /* educated guess just below
			  the max char */
	while (a > 0) {
		printf("%d ", a);
		a = a + 1;
	}

	printf("%d ", a);	
	return 0;
}

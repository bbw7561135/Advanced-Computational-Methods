#include <stdio.h>

#define N 100000

int main(void) {
	/* char hello[] = "Hello World"; */
	char a[N];
	/* char bye[] = "See you later"; */
	long i=0;
	long printed_chars = 0;

	for (i=0; i<N; i++) {

		if (printed_chars % 60 == 0) { 
			printf("\n");
			printed_chars ++;
		}

		if (a[i] == '\0') {  
			/* printf("\\0"); 
			printed_chars += 2; */
			continue;
		}
		
		if (a[i] == '\n') {
			/* printf("\\n");
			printed_chars += 2; */
			continue;
		}

		if ((a[i] > 32) && (a[i] < 127))
			printf("%c", a[i]);
		else
			printf(".");

		printed_chars++;

	}

	/* 
	hello[0] = hello[0];
	bye[0] = bye[0];
	*/


	printf("\n");
	
	return 0;
}

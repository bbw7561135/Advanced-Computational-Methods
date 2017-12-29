#include <stdio.h>
#include <stdlib.h>

long* make_long_array(long n){

	long *a;
	
	a = (long *)malloc(sizeof(long) * n);
	
	if (a == NULL){
		printf("Memory allocation failed.");
		return NULL;
	}
	
	return a;
	
}

long* make_fib_array(long n){

	int i;
	long *fibs_array;
	
	fibs_array = make_long_array(n);
	fibs_array[0] = 0;
	fibs_array[1] = 1;
	
	for(i = 2; i < n; i++){
		fibs_array[i] = fibs_array[i - 1] + fibs_array[i - 2];
		}
		
	return fibs_array;
}


void use_fib_array(long N){
	/* N is the maximum number for fibarray length */
	long n; /* counter for fibarray length */
	long i; /* counter for printing all elements of fibarray */
	long *fibarray; /* pointer to long -- pointer to the fibarray itself*/
	/* Print one line for each fibarray length n*/
	for (n=2; n<=N; n++) {
	/* Obtain an array of longs with data */
	fibarray = make_fib_array(n);
	/* Print all elements in array */
	printf("fib(%2ld) : [",n);
	for (i=0; i<n; i++) {
	printf(" %ld", fibarray[i]);
	}
	printf(" ]\n");
	/* free array memory */
	free(fibarray);
	}
} 


int main(void) {
	use_fib_array(10e3);
	getchar();
	return 0;
}


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

void use_make_long_array(long n){
	int i;
	long *p = make_long_array(n);
	
	printf("In use_make_long_array(%ld)\n", n);
	
	/* if p is not NULL, we could allocate memory and we proceed
	 with testing */
	if (p != NULL){
	
		for (i = 0; i < n; i++){
			p[i] = i + 42;
			}
			free(p);
		}
		
		else{
			printf("Error - it seems that the memory allocation failed.\n");
			}
		}
		
		
int main(void) {
	int n;
    for (n=0; n<20; n++) {
    use_make_long_array(n);
    }
	getchar();
	
 return 0;
}


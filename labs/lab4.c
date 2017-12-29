#include <stdio.h>

#define MAXLINE 1000 /* maximum length of a string */

/* Count the number of characters in s. */

long string_length(char s[]){

	long i;

	for(i = 0; s[i] != 0; i++){	   	   
	}
	
	return i;
}


/* Reverse the order of characters in 'source', write to 
   'target', Assume 'target' is big enough. */

void reverse(char source[], char target[]){

	int nc;
	int i;

	nc = string_length(source);
		
	for(i = 0; i < nc + 1; i++){
		target[nc - (i + 1)] = source[i];
	} 
	target[nc] = 0;
	

}


int main(void){
	char original[] = "This is a test: can you print me in reverse character order?";
	char reversed[MAXLINE];
	
	printf("%s\n", original);
	reverse(original, reversed);
	printf("%s\n", reversed);
	
	getchar();
	return 0;
	}
	

   


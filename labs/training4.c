#include <stdio.h>

long string_length(char s[]){

	long i;

	for(i = 0; s[i] != 0; i++){	   	   
	}
	
	return i;
}
	


int main(void)
{
	char s1[] = "Hello";
	char s2[] = "x";
	char s3[] = "line 1\tline2\n";
	
	printf("%20s | %s\n", "string_length(s)", "s");
	printf("%20ld | %s\n", string_length(s1), s1);
	printf("%20ld | %s\n", string_length(s2), s2);
	printf("%20ld | %s\n", string_length(s3), s3);
	
	return 0;
}


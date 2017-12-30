#include<stdio.h> 

int main( void ) 
{
	int which;
	which = 2;  /* This could be a user input,
		       or previous result ...*/
	switch(which)
	{
		case const_expr:
			statements
		case const_expr:
			statements
		default:
			statements
	}
	return 0;
}

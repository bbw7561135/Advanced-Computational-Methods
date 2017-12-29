#include <stdio.h>

int main(void)
{

	float s, debt, rate;
	float interest, total_interest, frac;
	int month;
	
	s = 1000;
	debt = s;
	rate = 0.03;
	
	for(month = 1; month < 25; month = month + 1)
	{
	
		interest = debt * rate;
		total_interest = total_interest + interest;
		debt = debt + interest;
		frac = (total_interest / s) * 100;
		printf("month %2i: debt=%4.2f, interest=%3.2f,", month, debt, interest);
		printf(" total_interest=%6.2f, frac=%6.2f%%\n", total_interest, frac);
			
	}
	
	getchar();
	return 0;	 
}
 


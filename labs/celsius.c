#include <stdio.h>

int main(void)
{
	int cels;
	float fahr;
	
	for(cels=-30;cels<31;cels=cels+2)
	{
	 fahr = cels * (9.0/5.0) + 32;
	 printf("%3d = %5.1f\n", cels, fahr);
	}
	 return 0;
}


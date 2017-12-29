#include <stdio.h>
#include <math.h>

#define XMIN 1
#define XMAX 10
#define N 10

int main(void)
{
	double x, y_sin;
	int i;

	for(i = 0; i < N; i = i + 1)
	{
		x = XMIN + (XMAX - XMIN)/(N-1) * i;
		y_sin = sin(x);
		printf("%f %f %f\n", x, y_sin);
	}
	return 0;
}



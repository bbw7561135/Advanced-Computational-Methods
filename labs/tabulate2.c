#include <stdio.h>
#include <math.h>

#define XMIN 1
#define XMAX 10
#define N 10

int main(void)
{
	double x, y1, y2;
	int i;

	for(i = 0; i < N; i = i + 1)
	{
		x = XMIN + (XMAX - XMIN)/(N-1.0) * i;
		y1 = sin(x);
		y2 = cos(x);
		printf("%f %f %f\n", x, y1, y2);
	}
	return 0;
}


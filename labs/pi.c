#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

clock_t startm, stopm;

#define RUNS 1
#define START if ((startm = clock()) == -1){ \
					printf("Error calling clock"); exit(1);}
#define STOP if ((stopm = clock()) == -1){ \
					printf("Error calling clock"); exit(1);}
#define PRINTTIME printf("%8.5f seconds used.",\
					(((double) stopm - startm)/CLOCKS_PER_SEC/RUNS));
#define N 10e6



double f(double x){
	
	double fx;

	fx = (double)pow((1 - x * x), 0.5);
	
	return fx;
	}


double pi(long n){
	
    /* a, b are the limits of the integral.
	   h is the interval spacing.
	   n is the number of sampling points*/
	
	double a, b, h;
	double s, x, pi;
	int i;
	
	a = -1;
	b =  1;
	h = (b - a)/n;
	
	s = 0.5 * f(a) + 0.5 * f(b);
	
	for(i = 1; i < n; i++){
		x = a + i * h;
		s = s + f(x);
		}
	
	pi = s * h * 2;
	
	return pi;
	
	}


int main(void){

	double pi_approximation;
	
	START;
	
	pi_approximation = pi(N);	 
		
	printf("Pi = %8.5f", pi_approximation);
		
	STOP;
	PRINTTIME;
	getchar();
	return 0;
	}


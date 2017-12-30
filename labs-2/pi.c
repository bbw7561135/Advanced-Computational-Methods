#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <time.h>

#define N 10e6

double f(double x);
double compute_pi(int n);

int main(void){
    double pi;
    
    pi = compute_pi(N);
    printf("pi = %f\n", pi);

    return 0;
}

double f(double x){
    double fx;

    fx = sqrt(1 - x * x);

    return fx;
}

double compute_pi(int n){
    int i;
    double a, b;    
    double h, x, I, pi;

    /* integration interval */
    a = -1;
    b =  1;
    h = (b - a)/N;
    I = 0.5 * f(a) + 0.5 * f(b);

    for (i = 1; i < N; i++){   
        x = a + i * h;
        I += f(x);
    }

    pi = 2 * h * I;

    return pi;
}
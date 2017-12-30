#include <stdio.h>
#include <math.h>

#define XMIN 1
#define XMAX 10

int main(void){
    int i, N;
    double x, y;

    N = 10;
    for (i = XMIN-1; i != XMAX; i++){
        x = XMIN + (XMAX - XMIN) / (N-1) * i;
        y = sin(x);
        printf("%f %f\n", x, y);
    }

/*
    i = XMIN-1;
    while (i != XMAX){
        x = XMIN + (XMAX - XMIN) / (N-1) * i;
        y = sin(x);
        printf("%f %f\n", x, y);
        i++;
    }
*/

    return 0;
}
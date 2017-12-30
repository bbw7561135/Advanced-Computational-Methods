#include <stdio.h>
#include <math.h>

#define XMIN 1
#define XMAX 10

int main(void){
    int i, N;
    double x, y, z;

    N = 10;
    for (i = XMIN-1; i != XMAX; i++){
        x = XMIN + (XMAX - XMIN) / (N-1) * i;
        y = sin(x);
        z = cos(x);
        printf("%f %f %f\n", x, y, z);
    }

    return 0;
}
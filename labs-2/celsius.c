#include <stdio.h>

int main(void){
    int C;
    double F;

    printf("Celcius\t\tFahrenheit\n");
    for (C = -30; C < 31; C=C+2){
        F = C * (9.0/5.0) + 32;
        printf("%7d\t=\t%5.1f\n", C, F);
    }

    return 0;
}
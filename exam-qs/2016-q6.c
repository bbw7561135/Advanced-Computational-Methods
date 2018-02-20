#include <stdio.h>

double compute_mean(double *sample, int length);

int main(void){
    double data1[6] = {23.2, 31.5, 16.9, 27.5, 25.4, 28.6};
    double data2[6] = {10.0, 20.0};

    printf("The mean if %f.\n", compute_mean(data1, 6));
    printf("The mean if %f.\n", compute_mean(data2, 2));

    return 0;
}

double compute_mean(double *sample, int length){
    int i;
    double sum, mean;
    
    sum = 0;
    for (i = 0; i < length; i++){
        sum += sample[i]; 
    }

    mean = sum/length;

    return mean;
}

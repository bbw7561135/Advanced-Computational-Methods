#include <stdio.h>

// the array has to be a pointer.. why?
double compute_mean(double *array, int n){
    int i;
    double mean, sum;
    
    sum = 0;
    for (i = 0; i < n; i++){
        sum = sum + *(array + i);
    }
    
    mean = sum / n;  
    return mean;
}

int main(void)
{
 double data1[6] = {23.2, 31.5, 16.9, 27.5, 25.4, 28.6};
 double data2[6] = {10.0, 20.0};
 printf("The mean is %f.\n", compute_mean(data1, 6));
 printf("The mean is %f.\n", compute_mean(data2, 2));
 return 0;
}
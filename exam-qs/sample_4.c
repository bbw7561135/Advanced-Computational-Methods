#include <stdio.h>
#include <math.h>

double standard_deviation(double a, double b, double c, double d){

    double mean, std_dev;

    mean = (a + b + c + d) * 0.25;

    std_dev = sqrt(0.25 * ( (a - mean) * (a - mean) + (b - mean) * (b - mean) +
        (c - mean) * (c - mean) + (d - mean) * (d - mean) ));

    return std_dev;
}

int main(void) {

    double a, b, c, d, stddev;

    a = 16.3;
    b = 24.2;
    c = 733;
    d = 12.27;

    stddev = standard_deviation(a, b, c, d);
    printf("Standard deviation of %f, %f, %f, %f is %f\n", a, b, c, d, stddev);

    return 0;
}
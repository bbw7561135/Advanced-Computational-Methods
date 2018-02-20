#include <stdio.h>

void grade(double x);

int main(void){
    grade(54.0);
    grade(100.0);

    return 0;
}

void grade(double x){
    if (x > 90){
        printf("A\n");
    } else if (x >= 80 && x < 90){
        printf("B\n");
    } else if (x >= 70 && x < 80){
        printf("C\n");
    } else if (x >= 60 && x < 70){
        printf("D\n");
    } else {
        printf("F\n");
    }
}

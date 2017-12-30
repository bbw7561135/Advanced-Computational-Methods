#include <stdio.h>

void grade(double grade_val){
    if (grade_val >= 90){
        printf("A\n");
    }
    else if (grade_val < 90 && grade_val >= 80){
        printf("B\n");
    }
    else if (grade_val < 80 && grade_val >= 70){
        printf("C\n");
    }
    else if (grade_val < 70 && grade_val >= 60){
        printf("D\n");
    }
    else{
        printf("F\n");
    }
}

int main(void) {
 grade(54.);
 grade(100.);
 return 0;
}
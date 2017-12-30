#include <stdio.h>

int main(void){
    int month;
    double s, debt, rate, interest, total_interest, frac;

    s = 1000;
    debt = s;
    rate = 0.03;

    for (month = 1; month < 25; month++){
        interest = debt * rate;
        total_interest += interest;
        debt += interest;
        frac = (total_interest/s) * 100;
        printf("Month %2d: debt=%7.2f, interest=%5.2f,", month, debt, interest);
        printf(" total interest=%5.2f, frac=%2.2f%%\n", total_interest, frac);
    }

    return 0;
}
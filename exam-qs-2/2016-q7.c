#include <stdlib.h>
#include <stdio.h>

void print( int *a, int n){
    int = 0;
    for (i = 0; i < n; i++){
        printf("%d, ", a[i]);
    }
}

int main(void){
    int n = 5;
    int *a = zero_array(n);
    print(a, n);
    delete_array(a);

    return 0;
}
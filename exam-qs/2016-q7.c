#include <stdio.h>
#include <stdlib.h>


int* zero_array(int n){

    int i;
    int *a;

    // create a of appropriate length
    a = (int *)malloc(sizeof(int) * n);

    // set the values of a to be zero
    for (i = 0; i < n; i++){
        *(a + i) = 0;
    }

    return a;
}

void delete_array(int* a){
    // free the array from memory
    free(a);
}

void print(int *a, int n){
    int i = 0;
    for (i = 0; i < n; i++){
        printf("%d ", a[i]);
    }
}

int main() {
    int n = 5;
    int* a = zero_array(n);
    print(a, n);
    delete_array(a);
    return 0;
}
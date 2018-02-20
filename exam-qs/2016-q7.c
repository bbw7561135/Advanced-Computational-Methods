#include <stdlib.h>
#include <stdio.h>

void print(int *a, int n);
int* zero_array(int n);
void delete_array(int *a);

int main(void){
    int n = 5;
    int *a = zero_array(n);
    print(a, n);
    delete_array(a);

    return 0;
}

void print(int *a, int n){
    int i;
    for (i = 0; i < n; i++){
        printf("%d, ", a[i]);
    }
}

int* zero_array(int n){
    int i;
    int *zeros = malloc(sizeof(int) * n);

    for (i = 0; i < n; i++){
        zeros[i] = 0;
    }

    return zeros;
}

void delete_array(int *a){
    free(a);
}


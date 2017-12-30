#include <stdlib.h>
#include <stdio.h>

#define N 20  // number of random numbers 

void print_int_array(int *a, int length, int k);
void swap(int *pa, int *pb);
void bubble(int *A, int length);

int main(void) {
    
    int i;
    int data[N];

    /* initialises array with random integers between 0 and 999 */ 
    for (i = 0; i < N; i++) {
        data[i] = (int)((rand()+0.5)/(double)RAND_MAX * 999); 
    }

    printf("Unsorted data:\n");
    print_int_array(data, N, 5);

    bubble(data,N);
    printf("Sorted data:\n");
    print_int_array(data, N, 5);
    
    return 0; 
}

void print_int_array(int *a, int length, int k) {
    
    int i;
    
    
    if (2 * k < length) { /* for long arrays, print first and last k values */
        for (i = 0; i < k; i++){
            printf("a[%d] = %3d, ",i,a[i]);
        }

        printf("   . . . .   ");

        for (i = length - k; i < length; i++){
        printf("a[%d] = %3d, ", i, a[i]);
        }
    } else{ /* for short arrays, print all the data */
        for (i = 0; i < length; i++ ){
            printf("a[%d] = %3d, ", i, a[i]);
        }
    }
    
    printf("\n");
}

void swap(int *pa, int *pb){
    int temp;

    temp = *pa;  // temp points to a
    *pa = *pb;    // a points to b
    *pb = temp;  // b points to temp which points to a
}

void bubble(int *A, int length){
    int a, b;
    int n = length - 1;

    for (a = 0; a <= n; a++){
        for (b = n; b > a; b--){
            if (A[b-1] > A[b]){
                swap(&A[b], &A[b-1]);
            }
        }
    }
}
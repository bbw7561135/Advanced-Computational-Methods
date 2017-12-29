#include <stdio.h>
#include <stdlib.h>

#define N 20 /* number of random numbers */

void swap(int *pa, int *pb){

    int temp;

    temp = *pa;
    *pa = *pb;
    *pb = temp;

}

/* Given an Array A of int, use bubble sort to sort elements in A (in place).*/
void bubble(int A[], int length) {

    int i, a, b;  // counter variables
    int n;   // length variable

    n = length - 1;
    for (a = 0; a <= n; a++){
        for (b = n; b > a; b--){
            if (A[b-1] > A[b]){
                swap(&A[b-1], &A[b]);
            }
        }
    }
}


/* Given an array of int 'a' of length 'length', print the first and last 
'k' values */
void print_int_array(int a[], int length, int k) {
    
    int i;
    
    /* longish array; only printing first and last k values */
    if (2*k < length) {
        for (i=0; i<k; i++){
            printf("a[%d]=%3d, ",i,a[i]);
        }

        printf("   . . . .   ");

        for (i=length-k; i<length; i++){
        printf("a[%d]=%3d, ",i,a[i]);
        }
    }

    /* for very short arrays, print all the data */
    else { 
        for (i=0; i<length; i++ ){
            printf("a[%d]=%3d, ",i,a[i]);
        }
    }
    
    printf("\n");

}


int main(void) {
    
    int i;
    int data[N];

    /* initialises array with random integers between 0 and 999 */ 
    for (i=0; i < N; i++) {
        data[i] = (int) ((rand()+0.5)/(double) RAND_MAX * 999); 
    }

    /* print data (at least beginning and end) */
    print_int_array(data,N,5);

    /* actual sorting: */
    bubble(data,N);
    printf("Data is now sorted:\n");

    /* print data (at least beginning and end) */
    print_int_array(data,N,5);
    
    return 0; 
}

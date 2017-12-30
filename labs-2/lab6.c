#include <stdlib.h>
#include <stdio.h>

void use_fib_array(long N);
long* make_fib_array(long n);

int main(void){    
    use_fib_array(10);

    return 0;
}

void use_fib_array(long N){
    long i, n; 
    long *fib_array;

    for (n = 2; n <= N; n++){
        fib_array = make_fib_array(n);

        printf("fib(%2ld): [", n);
        for (i = 0; i < n; i++){
            printf(" %ld", fib_array[i]);
        }
        printf(" ]\n");

        free(fib_array);
    }
}

long* make_fib_array(long n){
    int i;
    long *fib = (long *)malloc(sizeof(long) * n);

    if (fib == NULL){
        printf("Memory allocation failed.");
        return NULL;
    } 

    fib[0] = 0;
    fib[1] = 1;

    for (i = 2; i < n; i++){
        fib[i] = fib[i-1] + fib[i-2];
    }

    return fib; 
}

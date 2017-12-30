#include <stdlib.h>
#include <stdio.h>

void use_make_long_array(long n);
long* make_long_array(long n);

int main(void){
    long n;
    
    for (n = 0; n < 20; n++){
        use_make_long_array(n);
    }

    return 0;
}

void use_make_long_array(long n){
    int i;
    long *p = make_long_array(n);

    printf("In use_make_long_array(%ld)\n", n);

    if (p != NULL){
        for (i = 0; i < n; i++){
            p[i] = i + 42;  // write something to the array
        }
    
        free(p);
    } else{
        printf("Error - memory allocation failed.");
    }
}

long* make_long_array(long n){
    long *p = (long *)malloc(sizeof(long) * n);

    if (p == NULL){
        printf("Memory allocation failed.");
        return NULL;
    }

    return p;
}
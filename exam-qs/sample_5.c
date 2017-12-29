#include <stdio.h>
#include <stdlib.h>

long* populate_array(long* array, long N){

    int i;
    
    for (i = 0; i < N; i++){
        *(array + i) = 2 * i + 2;
    }

    return array;
}


int main(void) {

    long size = 10;
    long i;
    long *array = malloc(sizeof(long) * size);

    populate_array(array, size);
    for(i=0; i < size; i++) {
        printf("array[%04ld] = %ld\n", i, array[i]);
    }

    free(array);

    return 0;
}
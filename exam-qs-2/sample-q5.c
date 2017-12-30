#include <stdlib.h>
#include <stdio.h>

long* populate_array(long *array, long size);

int main(void){
    long size = 10;
    long i;

    long *array = malloc(sizeof(long) * size);

    populate_array(array, size);

    for (i = 0; i < size; i++){
        printf("array[%04ld] = %ld\n", i, array[i]);
    }

    free(array);
    return 0;
}

long* populate_array(long *array, long size){
    int i;

    for (i = 0; i <= size; i++){
        array[i] = i * 2 + 2;
    }

    return array;
}

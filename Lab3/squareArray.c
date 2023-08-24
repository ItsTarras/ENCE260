//squareArray.c
//Arrays
#include <stdio.h>
#include <stdint.h>
//Square the Array


void squareArray(int32_t array[], size_t n)
{
    for (size_t i = 0; i < n; i++) {
        array[i] = array[i] * array[i];
    }
}


int main(void)
{
    int32_t array[3] = {1, 2, 3};
    squareArray(array, 3);
    printf("%d\n", array[0]);
    printf("%d\n", array[1]);
    printf("%d\n", array[2]);
    return 1;
}
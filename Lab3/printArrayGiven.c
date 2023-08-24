//Arrays
#include <stdio.h>
#include <stdint.h>

//Takes an array of length n, and prints it, one element per line.
void printArray(int32_t array[], size_t n)
{
    for (size_t i = 0; i < n; i++) {
        printf("%i\n", array[i]);
    }
}

int main(void)
{
    int32_t array[3] = {1, 2, 3};
    printArray(array, 3);
    return 1;
}
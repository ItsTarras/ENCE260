#include <stdio.h>
#include <stdint.h>
#include <stdbool.h>


int32_t index2d(int32_t* array, size_t width, size_t i, size_t j)
{
    return *(array + i * width + j);
}

int main(void) {

int32_t array[3][2] = {{1, 2}, 
                       {2, 4},
                       {8, 3}};
printf("%d\n", index2d((int32_t*)array, 2, 2, 1));
}
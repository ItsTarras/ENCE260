#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>


int16_t* ramp(size_t n)
{
    int16_t* ptr = calloc(n, sizeof(int16_t));

    //Create an array of size n
    for (int i = 0; i < n; i++) {
        ptr[i] = (i + 1);
    }

    return ptr;
}



int main(void)
{
    int16_t* data = ramp(5);
for (size_t i = 0; i < 5; i++) {
    printf("%d ", data[i]);
}
free(data);
}
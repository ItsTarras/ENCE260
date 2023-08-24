#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

uint32_t square(int32_t x)
{
    //Returns the square of x.
    return x*x;
}

int main(void)
{
    printf("%u\n", square(3));
    return EXIT_SUCCESS;
}
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

void printNumber(int32_t x)
{
    printf("%d\n", x);
}

//Example main function that utilises the code.
int main(void)
{
    printNumber(3);
    return EXIT_SUCCESS;
}
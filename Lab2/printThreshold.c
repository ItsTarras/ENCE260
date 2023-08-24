#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

void printThreshold(uint32_t x)
{
    if (x < 100) 
    {
        printf("x is less than 100\n");
    } 
    else 
    {
        printf("x is not less than 100\n");
    }
}

//Example tests.
int main(void)
{
    printThreshold(50);
    printThreshold(100);
    printThreshold(600);
    return EXIT_SUCCESS;
}
#include <stdint.h>
#include <stdbool.h>
#include <stdio.h>
#include <math.h>
#include <stdlib.h>

void printViaPtr(int16_t* intPtr)
{
    printf("%d\n", *intPtr);
}


void print2Ints(int16_t number1, int16_t number2)
{
    printViaPtr(&number1);
    printViaPtr(&number2);
}

int main(void)
{
    print2Ints(11, -93);
    return 1;
}
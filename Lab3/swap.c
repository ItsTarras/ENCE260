#include <stdint.h>
#include <stdbool.h>
#include <stdio.h>
#include <math.h>
#include <stdlib.h>


void swap(uint8_t* address1, uint8_t* address2)
{
    uint8_t tempValue;
    tempValue = *address1;
    *address1 = *address2;
    *address2 = tempValue;
}


int main(void)
{
    uint8_t i = 10, j = 20;
    swap(&i, &j);
    printf("%d %d\n", i, j);
    return 1;
}
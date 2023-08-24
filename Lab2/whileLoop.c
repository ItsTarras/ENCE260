#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <stdbool.h>

uint8_t intLog2(uint32_t value)
{
    uint8_t count = 0;
    uint8_t two = 2;
    
    while (two <= value)
    {
        count++;
        two = two * 2;
    }
    
    return count;
}

int main(void)
{
    printf("%d\n", intLog2(32));
    printf("%d\n", intLog2(31));
    return EXIT_SUCCESS;
}
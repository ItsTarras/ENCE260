#include <stdint.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>


void printSquares(uint32_t n)
{
    uint8_t count = 1;
    for (int i = 0; count <= n; i++) {
        printf("%d\n", count * count);
        count++;
    }
}

int main(void)
{
    printSquares(4);
    printSquares(1);
    return EXIT_SUCCESS;
}
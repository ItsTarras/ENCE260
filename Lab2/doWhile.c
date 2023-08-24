#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <stdbool.h>

int main(void)
{
    uint8_t count = 0;
    char c;

    do {
        c = getchar();
        count++;
    } while (c != 'q');

    printf("%d\n", count);
    return EXIT_SUCCESS;
}
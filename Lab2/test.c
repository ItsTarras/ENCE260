#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

int main(void)
{
    int32_t y = 17;
    if (y >= 10) {
        int8_t x = 10;
    } else {
        int8_t x = y;
    }

    printf("%d\n", x);
}

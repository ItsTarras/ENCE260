#include <stdint.h>
#include <stdbool.h>
#include <stdio.h>

int main(void)
{
    uint8_t i;
    bool isDone = false;
    for (i = 0; !isDone; i++) {
        if (i == 10) {
            isDone = true;
        }
    }
    printf("%d\n", i);
}
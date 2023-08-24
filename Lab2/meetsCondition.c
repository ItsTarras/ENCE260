#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

void meetsCondition(int64_t x)
{
    if (x < 0) {
        printf("%s\n", (x % 2 != 0) ? "true" : "false");
    } else {
        printf("%s\n", (x % 2 == 0) ? "true" : "false");
    }
}

int main(void)
{
    meetsCondition(1);
    meetsCondition(2);
    meetsCondition(0);
    meetsCondition(-2);
    meetsCondition(-3);
    return EXIT_SUCCESS;
}
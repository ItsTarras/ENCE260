#include <stdint.h>
#include <stdio.h>

int32_t uninitialisedGlobal;
int32_t globalNum = 20;

int main(void)
{

    char c;

    printf("Address of variable c: %p\n", (void *)&c);
    printf("Address of variable globalNum: %p\n", (void *)&globalNum);
    printf("Address of main function: %p\n", (void *)&main);
    printf("Address of the array uninitialisedGlobal: %p\n", (void *)&uninitialisedGlobal);

    return 0;
}

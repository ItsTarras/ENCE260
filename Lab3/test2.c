#include <stdio.h>
#include <stdint.h>

int main(void)
{
    size_t objSize;
    size_t obj2Size;

    objSize = sizeof(uint16_t*);
    obj2Size = sizeof(uint32_t*);
    printf("The object size is %zu bytes\n", objSize);
    printf("The second object size is %zu bytes\n", obj2Size);
}
#include <stdio.h>
#include <stdint.h>

void processBuffer(void* buffer, size_t numElements, size_t elementSize, void (*processFunc)(void*))
{
    for (int i = 0; i < numElements; i++) {
        void* ptr = (char*)buffer + i * elementSize;
        processFunc(ptr);
    }
}


void processU64(void* element)
{
    printf("%lu\n", *(uint64_t*)element);
}

int main(void)
{
    uint64_t arr[11] = {0, 2, 4, 8, 16, 32, 64, 128, 256, 512, 1024};
    processBuffer((void*)arr, 11, sizeof(uint64_t), &processU64);
}
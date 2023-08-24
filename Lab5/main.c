#include <stdio.h>
#include <stdint.h>

int main(int argc, char** argv)
{
    for (int i = 0; i < argc; i++) {
        printf("[%i] %s\n", i, argv[i]);
    }
}
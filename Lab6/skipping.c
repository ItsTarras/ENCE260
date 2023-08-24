#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include <string.h>

char* skipping(const char* string, size_t n)
{

    size_t resulting_length = strlen(string) + 1 / 2;

    //Allocate an extra piece of memory for the null teminator.
    char* ptr = calloc(resulting_length + 1, sizeof(char));
    
    for (int i = 0; i * 2 < strlen(string); i++) {
        ptr[i] = string[i * 2];
    }

    return ptr;
}

int main(void)
{
char* s = skipping("0123456789", 10);
printf("%s\n", s);
free(s);
}
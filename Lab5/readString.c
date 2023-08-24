#include <stdint.h>
#include <stdbool.h>
#include <stdio.h>
#include <ctype.h>



size_t readString(char* string, size_t maxStringLength)
{
    size_t i;
    //Start reading the string:
    for(i = 0; i < maxStringLength; i++) {
        char c;
        c = getchar();

        if (c != '\n' && c != EOF) {
            string[i] = c;
        } else {
            string[i] = '\0';
            return i;
        }
    };

    return i;
}



int main(void)
{
    size_t len=0;
    char string[11];
    len = readString(string, 10);
    printf("Read String (%s) of length (%zu)\n", string, len);
}
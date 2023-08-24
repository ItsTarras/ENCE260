#include <stdio.h>
#include <stdint.h>
#include <ctype.h>

int main(void)
{
    int c;
    while (c != EOF) {
        c = getchar();

        if (c == 10) {
            printf("'\\n'\n");
        }

        else if (isalpha(c)) {
            printf("'%c': Letter %d\n", c, toupper(c) - 64);
        }

        else if (isdigit(c)) {
            printf("'%c': Digit %c\n", c, c);
        }

        else if (c != EOF) {
            printf("'%c': Non-alphanumeric\n", c);
        }
    };
}

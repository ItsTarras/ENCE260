#include <stdlib.h>
#include <stdio.h>
#include <stdint.h>
#include <stdbool.h>
#include <ctype.h>

int compar(const void *number1, const void *number2)
{
    uint64_t i = *((uint64_t*)number1);
    uint64_t j = *((uint64_t*)number2);


    if (i > j) {
        return 1;
    } else if (i == j) {
        return 0;
    } else {
        return -1;
    }

}


int main(int argc, char** argv)
{
    //Start by getting the inputs.
    uint64_t numberArray[10];
    int i = 0;

    while (i < 10) {
        uint64_t number;
        if (scanf("%lu", &number) == 1) {
            //add to the arrays.
            numberArray[i] = number;
            i++;
        }
    }
    //reset the index.

    qsort(numberArray, 10, sizeof(uint64_t), compar);

    for(i = 0; i < 10; i++) {
        printf("%lu\n", numberArray[i]);
    }

    return EXIT_SUCCESS;
}



#include <stdint.h>
#include <stdbool.h>
#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(void)
{
    int32_t number1;
    int32_t number2;
    int32_t* ptr = NULL;
    int32_t* ptr2 = NULL;

    //Scans user input, and places numbers 1 and 2 into a couple of addresses.
    scanf("%i %i", &number1, &number2);

    //define pointers as new values.
    ptr = &number1;
    ptr2 = &number2;

    int32_t value = *ptr + *ptr2;
    printf("%i\n", value);
}
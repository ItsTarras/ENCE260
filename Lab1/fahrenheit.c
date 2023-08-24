/*Converts from Fahrenheit to Ceclius*/

#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

#define FREEZING_PT 32
#define SCALE_FACTOR (5 / 9)

int main(void)
{
    int32_t fahrenheit = 70;
    int32_t celcius = 0;

    celcius = (fahrenheit - FREEZING_PT) * SCALE_FACTOR;

    printf("%d degrees Fahrenheit is equivalent to %d degrees Ceclius\n", fahrenheit, celcius);
    return EXIT_SUCCESS;
}
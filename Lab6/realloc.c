#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
    int16_t* numbers = calloc(10, sizeof(uint16_t));
    int milestone = 10;
    int count = 0;
    int16_t number = 0;

    while (number != -10000) {
        //scan for the user input.
        scanf("%hd", &number);

        if(number!= -10000) {
            //Check if it needs reallocating;
            numbers[count] = number;
            count++;
            
            if (count >= milestone) {
                milestone += 10;
                numbers = realloc(numbers, milestone*sizeof(uint16_t));
            }
            
        }
    }

    printf("Numbers read = %i\n", count);
    free(numbers);
}
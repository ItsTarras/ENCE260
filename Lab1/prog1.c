/*The first C program I will ever write.*/

#include <stdio.h>
#include <stdint.h>

int main(void)
{
    //Declare variables
    int32_t number1;
    int32_t number2;
    int32_t total;

    //Now combine the numbers
    number1 = 10;
    number2 = 20;
    total = number1 + number2;
    printf('The sum of %d and %d is %d\n', number1, number2, total);

    return 0;
}
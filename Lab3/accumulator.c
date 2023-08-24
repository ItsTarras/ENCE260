#include <stdint.h>
#include <stdio.h>

//Adds together all the values, and prints the output.
//It should retain the value between calls.
int32_t accumulator(int32_t value)
{
    static int32_t accumulator_sum=0;
    accumulator_sum += value;
    return accumulator_sum;
}

int main(void)
{
    accumulator(3);
    accumulator(2);
    printf("%d\n", accumulator(5));
}
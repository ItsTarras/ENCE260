#include <stdint.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

void printPrimesInRange(uint32_t n1, uint32_t n2)
{
    for (uint32_t i = n1; i <= n2; i++) {
        bool isPrime = true;

        //Checks if the number is prime at all.
        for (uint32_t j = 2; j <= i-1; j++) {
            //If the number is divisible by ANYTHING.
            if (i % j == 0) {
                isPrime = false;
            }
        }

        //If the number is prime.
        if (isPrime) {
            printf("%i\n", i);
        }
    }
}


int main(void)
{

    printPrimesInRange(2, 40);
    printPrimesInRange(60, 65);
    printPrimesInRange(100, 100);
    printPrimesInRange(100, 101);
    return EXIT_SUCCESS;
}
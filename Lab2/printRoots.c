#include <stdint.h>
#include <stdbool.h>
#include <stdio.h>
#include <math.h>
#include <stdlib.h>


void printRoots(float a, float b, float c)
{
    //If the formula is not quadratic (a is 0)
    if (a == 0)
    {
        printf("%s\n", "Not a quadratic");
    } else {


        //Calculate the solutions using the quadratic formula.
        double solution1;
        double solution2;

        solution1 = ((-b) - sqrt((b * b) - (4*(a * c)))) / (2 * a);
        solution2 = ((-b) + sqrt((b * b) - (4*(a * c)))) / (2 * a);


        //Check if either of the solutions are nan.
        if(isnan(solution1) || isnan(solution2)) {
            printf("Imaginary roots\n");
        }
        else {
            //Print in order of smallest to largest.
            if (solution1 > solution2) {
                printf("Roots are %.4f and %.4f\n", solution2, solution1);
            }
            else {
                printf("Roots are %.4f and %.4f\n", solution1, solution2);
            }
        }
    }
}


int main(void)
{
    printRoots(1, -4, 3);
    printRoots(1, 2, 3);
    printRoots(0, 2, 3);
    printRoots(1, 0, -1);
    return EXIT_SUCCESS;
}
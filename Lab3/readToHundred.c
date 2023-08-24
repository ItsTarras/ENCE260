//Arrays
#include <stdio.h>
#include <stdint.h>

void printNumbers()
{
    static int32_t count = 0;
    static size_t i = 0;
    static int32_t numArray[100];
    int32_t number;



    //If the scan is not -1
    while ((number != -1) && (count < 100)) {

        //Run the scan
        scanf("%i", &number);
        
        if (number != -1) {
            numArray[i] = number;

            //Incriment the values
            i++;
            count += 1;
        }
        

    }

    //Once the number is -1 or count is more than 100.
    printf("%i numbers entered\n", count);
    for(size_t j = 0; j < i; j++) {
        printf("%i\n", numArray[j]);
    }

}

int main(void)
{
    printNumbers();
}
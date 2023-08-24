#include <stdio.h>
#include <stdint.h>

void printData(int8_t** data, size_t numberLines)
{
    for (size_t i=0; i < numberLines; i++) {
        printf("Line %zu, first element is %d\n", i, data[i][0]);
    }
}

int main()
{
    int8_t dataline1[] = {1, 2, 3, 4, 5};
    int8_t dataline2[] = {6, 7, 8, 9, 10, 11, 12};
    int8_t* datalines[] = {dataline1, dataline2};

    printData(datalines, 2);
} 
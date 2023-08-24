#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>


typedef struct {
    char random;
    int8_t junk;
} Data_t;


Data_t* newData(char random, int8_t junk)
{
    Data_t* ptr = malloc(sizeof(Data_t));
    ptr->junk = junk;
    ptr->random = random;
    return ptr;
}


void freeData(Data_t* data)
{
    free(data);
}
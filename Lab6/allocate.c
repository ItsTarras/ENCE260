#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>


int main(int argc, char** argv)
{
    //Creates allocated memory for value.
    uint64_t* ptr = malloc(sizeof(uint64_t));
    
    //Scans the input, and after ensuring it is an int, places it in ptr.
    scanf("%lu", ptr);

    //Prints the value in ptr.
    printf("%ld\n", *ptr);

    //Deallocates the memory, as we are done with it.
    free(ptr);
}
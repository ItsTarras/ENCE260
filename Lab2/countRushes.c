#include <stdint.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>



uint32_t countRushes(float screeHeight, float rushHeight, float slideBack)
{
    float currentHeight = 0;
    uint32_t count = 0;
    
    while (currentHeight < screeHeight)
    {
        count += 1;
        currentHeight += rushHeight;
        
        if (currentHeight < screeHeight)
        {
            currentHeight -= slideBack;
        }
    }
    
    return count;
}


int main(void)
{
    printf("%d\n", countRushes(100, 50, 10));
    printf("%d\n", countRushes(100, 100, 90)); 
    printf("%d\n", countRushes(0, 100, 30));
    return EXIT_SUCCESS;
}
#include <stdio.h>
#include <stdbool.h>
#include <stdint.h>



typedef struct {
    float lat;
    float lon;
    float alt;
} Coord_t;

#define SEALEVEL 0;

bool isBelowSeaLevel(const Coord_t coord)
{
    return coord.alt < SEALEVEL;
}

uint64_t numBelowSeaLevel(const Coord_t coords[], size_t n)
{
    uint64_t numberBelow = 0;
    for(size_t i = 0; i < n; i++) {
        if (isBelowSeaLevel(coords[i])) {
            numberBelow++;
        }
    }
    
    return numberBelow;
}


int main(void) {
    Coord_t everest = {
    .lat = 27.988056,
    .lon = 86.925278,
    .alt = 8848.86
};
printf(isBelowSeaLevel(everest) ? "true\n" : "false\n");


Coord_t coords[5];
for (size_t i = 0; i < 5; i++) {
    coords[i].lat = ((float)i - 2)*15;
    coords[i].lon = ((float)i - 2)*-15;
    coords[i].alt = ((float)i - 2)*100;
}
printf("%lu\n", numBelowSeaLevel(coords, 5));
}
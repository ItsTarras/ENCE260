#include "rect.h"
#include <stdio.h>
#include <stdbool.h>
#include <stdint.h>


//Create the functions.
void rect_set(Rect_t* rect, uint32_t width, uint32_t height)
{
    rect -> width = width;
    rect -> height = height;
}


uint32_t rect_area(const Rect_t* rect)
{
    return (rect->height * rect->width);
}

uint32_t rect_perimeter(const Rect_t* rect)
{
    return ((2 * rect-> height) + (2 * rect -> width));
}
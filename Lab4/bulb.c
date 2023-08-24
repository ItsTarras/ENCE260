#include "bulb.h"
#include <stdio.h>
#include <stdint.h>

//Declare a space for models, and initialise their values to 0.
static uint16_t models[256] = { 0 };

//Create a new light bulb with the model.
Bulb_t bulb_sellModel(uint8_t model)
{
    Bulb_t newBulb;
    newBulb.serial = models[model];
    newBulb.model = model;
    models[model]++;
    return newBulb;
}

void bulb_display(Bulb_t bulb)
{
    printf("Model %u, SN%06u\n", bulb.model, bulb.serial);
}

uint64_t bulb_numSold(uint8_t model)
{
    return models[model];
}
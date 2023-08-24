#include "temp.h"
#include <stdint.h>
#include <stdio.h>
static float converter(const Temp_t* temperature, Unit_t unit)
{
    switch (unit) {
        case CELSIUS:
           
            if (temperature->unit == KELVIN) {
                return temperature->temperature - 273.15;
                break;
            }

            if (temperature->unit == FAHRENHEIT) {
                return ((temperature->temperature - 32) * 5/9);
            }
            break;
        
        case FAHRENHEIT:
            if (temperature->unit == CELSIUS) {
                return ((temperature->temperature * 9/5) + 32);
                break;
            }
            
            if (temperature->unit == KELVIN) {
                return (((temperature->temperature - 273.15) * 9/5) +32);
                break;
            }
            break;

        case KELVIN:
            if (temperature->unit == CELSIUS) {
                return (temperature->temperature + 273.15);
                break;
            }

            if (temperature->unit == FAHRENHEIT) {
                return (((temperature->temperature - 32) * 5/9) + 273.15);
                break;
            }
            break;
        
    }
    return temperature->temperature;
}


void temp_set(Temp_t* temp, float value, Unit_t unit)
{
    temp->temperature = value;
    temp->unit = unit;
}


//Print it out in the proper unit.
void temp_print(const Temp_t* temp, Unit_t unit)
{
    float value = converter(temp, unit);
    //Print variables and statements
    if (unit == FAHRENHEIT) {
        printf("%.2f deg F\n", value);
    }

    if (unit == CELSIUS) {
        printf("%.2f deg C\n", value);
    }

    if (unit == KELVIN) {
        printf("%.2f K\n", value);
    }
}

#include "lift.h"
#include <stdio.h>
#include <stdbool.h>
#include <stdint.h>


//Function declarations.
Lift_t lift_init(uint8_t maxPassengers, int16_t startFloor)
{
    Lift_t newLift;
    newLift.maxPassengers = maxPassengers;
    newLift.currentFloor = startFloor;
    newLift.currentPassengers = 0;

    return newLift;
}

void lift_onboard(Lift_t* lift, uint8_t peopleOff, uint8_t peopleOn)
{
    lift->currentPassengers += (peopleOn - peopleOff);
}

int16_t lift_goToFloor(Lift_t* lift, int16_t floor)
{
    if ((lift-> currentPassengers) <= (lift->maxPassengers)) {
        lift->currentFloor = floor;
    }

    return lift->currentFloor;
}
#include <stdio.h>
#include <stdbool.h>
#include <stdint.h>


typedef struct {
    int32_t x;
    int32_t y;
} Vec_t;

typedef struct {
    Vec_t position;
    Vec_t velocity;
} Particle_t;

Vec_t vecSum(Vec_t v1, Vec_t v2)
{
    Vec_t newVector;
    newVector.x = v1.x + v2.x;
    newVector.y = v1.y + v2.y;

    return newVector;
}

void setVelocity(Particle_t* particle, int32_t vx, int32_t vy)
{
    (*particle).velocity.x = vx;
    (*particle).velocity.y = vy;
}

void updatePosition(Particle_t* particle)
{
    Vec_t newVec = vecSum((*particle).position, (*particle).velocity);
    (*particle).position = newVec;
}



int main(void)
{
Particle_t mote = {{0, 1}, {0, 0}};
setVelocity(&mote, 3, 4);
updatePosition(&mote);
printf("v = %d, %d\n", mote.velocity.x, mote.velocity.y);
printf("x = %d, y = %d\n", mote.position.x, mote.position.y);
}
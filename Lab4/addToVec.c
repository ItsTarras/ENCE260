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


void addToVec(Vec_t* v1, Vec_t v2)
{
    v1->x += v2.x;
    v1->y += v2.y;
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
    Vec_t v1 = {1, 1};
Vec_t v2 = {2, 3};
addToVec(&v1, v2);
printf("%d, %d\n", v1.x, v1.y);
}
#include <stdio.h>
#include <stdint.h>


typedef struct Meas_s Meas_t;

struct Meas_s {
    double value;
    void (*dispFunc)(const Meas_t*);
};


void meas_print(const Meas_t* meas)
{
    //Gets the function from meas, and uses meas as an argument
    meas->dispFunc(meas);
}

void disp(const Meas_t* meas)
{
    printf("%.3f m/s\n", meas->value);
}


int main(int argc, char** argv)
{
    Meas_t meas = {2.7777, &disp};
    meas_print(&meas);
}
#include <stdio.h>
#include <stdint.h>

typedef struct {
    uint16_t x;
    uint16_t y;
    uint16_t width;
    uint16_t height;

    //Function pointer that takes nothing as an argument.
    void (*callback)(void);
} Button_t;

void callback(void)
{
    
}

Button_t button_init(uint16_t x, uint16_t y, uint16_t width, uint16_t height, void (*callback)(void))
{
    //Create a new button;
    Button_t button;
    button.x = x;
    button.y = y;
    button.width = width;
    button.height = height;
    button.callback = callback;

    return button;
}


void button_click(const Button_t* button)
{
    button->callback();
}


void clickFunc(void)
{
    puts("Button Clicked!");
}

int main(int argc, char** argv)
{
    Button_t button = button_init(480, 320, 64, 32, &clickFunc);
    button_click(&button);
}
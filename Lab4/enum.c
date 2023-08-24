typedef enum {
    NORTH,
    WEST,
    SOUTH,
    EAST
} Heading_t;

int main(void)
{
    Heading_t dir = NORTH;
printf("%d\n", dir == NORTH);
}
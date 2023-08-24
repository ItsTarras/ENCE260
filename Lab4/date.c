#include <stdio.h>
#include <stdint.h>

typedef enum {
    MONDAY = 0,
    TUESDAY,
    WEDNESDAY,
    THURSDAY,
    FRIDAY,
    SATURDAY,
    SUNDAY
} Weekday_t;


typedef struct {
    Weekday_t weekday;
    uint8_t day;
    uint8_t month;
    uint16_t year;
} Date_t;

Date_t setDate(Weekday_t weekday, uint8_t day, uint8_t month, uint16_t year)
{
    Date_t mainDate;
    mainDate.weekday = weekday;
    mainDate.day = day;
    mainDate.month = month;
    mainDate.year = year;

    return mainDate;
}


void printDate(const Date_t* date)
{
    const char *day;

    switch(date->weekday) {
        case MONDAY:
            day = "Monday";
            break;

        case TUESDAY:
            day = "Tuesday";
            break;
        
        case WEDNESDAY:
            day = "Wednesday";
            break;

        case THURSDAY:
            day = "Thursday";
            break;

        case FRIDAY:
            day = "Friday";
            break;

        case SATURDAY:
            day = "Saturday";
            break;

        case SUNDAY:
            day = "Sunday";
            break;
    }


    printf("%s %u/%u/%u\n", day, date->day, date->month, date->year);
}


int main(void)
{
    Date_t date = setDate(SUNDAY, 20, 7, 1969);
    printDate(&date);
}
#include <stdio.h>
#include <stdlib.h>


int main()
{
    struct date {
        int month;
        int day;
        int year;
    };
    
    
    struct date today;
    
    today.month = 01;
    today.day = 12;
    today.year = 2024;
    
    
    printf("Date: %i/%i/%i\n", today.month, today.day, today.year);
    
    return 0;
    
}
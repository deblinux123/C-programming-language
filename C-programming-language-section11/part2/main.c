#include <stdio.h>
#include <stdlib.h>

 struct employee {
        char name[50];
        int hireDate;
        float salary;
    };


int main()
{
    struct date 
    {
        int month;
        int day;
        int year;
    };
    
    struct date today, *datePtr;
    
    
    datePtr = &today;
    
    datePtr -> month = 9;
    datePtr -> day = 23;
    datePtr -> year = 1990;
    
    
    printf("Today's Date: \n");
    printf("%i/%i/%i\n", datePtr -> month, datePtr -> day, datePtr -> year);
    
    return 0;
}
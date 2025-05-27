#include <stdio.h>
#include <stdlib.h>


// this note allocate memory
struct date 
{
    int month;
    int day;
    int year;
};


struct intPtr
{
    int *p1;
    int *p2;
};


int main()
{

    struct date today, *datePtr;

    datePtr = &today;
    
    datePtr -> month = 9;
    datePtr -> day = 23;
    datePtr -> year = 1990;

    printf("Today's Date: \n");
    printf("%i/%i/%i\n", datePtr -> month, datePtr -> day, datePtr -> year);
    
    
    printf("\n\n==============================================================\n\n");
    
    struct intPtr pointers;
    int i1 = 100, i2;
    pointers.p1 = &i1;
    pointers.p2 = &i2;
    *pointers.p2 = -98;
    
    printf("i1 = %i, *pointers.p1 = %i\n", i1, *pointers.p1);
    printf("i2 = %i, *pointers.p2 = %i\n", i2, *pointers.p2);
    
    return 0;
}
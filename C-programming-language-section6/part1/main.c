#include <stdio.h>

#define MONTH 12

int main()
{
    int score[3];
    score[0] = 10;
    score[1] = 200;
    score[2] = 45;
    
    printf("The first score is %d \n", score[1]);
    
    
    int numbers[6] = {1, 2, 22, 32, 12, 45};
    
    for (int i = 0; i < 6; i++)
        printf("Numbers in index %d is -> %d \n", i, numbers[i]);
    printf("=========================================\n\n");
    
    int days[MONTH] = {30, 30, 30, 30, 30, 31, 31, 31, 31, 31, 31, 31};
    int index = 0;
    
    for (index = 0; index < MONTH; index++)
        printf("month %d has %2d days \n", index + 1, days[index]);
    return 0;
    
}

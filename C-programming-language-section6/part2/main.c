#include <stdio.h>

/* 
 * multy dimentional array in c
 */
 
int main()
{
    int matrix[4][4] = {
        {10, 20, 30, 40},
        {11, 12, 13, 14},
        {21, 22, 23, 24},
        {31, 32, 33, 44},
    };
    
    for(int r = 0; r < 4; r++)
    {
        for (int c = 0; c < 4; c++)
        {
            printf("Row %d Value is %d\n", r, matrix[r][c]);
        }
    }
            
    
    return 0;
}
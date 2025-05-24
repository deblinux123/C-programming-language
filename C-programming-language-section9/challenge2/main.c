#include <stdio.h>
#include <stdlib.h>


void square(int *x);




int main()
{
    int *num = (int *)malloc(sizeof(int));
    *num = 3;
    
    square(num);
    
    printf("The result is %d\n", *num);
    
    return 0;
}

void square(int *x)
{
    *x = (*x) * (*x);
}
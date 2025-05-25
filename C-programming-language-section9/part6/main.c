#include <stdio.h>
#include <stdlib.h>


int arraySum(int array[], const int n);



int main()
{
    int value[10] = {1, 2, 3, 4, 5, 6, 12, 14, 9, 10};
    
    printf("The sum of the array is %i\n", arraySum(value, 10));
    
    
    return 0;
    
}



int arraySum(int array[], const int n)
{
    int sum = 0;
    int *ptr;
    
    int *const arrayEnd = array + n;
    
    for (ptr = array; ptr < arrayEnd; ++ptr)
        sum+=*ptr;
        
    return sum;
}
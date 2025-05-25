#include <stdio.h>
#include <stdlib.h>



int main()
{
    int numbers[] = {12L, 34L, 56L, 100L};
    int *ptr = numbers;
    
    for (int i = 0; i < sizeof(numbers)/sizeof(numbers[0]); i++)
        printf("Address of (p + %d) &numbers[%d] %llu\t*(p + %d)   Value : %d\n", i, i, (unsigned long long)(ptr+i), i, *(ptr+i));
        
        
    return 0;
}
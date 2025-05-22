#include <stdio.h>


int main()
{
    int number = 10;
    int *pNumber = NULL;
    pNumber = &number;
    
    printf("The address of the value number is: %p\n", &number);
    printf("The address of the pointer is: %p\n", &pNumber);
    printf("The value of the pointer is: %p\n", pNumber);
    
    printf("Value of what pointer is pointing to : %d\n", *pNumber);
    
    return 0;
}
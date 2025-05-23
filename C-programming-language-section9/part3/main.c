#include <stdio.h>


int main()
{
    int number = 10;
    int num2 = 100;
    const int *pNumber = &number;
    // *pNumber = num2; this is error  
    
    printf("The address of *pNumber is %p\n, and address of the value is %p\n", &pNumber, &number);
    
    int count = 98;
    int *const pCount = &count;
    
    // you can't do this 
//    int item = 65;
//    pCount = &item;
    
    return 0;
}
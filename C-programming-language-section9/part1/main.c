#include <stdio.h>

/*
 * POINTERS IN C
 */

int main()
{
    int number = 13;
    int *pNum = &number;
    int result = 0;
    
    printf("The value of the Pointer is: %d\n", *pNum);
    printf("And the addtess of the pointer is: %p\n", pNum); // dont use * for pointer when use %p 
    printf("Pointer that we use is %zd byte\n", sizeof(pNum));
    result = *pNum + 10;
    printf("And add it into the result: %d\n", result);
    
    return 0;
}
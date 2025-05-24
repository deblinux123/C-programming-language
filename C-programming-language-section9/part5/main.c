#include <stdio.h>


// this is pass by value function
int add(int x, int y)
{
    int result = x + y;
    
    return result;
}

// pass by reference
int multy(int *x, int *y)
{
    int result = *x * *y;
    return result;
}


int main(int argc, char **argv)
{
    int a=10;
    int b=10;

    int addTwoNumber = 0;
    addTwoNumber = add(a, b);
    printf("%d + %d = %d\n", a, b, addTwoNumber);
    
    int multiplyTwoNumber = 0;
    multiplyTwoNumber = multy(&a, &b); // pass by reference
    printf("This is the result for %d * %d = %d\n", a, b, multiplyTwoNumber);
    
	return 0;
}

#include <stdio.h>


int main()
{
    long num1 = 0l;
    long num2 = 0l;
    long *pNum = NULL;
    
    pNum = &num1;
    *pNum = 2l;
    ++num2;
    num2 += *pNum;
    
    pNum = &num2;
    ++*pNum;
    
    printf("num1 = %ld, num2 = %ld, *pNum = %ld, *pNum + num2 = %ld\n", num1, num2, *pNum, *pNum + num2);
    
    int value = 0;
    int *pValue = &value;
    
    printf("Please enter a number\n");
    scanf("%d", pValue);
    
    printf("Your number is %d\n", value);
    return 0;
    
    
    
}
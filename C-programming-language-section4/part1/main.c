#include <stdio.h>

int main()
{
    printf("Pleaes enter two numbers: \n");
    
    int a = 0;
    int b = 0;
    int result = 0;
    
    scanf("%d %d", &a, &b);
    result = a + b;
    printf("%d + %d = %d\n", a, b, result);
    
    result = a - b;
    printf("%d - %d = %d\n", a, b, result);
    
    result = a * b;
    printf("%d * %d = %d\n", a, b, result);
    
    result = a / b;
    printf("%d / %d = %d\n", a, b, result);
    
    result = a % b;
    printf("Result of the  module is : %d\n", result);
    
    return 0;
}
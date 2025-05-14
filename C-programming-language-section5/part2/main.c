#include <stdio.h>

int main()
{
    enum weekday {MONDAY, SECONDDAY, THIRDDAY};
    enum weekday today = SECONDDAY;
    
    switch(today)
    {
        case MONDAY:
            printf("The first Day\n");
            break;
        case SECONDDAY:
            printf("The second day\n");
            break;
        case THIRDDAY:
            printf("The third day\n");
            break;
        default:
            printf("Invalid");
            break;
    }
    
    printf("==============================================\n");
    
    int a = 0;
    int b = 0;
    double result = 0.0;
    char userOperator;
    
    printf("Please enter the two number and your operator\t (+, -, /, *)\n");
    scanf("%d %d %c", &a, &b, &userOperator);
    switch(userOperator)
    {
        case '+':
            result = a + b;
            printf("%d + %d = %lg\n", a, b, result);
            break;
        case '-':
            result = a - b;
            printf("%d - %d = %lg\n", a, b, result);
            break;
        case '*':
            result = a * b;
            printf("%d * %d = %lg\n", a, b, result);
            break;
        case '/':
            if (b == 0)
                printf("You can't enter zero\n");
            else{
                result = a / b;
                printf("%d / %d = %lg\n", a, b, result);
                }
            break;
        default:
            printf("Invalid Operator.!\n");
            break;
        
    }
    
    return 0;
    
}
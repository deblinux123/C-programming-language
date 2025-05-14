#include <stdio.h>


int main()
{
    int age = 0;
    
    printf("How old are you? \n");
    
    scanf("%d", &age);
    
    if (age >= 18)
        printf("Ok, You can drive a car\n");
    else
        printf("Sorry you dont have permission for driving the any car.\n");
        
    
    
    
    int number = 0;
    printf("\nNow Please enter a number: \n");
    
    scanf("%d", &number);
    
    if (number % 15 == 0)
        printf("FIZZBUZZ\n");
    else if (number % 3 == 0)
        printf("FIZZ\n");
    else if (number % 5 == 0)
        printf("BUZZ\n");
    else
        printf("Please enter a valid number.\n");
    return 0;
    
}

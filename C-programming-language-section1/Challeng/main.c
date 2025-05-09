#include <stdio.h>


int main(){
    int firstNumber = 0;
    int secondNumber = 0;
    
    printf("Please enter the number : \n");
    scanf("%d", &firstNumber);
    
    printf("Please enter the second number : \n");
    scanf("%d", &secondNumber);
    
    int results = firstNumber + secondNumber;
    
    printf("This is your result : \n");
    printf("%d + %d = %d \n", firstNumber, secondNumber, results);
    
    return 0;
}
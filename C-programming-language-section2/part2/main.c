#include <stdio.h>

int main(int argc, char **argv)
{
    float firstNumber = 0;
    double secondNumber = 0;
    
    double results = 0;
    
	printf("Please enter the 2 number : \n");
    
    scanf("%f %lf", &firstNumber, &secondNumber); // f for float point number and lf for double

    results = firstNumber + secondNumber;
    
    printf("The result of the %f + %lf = %lf\n", firstNumber, secondNumber, results);
	return 0;
}

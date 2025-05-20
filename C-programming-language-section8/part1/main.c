#include <stdio.h>
#define PI 3.14

int main()
{
    char name[] = "Farid";
    int age = 31;
    const double tax = 0.03;
    
    printf("Hello my name is %s and i have %d years old\n",name, age);
    printf("Tax is const and can't change and value of it is %.2f\n", tax);
    
    int count = 0;
    
    while(name[count] != '\0')
        ++count;
        
    printf("the length of the name is -> %d\n", count);
    printf("The value of the pi is -> %.2f\n", PI);
    return 0;
    
}
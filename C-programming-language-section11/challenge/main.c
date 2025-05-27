#include <stdio.h>
#include <stdlib.h>



 struct employee {
        char name[50];
        int hireDate;
        float salary;
};



int main()
{
   
    
    struct employee employ1 = {"jack", 12, 123.900};
    
    printf("Ok %s you hire ate day %i and your salary is %.2f\n", employ1.name, employ1.hireDate, employ1.salary);
    
    struct employee newEmploy;
    
    printf("Enter your name: \n");
    scanf("%s", newEmploy.name);
    
    printf("Enter your hire date: \n");
    scanf("%d", &newEmploy.hireDate);
    
    printf("How mach slsary do you get: \n");
    scanf(" %f", &newEmploy.salary);
    
    printf("Ok %s you hire ate day %i and your salary is %.2f\n", newEmploy.name, newEmploy.hireDate, newEmploy.salary);
    
    return 0;
}
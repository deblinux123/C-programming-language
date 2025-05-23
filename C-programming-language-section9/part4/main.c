#include <stdio.h>


int main()
{
    int i = 0;
    float f = 2.45;
    char c = 'k';
    
    void *vptr; // dose not return any specefic type
    
    vptr = &i;
    printf("Value of i = %d\n", *(int *)vptr);
    
    vptr = &f;
    printf("Value of f = %.2f\n", *(float *)vptr);
    
    vptr = &c;
    printf("Value of k = %c\n", *(char *)vptr);
    
    
    return 0;
}
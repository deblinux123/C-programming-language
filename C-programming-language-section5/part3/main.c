#include <stdio.h>

int main()
{
    // fizzbuuz game with loop (forloop)
    for(int i = 1; i <= 100; i++){
        if (i % 15 == 0)
            printf("%d -> FIZZBUZZ\n", i);
        else if (i % 3 == 0)
            printf("%d -> FIZZ\n", i);
        else if (i % 5 == 0)
            printf("%d -> BUZZ\n", i);
        else
            printf("%d\n", i);
    }
    
    printf("It's Done."); // after the loop will end this will print it
    
    printf("=======================================================\n\n");
    int j = 0;
    
    while(j < 5)
    {
        printf("%d. hello from while loop\n", j);
        j++;
    }
    
    printf("\n\n");
        
}
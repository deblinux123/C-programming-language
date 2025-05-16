#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    float array[5][12];
    int i, j;
    float sum = 0;
    float average = 0; 
    
    float rainfall[5] = {0, 0, 0, 0, 0};
    
    srand(time(NULL));
    
    for(i = 0; i < 5; i++)
        {
            for (j = 0; j < 12 ; j++){
                array[i][j] = ((float) rand() / RAND_MAX)  * 9.0 + 1.0;
            }
        }
        
    for (i = 0; i < 5; i++){
        for(j = 0; j < 12; j++){
            rainfall[i]+= array[i][j];
        }
    }
    
    for (int k = 0; k < 5; k++){
        printf("Rain Fall is: %.2f\n", rainfall[k]);
        sum += rainfall[k];
    }
    
    average = sum / 5;
    
    printf("Average is: %.2f\n", average);
    
    printf("Done.");
    
    return 0;
}
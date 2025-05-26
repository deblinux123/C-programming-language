#include <stdio.h>
#include <stdlib.h>
#include <string.h>



int main()
{
    char *str = NULL;

    int size;
    
    printf("Please enter the limit of the text: \n");
    scanf("%d", &size);
    
    str = (char*)malloc(size * sizeof(char));
    
    if (str != NULL){
        printf("Enter some text: \n");
        scanf(" ");
        fgets(str, sizeof(str), stdin);
        
        printf("Your Output: %s\n", str);
    }
    
    free(str);
    str = NULL;
    
    return 0;
}
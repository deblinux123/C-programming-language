#include <stdio.h>
#include <stdlib.h>
#include <string.h>



int main()
{
    char *str;
    /*Initial memoru allocation*/
    str = (char*)malloc(15*sizeof(char));
    
    strcpy(str, "Testing");
    printf("String = %s, Address = %p\n", str, str);
    
    /*Reallocation memory*/
    str = (char*)realloc(str, 25*sizeof(char));
    strcat(str, ".com");
    
    printf("String = %s, Address = %p\n", str, str);
    
    /*free that memory up*/
    free(str);
    
    return 0;
}
#include <stdio.h>

int stringLength(const char *string);



int main()
{
    printf("%d \n", stringLength("this is the testing"));
    printf("%d \n", stringLength(""));
    printf("%d \n", stringLength("Farid"));
    
    return 0;
}



int stringLength(const char *string)
{
    const char *lastAddress = string;
    
    while(*lastAddress)
        ++lastAddress;
        
    return lastAddress - string;
}
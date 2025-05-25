#include <stdio.h>


void copy(char *to, char *from);


int main()
{
    char name[] = "Ali";
    char name2[40];
    copy(name2, name);
    printf("name2 is now -> %s\n", name2);
    
}


void copy(char *to, char *from)
{
    while(*from)
        *to++ = *from++;
        
    *to = '\0';
}
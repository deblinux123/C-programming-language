#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main()
{
    char text[50] = "This is a testing text";
    char *ptr = text;
    
    
    printf("the len of the text is %ld\n", strlen(text));
    
    for(int i = 0; i < strlen(text); i++)
        printf("Text[%d] = %c\t *(ptr + %d) = %c \t&Text[%d] = %p\tp+%d = %p\n", i, text[i], i, *(ptr + i), i, &text[i], i, ptr+i);
    
    return 0;
}
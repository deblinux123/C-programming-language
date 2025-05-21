#include <stdio.h>
#include <string.h>


int main()
{
    char text[] = "Hello my name is farid";
    int len = strlen(text);
    
    char temp[50];
    
    strncpy(temp, text, sizeof(temp) - 1); // for buffer over flow
    
    char str1[] = "Hello";
    char str2[] = "Hello";
    
    printf("%s is %s to %s\n",str1,strcmp(str1, str2)?"Not Equal":"Equal", str2);
    
    char name[20] = "alireza";
    char lastName[20] = "amiry";
    
    printf("The full name is: %s\n", strncat(name, lastName, sizeof(name) -1)); // use strncat to check buffer overflow 
    
    printf("len text is: %d\n", len);
    printf("This is copy of text: %s\n", temp);
    
    return 0;
}
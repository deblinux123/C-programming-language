#include <stdio.h>
#include <stdbool.h>

/* 
 * 1. write a function to count the number of characters in a string(length) 
 * 2. write a function to concate two character string
 * 3. write function to check the equality of the two string
 *  
 */


int length(char text[]);
void concatenate(char result[], char str1[], char str2[]);
bool equalString(char str1[], char str2[]);




int main()
{
    char text[] = "Hello";
    char result[50];
    char str1[] = "Hello";
    char str2[] = "World";
    
    
    int results = length(text);
    
    printf("%d\n", results);
    
    concatenate(result, str1, str2);
    
    printf("%s\n", result);
    
    bool isEqual = equalString(text, str1);
    printf("%s is %s to %s\n", text, isEqual?"Equal":"Not Equal", str1);
    
    
    return 0;
}




int length(char text[])
{
    int count = 0;
    
    while(text[count] != '\0')
        ++count;
    
    return count;
}


void concatenate(char result[], char str1[], char str2[])
{
    int j;
    int i;
    
    for (i = 0; str1[i] != '\0'; i++)
        result[i] = str1[i];
        
    for (j = 0; str2[j] != '\0'; j++)
        result[i + j] = str2[j];
        
    result[i + j] = '\0';
}



bool equalString(char str1[], char str2[])
{
    int i = 0;
    bool isEqual = false;
    
    while(str1[i] == str2[i] &&
          str1[i] != '\0' &&
          str2[i] != '\0')
              ++i;
              
    if (str1[i] == '\0'  && str2[i] == '\0')
        isEqual = true;
    else
        isEqual = false;
        
    return isEqual;
}
#include <stdio.h>
#include <string.h>


int main()
{
    char txt[] = "hello my name is farid";
    char ch = 'i';
    char *pFind = NULL; // THIS IS THE POINTER 
    
    pFind = strchr(txt, ch);
    
    printf("%s is find\n", pFind);
    
    char txt2[] = "looking for word in the string not single character";
    char word[] = "string";
    char *pFound = NULL;
    pFound = strstr(txt2, word);
    
    printf("word -> '%s' is found\n", pFound);
    
    char stringText[100] = "Hello my name is farid and im using pointers";
    const char s[2] = " "; // this is the delimeter for sepreated the string by space 
    char *token ; // POINTER
    
    token = strtok(stringText, s);
    
    while(token != NULL)
    {
        printf("%s\n", token);
        
        token = strtok(NULL, s);
    }
    
    return 0;
    
}
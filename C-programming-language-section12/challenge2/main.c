#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>


#define FILENAME "file.txt"


int main()
{
    FILE *fp;
    FILE *fp1;
    char c = ' ';
    
    fp = fopen(FILENAME, "r");
    
    if (fp == NULL)
        return -1;
        
    fp1 = fopen("testing.txt", "w");
        
    if (fp1 == NULL)
        return -1;
        
    while ((c = fgetc(fp)) != EOF)
    {
        if (islower(c))
            c = c -32;
            
        fputc(c, fp1);
    }
    
    fclose(fp);
    fclose(fp1);
    
    
    rename("testing.txt", FILENAME);    
    
    remove("testing.txt");
    
    
    char line[100];
    
    fp = fopen(FILENAME, "r");
    
    if (fp == NULL)
        return -1;
        
        
    while(fgets(line, sizeof(line), fp))
        printf("%s", line);
        
    fclose(fp);
    fp = NULL;
    
    return 0;
    
}
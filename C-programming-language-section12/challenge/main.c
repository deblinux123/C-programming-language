#include <stdio.h>

int main()
{
    FILE *fp;
    int c;
    int line = 0;
    
    fp = fopen("file.txt", "r");
    
    if(fp == NULL)
    {
        printf("Failed to open\n");
        return (-1);
    }
    else
        printf("File successfull opened\n\n");
        
        
    while((c = fgetc(fp)) != EOF)
    {
        printf("%c", c);
        if (c == '\n')
            line++;
    }
   
    fclose(fp);
    fp = NULL;

    printf("\nNumbers of lines: %d\n",line);
        
    
    return 0;
}
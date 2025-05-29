#include <stdio.h>


int main()
{
    FILE *fp;
    char str[200];
    
    fp = fopen("file.txt", "r");
    
    if (fp == NULL)
    {
        printf("Failed to open\n");
        return (-1);
    }
    
    if (fgets(str, 200, fp) != NULL)
        printf("%s", str);
        
        
    fclose(fp);
    fp= NULL;
    
    return 0;
    
}
#include <stdio.h>
#include <stdlib.h>


int main()
{
    char str1[10], str2[10], str3[10];
    int year;
    FILE *fp;
    
    fp = fopen("file.txt", "w+");
    
    if (fp == NULL)
        fputs("Hello How are you", fp);
        
        
    rewind(fp);
    
    fscanf(fp, "%s %s %s %d", str1, str2, str3, &year);
    
    
    printf("Read string |%s|\n", str1);
    printf("Read string |%s|\n", str2);
    printf("Read string |%s|\n", str3);
    printf("Read Integer |%d|\n", year);
    
    fclose(fp);
    fp = NULL;
    
    return 0;
}
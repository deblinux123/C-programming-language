#include <stdio.h>



int main()
{
    char userInput[100];
    FILE *fp;
    
    fp = fopen("file.txt", "w");
    
    if (fp == NULL)
    {
        printf("Failed to Open the file");
        return 1;
    }
    
    printf("Please enter some text: \n");
    fgets(userInput, sizeof(userInput), stdin);
    
    fprintf(fp, "%s", userInput);
    fclose(fp);
    fp = NULL;
    
    
    fp = fopen("file.txt", "r");
    
    if (fp == NULL)
    {
        printf("Faile to Open the file.\n");
        return 1;
    }
    
    char line[100];
    
    while(fgets(line, sizeof(line), fp))
        printf("%s", line);
        
    fclose(fp);
    fp = NULL;
    
    
    return 0;
}
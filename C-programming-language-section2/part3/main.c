#include <stdio.h>

int main(int argc, char **argv)
{
    // using fgets for getting the input
    
    char text[100];
    
	printf("Please enter your tex\n");
    
    fgets(text, sizeof(text), stdin);
    
    printf("this is your text : \n%s", text);
    
	return 0;
}

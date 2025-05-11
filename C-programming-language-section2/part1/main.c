#include <stdio.h>
/* in this part we get the input from the user in 2 ways fscan fgets
 * and also this is the multy line comment in c language
 * if i use // thats the single line comments 
 * */
 
int main(int argc, char **argv)
{
    int age = 0;
    char name[100];
    // enter the name and age from the user
	printf("Please enter your name and age seprated by comma: \n");
    
    scanf("%s %d", name, &age);
    
    printf("Ok your name is %s and you are %d years old \n", name, age);
    
	return 0;
}

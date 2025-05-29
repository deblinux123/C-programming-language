#include <stdio.h>



int main()
{
	FILE *fp;
	int c;

	fp = fopen("file.txt", "r");

	if (fp == NULL)
		printf("Failed to open.");

	while((c = fgetc(fp) != EOF))
		printf("%c\n", c);

	
	fclose(fp);
	fp =NULL;

	return 0;
}

	

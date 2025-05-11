#include <stdio.h>
/* Basic Data Types
 * nteger Types
 * Floating-Point Types
 * Character Types
*/



int main(int argc, char **argv)
{
    // int short long long long
	int intNumber = 10;
    short shortNumber = 12;
    long longNumber = 1233332222L;
    long long veryLongNumber = 2039558585584777;
    
    printf("int : %d\n", intNumber);
    printf("short : %d\n", shortNumber);
    printf("long : %ld\n", longNumber);
    printf("long long : %lld\n", veryLongNumber);
    
    printf("=======================================\n");
    printf("Floating point numbers\n");
    float score = 78.88;
    double newScore = 90.98;
    long double highScore = 87888.98;
    
    printf("float: %f\n", score);
    printf("double: %lf\n", newScore);
    printf("long double: %Lf\n", highScore);
    
    printf("========================================\n");
    printf("Character type\n");
    
    char letter = 'A';
    char name[] = "farid";
    char newLatter = 'A';
    
    printf("single Char: %c\n", letter);
    printf("Name: %s\n", name);
    printf("ASCII for A : %d\n", newLatter);
    
    
    printf("===========================================\n");
    printf("Enums\n");
    
    
    enum day {SUNDAY, MONDAY, TUSEDAY};
    enum day today ;
    today = MONDAY;
    
    printf("Day index: %d\n", today);
    
    enum status {
        OK = 200,
        NOT_FOUND = 404,
        SERVER_ERROR = 500
    };
    
    enum status code = NOT_FOUND;
    
    printf("Http code : %d\n", code);
    
	return 0;
}

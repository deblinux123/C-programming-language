#include <stdio.h>

/*
* and operator && for example a && b 
* or operator || for example a || b
* not operator ! for example ! a = b 
*/

int main()
{
	_Bool a = 0;
    _Bool b = 0;
    _Bool result = a && b;
    
    printf("The first reslt is : %s\n", result?"true":"false");
    
    _Bool isTrue = 1;
    _Bool isFalse = 0;
    _Bool trueOperator = isTrue || isFalse;
    _Bool falseOperator = isTrue && isFalse;
    
    printf("The True operator is : %s\n", trueOperator?"true":"false");
    printf("The False operator is : %s\n", falseOperator?"true":"false");
    
    _Bool newResult = isTrue && !isFalse;
    printf("The not of the operation is : %s\n", newResult?"true":"false");
    
	return 0;
}

#include <stdio.h>
#include <stdbool.h>


/* 
| **Specifier** | **Used For**                     | **Example**             |
| ------------- | -------------------------------- | ----------------------- |
| `%d` or `%i`  | Signed decimal integer           | `int a = 5;`            |
| `%u`          | Unsigned decimal integer         | `unsigned int a = 5;`   |
| `%f`          | Floating-point number            | `float a = 5.5;`        |
| `%lf`         | Double floating-point            | `double a = 3.14;`      |
| `%c`          | Single character                 | `char ch = 'A';`        |
| `%s`          | String (char array)              | `char str[] = "Hi";`    |
| `%ld`         | Long signed integer              | `long a = 123456;`      |
| `%lu`         | Long unsigned integer            | `unsigned long a;`      |
| `%lld`        | Long long signed integer         | `long long a = 123;`    |
| `%llu`        | Long long unsigned integer       | `unsigned long long a;` |
| `%x`          | Unsigned hexadecimal (lowercase) | `255 → ff`              |
| `%X`          | Unsigned hexadecimal (uppercase) | `255 → FF`              |
| `%o`          | Unsigned octal number            | `255 → 377`             |
| `%%`          | Print `%` symbol                 | `printf("%%");` → `%`   |
| `%p`          | Pointer address                  | `int *p = &a;`          |
*/

int main()
{
	printf("============== Format spacefire ==============\n");
    int age = 34;
    char name[20] = "farid";
    double wight = 45.05;
    double hight = 1.78;
    bool isTrue = 0;
    printf("Ok %s you are %i years old\n", name, age);
    printf("And also you %g kg and %g cm hight\n", wight, hight);

    printf("This is %s\n", isTrue?"true":"false");
    
	return 0;
}

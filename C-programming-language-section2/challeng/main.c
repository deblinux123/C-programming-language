#include <stdio.h>

/* چالش: محاسبه معدل ساده
برنامه‌ای بنویس که اطلاعات زیر را از کاربر بگیرد:

نام دانش‌آموز (با fgets)

نمره 3 درس (با scanf)

سپس معدل را محاسبه کرده و پیام نهایی را چاپ کند.
 */
 
int main(int argc, char **argv)
{
	char name[100];
    double math = 0;
    double physics = 0;
    double science = 0;
    double results = 0;
    
    printf("Please enter your name : \n");
    fgets(name, sizeof(name), stdin);
    
    printf("Now Enter your scores for math, physics and science seprated by ',' \n");
    scanf("%lf %lf %lf", &math, &physics, &science);
    
    results = math + physics + science;
    results = results / 3;
    
    printf("Ok %s\n", name);
    printf("This is your final score : %lf\n", results);
    return 0;
}

/* 
🎯 چالش: بازی حدس عدد (Guessing Game)
🔧 توضیح:
برنامه‌ای بنویس که:

یک عدد تصادفی بین 1 تا 100 انتخاب کند.

از کاربر بخواهد تا عدد را حدس بزند.

تا زمانی که کاربر عدد درست را حدس نزده، برنامه ادامه داشته باشد.

پس از هر حدس، به کاربر بگو:

عدد وارد شده بزرگ‌تر از عدد مخفی است.

یا کوچک‌تر است.

در پایان، تعداد تلاش‌های کاربر را نمایش بده.

🧩 نکات:
از rand() برای تولید عدد تصادفی استفاده کن.

برای تکرار از حلقه‌ی while یا do-while استفاده کن.

برای مقداردهی اولیه تصادفی از srand(time(NULL)); استفاده کن (نیاز به #include <time.h>).
*/

#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main()
{
    int secretNumber = 0;
    int gusse = 0;
    int tries = 1;
    
    srand(time(NULL));
    secretNumber = (rand() % 100) + 1;
    
    
    while (tries < 10)
    {
        printf("Please enter a number between 1-100: \n");
        scanf("%d", &gusse);
        printf("%d is your number \n", gusse);
        
        tries++;
        
        if (tries == 10)
        {
            printf("Sorry yo didn't gusse.\n");
            break;
        }
        else if (gusse == secretNumber)
        {
            printf("You gusse right and win the game\n");
            break;
        }
        else if (gusse > secretNumber)
        {
            printf("Your number is biger than secret number\n");
        }
        else if (gusse < secretNumber)
        {
            printf("Your number is less than secret number\n");
        }
        else
            printf("Invalid input.");
    }
    
    return 0;
    
}
#include <stdio.h>

/*

---

## ✅ چالش: سیستم محاسبه نمره نهایی دانش‌آموز با استفاده از عملگرها

### 📌 هدف:

تمرین روی:

* عملگرهای حسابی (`+`, `-`, `*`, `/`, `%`)
* عملگرهای مقایسه‌ای (`==`, `!=`, `>`, `<`, `>=`, `<=`)
* عملگرهای منطقی (`&&`, `||`, `!`)
* عملگرهای انتساب (`=`, `+=`, `-=`)
* عملگر شرطی (`?:`) – اختیاری

---

### 🧠 شرح مسئله:

برنامه‌ای بنویس که:

1. نمرات سه درس را از کاربر بگیرد: ریاضی، فیزیک و علوم
2. معدل را محاسبه کند (میانگین سه نمره)
3. اگر معدل بالای 17 بود، بگو "عالی"، بین 14 تا 17 بگو "خوب"، کمتر از 14 بگو "نیاز به تلاش بیشتر"
4. اگر یکی از نمرات کمتر از 10 باشد، بگو "مردود در یک درس"
5. اگر معدل بالای 18 و هیچ درسی زیر 12 نداشت، بگو "دانش‌آموز ممتاز 🎉"

---

### 💡 نکات:

* از `if`, `else if`, `else` و `&&`, `||` استفاده کن.
* برای گرفتن ورودی‌ها از `scanf()` استفاده کن.
* از `%` برای درصد (در صورت خواست اختیاری) استفاده کن.

---

### 🧪 نمونه خروجی:

```
Enter math score: 19
Enter physics score: 17
Enter science score: 18

Average: 18.00
Status: دانش‌آموز ممتاز 🎉
```

---

*/


int main()
{
    double math = 0;
    double physics = 0;
    double science = 0;
    double average = 0;
    
    printf("Enter math score: \n");
    scanf("%lf", &math);
    
    printf("Enter physics score: \n");
    scanf("%lf", &physics);
    
    printf("Enter science: \n");
    scanf("%lf", &science);
    
    
    average = (math + physics + science) / 3;
    
    printf("Average : %.2lf\n", average);
    
    if (math < 10 || physics < 10 || science < 10)
        printf("Failed in one subject\n");
    else if (average > 18 && math >= 12 && physics >= 12 && science >=12)
        printf("Excellent\n");
    else if (average > 17)
        printf("Great\n");
    else if (average > 14)
        printf("Good\n");
    else if (average > 10)
        printf("Needs more effort\n");
    else
        printf("Failed overall\n");
        
    return 0;
}
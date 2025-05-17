/*
 * challeng
 

### 💻 چالش برنامه‌نویسی: محاسبه بزرگ‌ترین مقسوم‌علیه مشترک (GCD)

---

### 🔧 توضیحات چالش:

یک برنامه به زبان C بنویس که:

1. دو عدد صحیح از کاربر بگیرد
2. بزرگ‌ترین مقسوم‌علیه مشترک (GCD) آن‌ها را محاسبه کند
3. مقدار GCD را چاپ کند

---

### ✅ نکات:

* می‌تونی از الگوریتم ساده استفاده کنی (مثلاً با یک حلقه `for`)
* یا از **الگوریتم اقلیدس (Euclidean Algorithm)** برای بهینه‌تر بودن

---

### 🧠 ورودی و خروجی نمونه:

```
Enter first number: 12
Enter second number: 18
GCD is: 6
```

---

### 🔄 اگر دوست داشتی نسخهٔ پیشرفته‌اش رو هم امتحان کن:

* برنامه‌ای بنویس که **برای چند جفت عدد** این کار رو انجام بده (مثلاً با حلقه `while`)
* یا تابعی برای محاسبه GCD بنویس

*/
#include <stdio.h>


int gcdAlgorithem(int a, int b)
{
    int r = 0;
    
    while(b != 0)
    {
        r = a % b;
        a = b;
        b = r; 
    }
    
    return a;
}


int main()
{
    int a = 0;
    int b = 0;
    
    printf("Please enter the 2 numbers: \n");
    scanf("%d %d", &a, &b);
    
    int result = gcdAlgorithem(a, b);
    printf("result is : %d\n", result);
    
    return 0;
}
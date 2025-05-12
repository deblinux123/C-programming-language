#include <stdio.h>


/*
---

### 💪 **چالش ترکیبی: سیستم نمره‌دهی دانش‌آموزان با استفاده از enum**

برنامه‌ای بنویس که:

1. یک `enum` تعریف کند به نام `GradeLevel` با مقادیر زیر:

   * `A`, `B`, `C`, `D`, `F`

2. از کاربر بخواهد:

   * نام دانش‌آموز (رشته - `char[]`)
   * سن (عدد صحیح - `int`)
   * معدل (عدد اعشاری - `float`)

3. بر اساس معدل، برنامه **نمره نهایی (Grade)** را از طریق `enum` تعیین کند:

   * معدل بالاتر از 17 → A
   * بین 14 تا 17 → B
   * بین 12 تا 14 → C
   * بین 10 تا 12 → D
   * کمتر از 10 → F

4. در نهایت اطلاعات کامل دانش‌آموز را با استفاده از `printf` چاپ کند.

---

### 🧾 نمونه خروجی:

```text
Enter name: Sara
Enter age: 19
Enter average: 16.5

--- Student Report ---
Name: Sara
Age: 19
Average: 16.50
Grade: B
```

---

### 🧠 نکات:

* باید از `enum` برای تعریف سطح نمره استفاده کنی.
* از `%s`, `%d`, `%.2f`, `%c` استفاده کن.
* از یک آرایه‌ی `char*` برای نگه‌داشتن نام نمرات (`A`, `B`, ...) استفاده کن که با مقدار `enum` تطابق داده بشه.

---

*/

int main(int argc, char **argv)
{
	enum gradeLevel {A, B, C, D, E, F};
    
    char name[20];
    int age = 0;
    double average = 0;
    
    enum gradeLevel grade;
    
    printf("Enter your name: \n");
    scanf("%s", name);
    
    printf("Enter your age: \n");
    scanf("%d", &age);
    
    printf("Enter your average score: \n");
    scanf("%lg", &average);
    
    if (average > 17.0)
        grade = A;
    else if (average >= 14)
        grade = B;
    else if (average >= 12)
        grade = C;
    else if (average >= 10)
        grade = D;
    else 
        grade = F;
        
    char *gradeItem[] = {"A", "B", "C", "D", "E", "F"};
        
    printf("---------- Studet Report ---------\n");
    printf("Name: %s\n", name);
    printf("Age: %d\n", age);
    printf("Average: %g\n", average);
    printf("Grade: %s\n", gradeItem[grade]);
    
    return 0;
}

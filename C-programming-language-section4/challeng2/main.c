/*


---

## ✅ چالش عملی: Bitwise Battle 💻🧠

### 🎯 هدف:

با استفاده از عملگرهای بیتی، وضعیت سیستم را کنترل و آنالیز کن!

---

### 🧩 صورت چالش:

فرض کن می‌خواهی وضعیت چند ویژگی در یک دستگاه را با بیت‌ها کنترل کنی:

| بیت | ویژگی (Feature)            |
| --- | -------------------------- |
| 0   | Wi-Fi                      |
| 1   | Bluetooth                  |
| 2   | GPS                        |
| 3   | حالت شب (Night Mode)       |
| 4   | حالت پرواز (Airplane Mode) |

حالا باید:

1. یک عدد `unsigned char` تعریف کنی (مثلاً `unsigned char settings = 0;`)
2. با عملگرهای بیتی، موارد زیر را انجام دهی:

---

### 🔧 دستورالعمل‌ها:

1. **روشن کردن Wi-Fi و GPS**
2. **خاموش کردن GPS**
3. **بررسی اینکه Bluetooth روشن است یا نه**
4. **تغییر وضعیت Night Mode (اگر روشنه خاموش کن، اگر خاموشه روشن کن)**
5. **چاپ مقدار نهایی تنظیمات به صورت باینری**

---

### 🎁 راهنمایی:

* روشن کردن: `settings |= (1 << n);`
* خاموش کردن: `settings &= ~(1 << n);`
* بررسی روشن بودن: `if (settings & (1 << n))`
* تغییر وضعیت (toggle): `settings ^= (1 << n);`

---
*/

#include <stdio.h>

int main()
{
    unsigned char setting = 0; // binary 00000000 
    
    printf("First Step : \n");
    printf("Setting = %d\n", setting);
    printf("Binary: ");
    
    for(int i = 7; i >= 0; i--){
        printf("%d", (setting >> i) & 1);
    }
    printf("\n\n");
    
    setting = setting | (1 << 0);
    printf("Turn on wifi: \n");
    printf("Setting = %d\n", setting);
    printf("Binary: ");
    for (int i = 7; i >= 0; i--){
        printf("%d", (setting >> i) & 1);
    }
    
    printf("\n\n");
    
    setting = setting | (1 << 2);
    printf("Turn on GPS: \n");
    printf("Settng = %d\n", setting);
    printf("Binary: ");
    for (int i = 7; i >= 0; i--){
        printf("%d", (setting >> i) & 1);
    }
    
    printf("\n\n");
    
    setting = setting & ~(1 << 2);
    printf("Turn of GPS: \n");
    printf("Setting = %d\n", setting);
    printf("Binary: ");
    for (int i = 7; i >= 0; i--){
        printf("%d", (setting >> i) & 1);
    }
    
    printf("\n\n");
    
    printf("Check for on or off (Bluetooth)\n");
    
    if (setting & (1 << 1)){
        printf("Bluetooth: ON");
    }else{
        printf("Bluetooth: OFF");
    }
    
    printf("\n\n");
    
    setting = setting ^ (1 << 3);
    printf("Night Mode Status: \n");
    printf("Setting = %d\n", setting);
    printf("Binary: ");
    for (int i = 7; i >= 0; i--){
        printf("%d", (setting >> i) & 1);
    }
    printf("\n");
    return 0;
}
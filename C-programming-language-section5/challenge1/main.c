/*

## 🍔 چالش: سیستم سفارش غذا ساده در زبان C

### ✳️ توضیح:

یک برنامه بنویس که منوی زیر را نمایش دهد و از کاربر بخواهد **شماره آیتم مورد نظر** را وارد کند. سپس قیمت آیتم انتخاب‌شده را نمایش دهد.

---

### 📋 منو:

```
💡 Welcome to FastFood C!

1. 🍕 Pizza       - 120,000 تومان
2. 🍔 Burger      - 95,000 تومان
3. 🌭 Hot Dog     - 75,000 تومان
4. 🥤 Soft Drink  - 20,000 تومان
```

---

### 📥 ورودی:

شماره آیتم از کاربر گرفته شود (`int item_number`)

---

### 📤 خروجی:

نام و قیمت آیتم انتخاب‌شده، یا پیغام خطا اگر شماره نامعتبر بود.

---

### ✅ نمونه خروجی:

```
Please select an item (1-4): 2
You ordered: Burger - 95000 Toman
```

یا:

```
Please select an item (1-4): 7
Invalid choice!
```

---

### 🔧 نکات فنی:

* استفاده از `if`, `else if`, `else`
* گرفتن ورودی عددی (`scanf`)
* چاپ نتیجه مناسب با `printf`

---
*/



#include <stdio.h>

int main()
{
    int orderItem = 0;
    printf("========== WELCOME TO FASFOOD C! ==========\n\n");
    printf("🍕 1. Pizza\t\t - 120$\n"
            "🍔 2. Burger\t\t - 95$\n"
            "🌭 3. Hot Dog\t\t - 75$\n"
            "🥤 4. Soft Drink\t - 30$\n\n"
            "Please select an item (1-4): \n");
            
    scanf("%d", &orderItem);
    
    if (orderItem == 1)
        printf("Your Order is: Pizza - 120$\n");
    else if (orderItem == 2)
        printf("Your Order is: Burger - 95$\n");
    else if (orderItem == 3)
        printf("Your Order is: Hot Dog - 75$\n");
    else if (orderItem == 4)
        printf("Your Order is: Soft Drink - 30$\n");
    else
        printf("Invalid Choice!\n");
    return 0;
}

/*
 * Functions in c
 */
 
 
 #include <stdio.h>
 
 
 // my function
 void printHello(void) // void means return non type and you can use printf
 {
     printf("Hello from functions\n");
 }
 
 int calculateAge(int year) // this function return type int value and must use return 
 {
     int current = 1404;
     int age = current - year;
     return age;
 }
 
 int main()
 {
     printHello();
     // calculateAge(1373);
     
    // printf("You are %d years old\n", calculateAge(1373));
     int age = 0; 
     age = calculateAge(1373); 
     printf("You are %d years old\n", age);
     return 0;
 }

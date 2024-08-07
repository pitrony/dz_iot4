//Домашнее задание №4
//Задача 2. Ровно три цифры
//Ввести целое число и определить, верно ли, что в нём ровно 3 цифры.
//Данные на входе: Целое положительное число
//Данные на выходе: Одно слово: YES или NO
//zad 4.2
#include <stdio.h>
int main() {
int a, num;
int count=0;
int nums=3;
scanf("%d", &a);
while (a > 0 && count<nums+1)
   {
  num = a % 10;
  ++count;
  a /= 10;
   }
if (count==nums) 
  printf("YES\n");
else 
  printf("NO\n");
return 0;
}

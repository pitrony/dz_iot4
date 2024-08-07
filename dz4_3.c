//Домашнее задание №4
//Задача 3. Все цифры четные
//Ввести целое число и определить, верно ли, что все его цифры четные
//Данные на входе: Одно целое число
//Данные на выходе: YES или NO
// zad 4.3   

#include <stdio.h>
int main()
{
int a, num, count, countno=0;
 scanf("%d",&a);
 if (a>9)
 {
      while (a>0)
                {
      num = a % 10;
        if(num%2==0)
          {count=1+count;}
      a /= 10;
      countno++;
                 }
   if (count==countno)
      printf("Yes");
   else printf("NO"); 
 }
 else printf("Out of range");
 return 0;
}

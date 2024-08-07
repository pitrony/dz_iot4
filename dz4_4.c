//Домашнее задание №4
//Задача 4. Перевернуть число
//Ввести целое число и «перевернуть» его, так чтобы первая цифра стала
//последней и т.д.
//Данные на входе: Целое неотрицательное число
//Данные на выходе: Целое неотрицательное число наоборот
// dz4.4

#include <stdio.h>
#include <math.h>
int main()
{
int a,  tempa, i, onum, num=0;
 scanf("%d",&a);
 if (a>9)
 {
      tempa=a;
      do {
      num = a % 10;
      a /= 10;
      i++;
          }
      while (a>0);
      int j=i;
         while (j>0)
               {
         num=tempa % 10;
         onum= onum + num*(pow(10,j-1));
         tempa /=10;
         j--;                
                }
    printf("\n");
    printf("%d", onum);
 }
 else printf("Out of range");
 return 0;
}

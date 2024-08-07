//Домашнее задание №4
//Задача 1. Сумма квадратов маленьких чисел
//Ввести два целых числа a и b (a ≤ b) и вывести сумму квадратов всех чисел от a до b.
//dz4.1
#include <stdio.h>

int main()
{
	  int a,b;
	  printf("Input a and  b a<b \n ");
    scanf("%d%d",&a,&b);
    int qvad=0;
    int  summ =0;
    int i=a;
    while (i <=b)
     { 
		qvad=i*i;
		summ=qvad+summ;
		i++;
	   }
printf("Сумма квадратов чисел от a до b: ");
printf("%d", summ );
    return 0;
}

// Lab2_1.c: Обчислення арифметичних задач з форматованим вводом-вивидом//

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<locale.h>
#include <conio.h>

float x, y, F;

int main()
{
	setlocale(LC_CTYPE, "ukr");
	printf("\n Введiть два числа: \n");
	printf("\n \t введiть число x=");
	scanf("%f", &x);
	printf("\n \t введiть число y=");
	scanf("%f", &y);

	F = (x+y)/(x*x+x*y+y*y)+x/(1+y*y)+y/(1+x*x);

	printf("\n РЕЗУЛЬТАТ: \n");
	printf("\n    Заданi значення:");
	printf("\n \t x = %4.2f \t y = %4.2f \n", x, y);
	printf("\n    Отриманий результат: %4.3f", F);

	int getch(); getch();
	return 0;
}

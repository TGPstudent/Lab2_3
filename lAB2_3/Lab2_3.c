// Lab2_3.c: ���������� ������������ ����� � ������������ ������-�������//

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<locale.h>
#include <conio.h>
#include <math.h>

float F;

int main()
{
	int x, y;
	setlocale(LC_CTYPE, "ukr");
	printf("\n ����i�� ��� �����: \n");
	printf("\n \t ����i�� ����� x=");
	scanf("%d", &x);
	printf("\n \t ����i�� ����� y=");
	scanf("%d", &y);

	//F = (x + y) / (x*x + x * y + y * y) + x / (1 + y * y) + y / (1 + x * x);
	F = (x+y)/(pow(x, 2) + x*y + pow(y, 2)) + x/(1 + pow(y, 2)) + y/(1 + pow(x, 2));

	printf("\n ���������: \n");
	printf("\n    �����i ��������:");
	printf("\n \t x = %d \t y = %d \n", x, y);
	printf("\n    ��������� ���������: %4.3f", F);

	int getch(); getch();
	return 0;
}

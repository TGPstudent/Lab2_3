// Lab2_1.c: ���������� ������������ ����� � ������������ ������-�������//

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<locale.h>
#include <conio.h>

float x, y, F;

int main()
{
	setlocale(LC_CTYPE, "ukr");
	printf("\n ����i�� ��� �����: \n");
	printf("\n \t ����i�� ����� x=");
	scanf("%f", &x);
	printf("\n \t ����i�� ����� y=");
	scanf("%f", &y);

	F = (x+y)/(x*x+x*y+y*y)+x/(1+y*y)+y/(1+x*x);

	printf("\n ���������: \n");
	printf("\n    �����i ��������:");
	printf("\n \t x = %4.2f \t y = %4.2f \n", x, y);
	printf("\n    ��������� ���������: %4.3f", F);

	int getch(); getch();
	return 0;
}

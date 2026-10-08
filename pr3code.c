#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#define D 2.54
#define D_isp 2.32166
int main()
{
	setlocale(LC_CTYPE, "RUS");
	//data();
	//dym_v_sm();
	dz();
}

int data()
{
	int num, num1;
	puts("Введите первое целое число");
	scanf("%d", &num);
	printf("Введено число %d\n", num);
	puts("Введеите второе целое число");
	scanf("%d", &num1);
	printf("Введено число %d\n", num1);
	printf("Сумма чисел %d и %d равна %d\n", num, num1, num + num1);
	printf("Разность чисел %d и %d равна %d\n", num, num1, num - num1);
	printf("Произведение чисел %d и %d равно %d\n", num, num1, num * num1);
	printf("Частное чисел %.0f и %.0f равно %.2f\n",(float)num, (float)num1, (float)num / (float)num1);
	printf("Остаток от деления %i на %i равен %i\n\n\n", num, num1, num % num1);
	return 123;

}

float dym_v_sm()
{
	int dym;
	float result, result_isp;
	//D = 2.54;
	printf("Введите число в дюймах\n");
	scanf("%d", &dym);
	result = D * dym;
	result_isp = D_isp * dym;
	printf("%d Англ. дюймов - это %.2f см\n", dym, result);
	printf("%d Исп. дюймов - это %.2f см\n", dym, result_isp);
	return 1234;

}

//------------------------------ДОМАШНЕЕ ЗАДАНИЕ  ВАРИАНТ 34---------------------------
//"Написать и отладить программу пересчета террабит в гигабайт и наоборот."
int dz()
{
	setlocale(LC_CTYPE, "RUS");
	float g, t;
	printf("Ведите число террабайт:\n");
	scanf("%f", &t);
	g = t * 1024.0f;
	printf("%f терабайт это %f гигабайт\n", t, g);
	printf("Ведите число гигабайт:\n");
	scanf("%f", &g);
	t = g / 1024.;
	printf("%f гигабйат это %f терабайт", g, t);
	return 12340;
}

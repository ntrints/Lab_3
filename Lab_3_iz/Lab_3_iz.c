#include<stdio.h>
#include<locale.h>
#define F 2.2046226
#define U 35.27396

float kg, f, u;

void main()
{
	setlocale(LC_ALL, "RUS");
	printf("Введите число килограмм\n");// Задание 30
	scanf("%f", &kg);
	f = F * kg; // Фунты
	u = U * kg; // Унции
	printf("%f килограмм - %f фунтов\n", kg, f);
	printf("%f килограмм - %f фунтов\n", kg, u);
	


}
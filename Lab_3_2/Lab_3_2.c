#include<stdio.h>
#include<locale.h>
#define D 2.54
#define F 2.7076

int dm;
float resdm, resst;

void main()
{
	setlocale(LC_ALL, "RUS");
	puts("Введите целое число дюймов:");
	scanf("%d", &dm);
	resdm = D * dm; // Дюймы классические
	resst = F * dm; // Дюймы старославянские
	printf("%d дюймов - это %4.2f сантиметров\n", dm, resdm);
	printf("%d старославянских дюймов - это %4.2f сантиметров", dm, resst);
}
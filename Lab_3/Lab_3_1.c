#include <locale.h>
#include <stdio.h>

int num, x;

void pervoe()
{
	setlocale(LC_ALL,"RUS");
	puts("введите чиcло:");
	scanf("%d", &num);
	printf("Введено число %d\n", num);

}

void vtoroe()
{
	setlocale(LC_ALL, "RUS");
	puts("введите чиcло");
	scanf("%d", &x);
	printf("Введено число %d\n", x);
}

void oba()
{
	setlocale(LC_ALL, "RUS");
	printf("Сумма: %d\nРазность: %d\nПроизведение: %d\nЧастное: %d\nОстаток: %d\n", num + x, num - x, num * x, num / x, num % x);
}

void main()
{
	pervoe();
	getchar();
	vtoroe();
	getchar();
	oba();
	getchar();
}

#include <locale.h>
#include <stdio.h>

int num, x;

void pervoe()
{
	setlocale(LC_ALL,"RUS");
	puts("������� ��c��:");
	scanf("%d", &num);
	printf("������� ����� %d\n", num);

}

void vtoroe()
{
	setlocale(LC_ALL, "RUS");
	puts("������� ��c��");
	scanf("%d", &x);
	printf("������� ����� %d\n", x);
}

void oba()
{
	setlocale(LC_ALL, "RUS");
	printf("�����: %d\n��������: %d\n������������: %d\n�������: %d\n�������: %d\n", num + x, num - x, num * x, num / x, num % x);
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

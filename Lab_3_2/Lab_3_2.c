#include<stdio.h>
#include<locale.h>
#define D 2.54
#define F 2.7076

int dm;
float resdm, resst;

void main()
{
	setlocale(LC_ALL, "RUS");
	puts("������� ����� ����� ������:");
	scanf("%d", &dm);
	resdm = D * dm; // ����� ������������
	resst = F * dm; // ����� ���������������
	printf("%d ������ - ��� %4.2f �����������\n", dm, resdm);
	printf("%d ��������������� ������ - ��� %4.2f �����������", dm, resst);
}
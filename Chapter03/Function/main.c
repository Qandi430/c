#include<stdio.h>

void main() 
{
	int a;
	//scanf�� ������������ ����������� scanf_s�� ���� // ������ ������ ����.
	//scanf_s("%d", &a);
	//printf("%d", a);

	a = 127;
	printf("a�� ���� %d ������ %o �Դϴ�. \n", 8, a);
	printf("a�� ���� %d ������ %d �Դϴ�. \n", 10, a);
	printf("a�� ���� %d ������ %x �Դϴ�. \n", 16, a);
	/*
		%d = 10 ����
		%o = 8����
		%x = 16����
	*/

}
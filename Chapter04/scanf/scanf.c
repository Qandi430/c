#include<stdio.h>
void main() {
	double celsius;

	printf("���� �µ��� ȭ�� �µ��� �ٲ��ִ� ���α׷� �Դϴ� \n");
	printf("���� �µ��� �Է����ּ��� : ");
	scanf_s("%lf", &celsius);

	printf("�����µ� %f ���� ȭ���� %f �� �Դϴ�", celsius, 9 * celsius / 5 + 32);

	printf("scanf_s ������ : \n");

	char ch;

	short sh;
	int i;
	long lo;

	float fl;
	double du;

	printf("char �� ���� �Է� : ");
	scanf_s("%c", &ch,sizeof(ch));

	printf("short �� ���� �Է� : ");
	scanf_s("%hd", &sh);
	printf("int �� ���� �Է� : ");
	scanf_s("%d", &i);
	printf("long �� ���� �Է� : ");
	scanf_s("%ld", &lo);

	printf("float �� ���� �Է� : ");
	scanf_s("%f", &fl);
	printf("double �� ���� �Է� : ");
	scanf_s("%lf", &du);

	printf("char : %c , short : %d , int : %d ", ch, sh, i);
	printf("long : %d , float : %f, double : %f \n", lo, fl, du);

}
#include<stdio.h>
void main() {
	double celsius;

	printf("섭씨 온도를 화씨 온도로 바꿔주는 프로그램 입니다 \n");
	printf("섭씨 온도를 입력해주세요 : ");
	scanf_s("%lf", &celsius);

	printf("섭씨온도 %f 도는 화씨로 %f 도 입니다", celsius, 9 * celsius / 5 + 32);

	printf("scanf_s 총정리 : \n");

	char ch;

	short sh;
	int i;
	long lo;

	float fl;
	double du;

	printf("char 형 변수 입력 : ");
	scanf_s("%c", &ch,sizeof(ch));

	printf("short 형 변수 입력 : ");
	scanf_s("%hd", &sh);
	printf("int 형 변수 입력 : ");
	scanf_s("%d", &i);
	printf("long 형 변수 입력 : ");
	scanf_s("%ld", &lo);

	printf("float 형 변수 입력 : ");
	scanf_s("%f", &fl);
	printf("double 형 변수 입력 : ");
	scanf_s("%lf", &du);

	printf("char : %c , short : %d , int : %d ", ch, sh, i);
	printf("long : %d , float : %f, double : %f \n", lo, fl, du);

}
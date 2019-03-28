#include<stdio.h>

void main() 
{
	int a;
	//scanf는 안전성이유로 사용하지않음 scanf_s를 권장 // 컴파일 오류가 난다.
	//scanf_s("%d", &a);
	//printf("%d", a);

	a = 127;
	printf("a의 값은 %d 진수로 %o 입니다. \n", 8, a);
	printf("a의 값은 %d 진수로 %d 입니다. \n", 10, a);
	printf("a의 값은 %d 진수로 %x 입니다. \n", 16, a);
	/*
		%d = 10 진수
		%o = 8진주
		%x = 16진수
	*/

}
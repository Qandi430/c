#include<stdio.h>
#include<string.h>

void main() 
{
	///*Chapter02 자료형과 변수형*/
	//char name[20] = "홍길동";	//이름
	//char grade = 'b';			//등급
	//int scorekor = 80;		    //국어점수
	//int scoremat = 75;			//수학점수
	//int scoreeng = 86;			//영어점수
	//int scoresci = 92;			//과학점수

	////값을 바꾸면 그아래는 바뀐값으로 동작
	//scorekor = 100;
	//scoremat = 42;
	//scoreeng = 67;
	//scoresci = 96;
	//grade = 'a';
	//strcpy(name,"김철수");

	////strcpy(문자열 변수, "넣을 새 문자열"); 문자열 변경함수

	/*Chapter04 출력문*/
	char name[20] = "홍길동";	//이름
	char grade = 'b';			//등급
	int scoreKOR = 80;		    //국어점수
	int scoreMAT = 75;			//수학점수
	int scoreENG = 86;			//영어점수
	int scoreSCI = 92;			//과학점수

	int scoreTotal = 0;			//총점
	float scoreAverage = 0.0F;	//평균

	//총점계산
	scoreTotal = scoreKOR + scoreMAT + scoreENG + scoreSCI;
	//평균계산
	scoreAverage = (float)scoreTotal / 4;		//(자료형) 형변환(케스팅)
	printf("%s의 성적\n", name);
	printf("국어 점수 : %d\n", scoreKOR);
	printf("수학 점수 : %d\n", scoreKOR);
	printf("국어 점수 : %d\n", scoreKOR);
	printf("국어 점수 : %d\n", scoreKOR);

}

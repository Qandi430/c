#include<stdio.h>
#include<string.h>

void main() 
{
	///*Chapter02 �ڷ����� ������*/
	//char name[20] = "ȫ�浿";	//�̸�
	//char grade = 'b';			//���
	//int scorekor = 80;		    //��������
	//int scoremat = 75;			//��������
	//int scoreeng = 86;			//��������
	//int scoresci = 92;			//��������

	////���� �ٲٸ� �׾Ʒ��� �ٲﰪ���� ����
	//scorekor = 100;
	//scoremat = 42;
	//scoreeng = 67;
	//scoresci = 96;
	//grade = 'a';
	//strcpy(name,"��ö��");

	////strcpy(���ڿ� ����, "���� �� ���ڿ�"); ���ڿ� �����Լ�

	/*Chapter04 ��¹�*/
	char name[20] = "ȫ�浿";	//�̸�
	char grade = 'b';			//���
	int scoreKOR = 80;		    //��������
	int scoreMAT = 75;			//��������
	int scoreENG = 86;			//��������
	int scoreSCI = 92;			//��������

	int scoreTotal = 0;			//����
	float scoreAverage = 0.0F;	//���

	//�������
	scoreTotal = scoreKOR + scoreMAT + scoreENG + scoreSCI;
	//��հ��
	scoreAverage = (float)scoreTotal / 4;		//(�ڷ���) ����ȯ(�ɽ���)
	printf("%s�� ����\n", name);
	printf("���� ���� : %d\n", scoreKOR);
	printf("���� ���� : %d\n", scoreKOR);
	printf("���� ���� : %d\n", scoreKOR);
	printf("���� ���� : %d\n", scoreKOR);

}

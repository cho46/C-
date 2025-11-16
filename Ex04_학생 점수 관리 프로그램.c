#include "myheader.h"

#define NAME_LEN 20
#define STUDENT_COUNT 3

typedef struct point 
{
	char name[NAME_LEN];
	int algo;
	int info;
	int math;
	int total;
	double aver;
}point;

void input(point* s)
{
	for (int i = 0; i < STUDENT_COUNT; i++)
	{
		system("cls");
		printf("%d번 학생 입력: ", i + 1);
		gets_s(s[i].name, NAME_LEN);

		printf("알고리즘: ");
		scanf("%d", &s[i].algo);
		while (getchar() != '\n');

		printf("자료구조: ");
		scanf("%d", &s[i].info);
		while (getchar() != '\n');

		printf("이산수학: ");
		scanf("%d", &s[i].math);
		while (getchar() != '\n');

		s[i].total = (s[i].algo + s[i].info + s[i].math);
		s[i].aver = s[i].total / 3;
	}
}
void output(point* s)
{
	system("cls");

	printf("\t\t***학생 점수 출력***\n\n");
	printf("%s \t%12s \t%12s \t%12s \t%12s \t%12s \t%12s\n", "번호", "이름", "알고리즘", "자료구조", "이산수학", "총점", "평균");

	for (int i = 0; i < STUDENT_COUNT; i++)
	{
		printf("%d \t%12s \t%12d \t%12d \t%12d \t%12d \t%12.2f\n", i + 1, s[i].name, s[i].algo, s[i].info, s[i].math, s[i].total, s[i].aver);
	}
}
int main()
{
	struct point s[STUDENT_COUNT];
	system("cls");
	
	while (1)
	{
		system("cls");
		printf("학생 점수 관리 프로그램\n\n");
		printf("1. 학생 점수 입력\n");
		printf("2. 학생 점수 출력\n");
		printf("0. 프로그램 종료\n");

		int num;
		printf("\n\n메뉴 선택: ");
		scanf("%d", &num);
		bufferClear();

		switch (num)
		{
		case 1:
			input(s);
			break;
		case 2:
			output(s);
			break;
		case 0:
			return 0;
		}

		printf("\n\n\t\t");
		system("pause");

	}


	return 0;
}
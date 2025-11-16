#include "myheader.h"

#define NAME_LEN 20
#define STUDENT_COUNT 3
typedef struct run
{
	char name[NAME_LEN];
	int fir, sec, thi;
	double ave;
	char app[NAME_LEN];
}run;

char* Rank(run* p)
{
	if  (p[0].ave<=p[1].ave && p[0].ave<=p[2].ave)
	{
		return p[0].name;
	}
	else if (p[1].ave <= p[0].ave && p[1].ave <= p[2].ave)
	{
		return p[1].name;
	}
	else
	{
		return p[2].name;
	}
}

int main()
{
	run s[STUDENT_COUNT];
	char comp[NAME_LEN] = "합격";
	char fail[NAME_LEN] = "불합격";

	for (int i = 0; i < STUDENT_COUNT; i++)
	{
		system("cls");
		printf("[%d번 학생 기록 등록]\n",i+1);
		printf("이름: ");
		gets_s(s[i].name,NAME_LEN);
		printf("100m 기록(3회 입력 공백 구분): ");
		scanf("%d %d %d", &s[i].fir, &s[i].sec, &s[i].thi);
		bufferClear();
		s[i].ave = (s[i].fir + s[i].sec + s[i].thi) /3.0;
		if (s[i].ave<=11.00)
		{
			strcpy(s[i].app, comp);
		}
		else
		{
			strcpy(s[i].app, fail);
		}

	}
	system("cls");
	printf("\t\t***100m 달리기 평가 보고서***\n");
	printf("---------------------------------------------------------------------\n");
	printf("%5s %12s %20s %12s\n","번호","이름","100m기록 평균","평가결과");
	printf("---------------------------------------------------------------------\n");
	int i;
	for (i = 0; i < STUDENT_COUNT; i++)
	{
		printf("%5d %12s %20.2f %12s\n", i + 1, s[i].name, s[i].ave, s[i].app);
	}
	printf("---------------------------------------------------------------------\n");
	printf("100m 평균 기록 1등은 %s 입니다.", Rank(s));
	printf("\n---------------------------------------------------------------------\n");
	return 0;
}
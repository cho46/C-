#include "myheader.h"

#define STUDENT_CNT 100
#define STUDENT_SIZE 30

typedef struct student
{
	int num;
	char name[STUDENT_SIZE];
	int lang;
	int eng;
	int math;
	int total;
	double ave;
	int rank;
} student;

void stuRank(student* s, int num)
{
	for (int i = 0; i < num; i++)
	{
		s[i].rank = 1;
		for (int j = 0; j < num; j++)
		{
			if (s[i].ave<s[j].ave)
			{
				s[i].rank++;
			}
		}
	}
}
void inputInfo(student* s, int* num)
{
	while (1)
	{
		if (*num == STUDENT_CNT) {
			
			printf("최대 입력 가능 인원을 초과했습니다. 삭제후 다시시도해주세요.\n");
			system("pause");
			break;
		}
		system("cls");
		int choice;

		s[*num].num = *num + 1;
		printf("입력 : 00%d\n", s[*num].num);

		printf("이름 : ");
		fgets(s[*num].name, STUDENT_SIZE, stdin);
		removeEnter(s[*num].name);

		printf("국어점수 : ");
		scanf("%d", &s[*num].lang);
		bufferClear();

		printf("영어점수 : ");
		scanf("%d", &s[*num].eng);
		bufferClear();

		printf("수학점수 : ");
		scanf("%d", &s[*num].math);
		bufferClear();

		s[*num].total = s[*num].lang + s[*num].eng + s[*num].math;
		s[*num].ave = s[*num].total / 3.00;
		
		(*num)++;
		stuRank(s, *num);

		printf("\n\n\n총 등록한 인원수 = %d명, 저장 가능한 인원수 = %d\n\n", *num, STUDENT_CNT - *num);
		printf("계속 등록하시겠습니까? (1: 계속, 0: 종료): ");
		scanf("%d", &choice);
		bufferClear();
		if (choice == 0)
			break;
	}
}

void outputInfo(student* s, int num)
{
	system("cls");
	printf("\t\t***** 성 적 출 력 *****\n");
	printf(" %7s %7s %7s %7s %7s %7s %7s %7s\n", "번호", "이름", "국어", "영어", "수학", "총점", "평균", "순위");
	
	for (int i = 0; i < num; i++)
	{
		printf(" %7d %7s %7d %7d %7d %7d %7.2f %7d\n",s[i].num, s[i].name, s[i].lang, s[i].eng, s[i].math, s[i].total, s[i].ave, s[i].rank);
	}
	system("pause");
}

void sortIndex(student* pstu, int count)
{
	system("cls");
	printf(" * * * 정 렬 메 뉴 * * *\n\n");
	printf("1. 오름차순\n");
	printf("2. 내림차순\n");
	printf("3. 이전메뉴\n");
	printf("선택 : ");

	int choice;
	scanf("%d", &choice);
	bufferClear();

	switch (choice)
	{
	case 1:
		for (int i = 0; i < count - 1; i++)
		{
			for (int j = i + 1; j < count; j++)
			{
				if (strcmp(pstu[i].name, pstu[j].name) > 0)
				{
					student temp = pstu[i];
					pstu[i] = pstu[j];
					pstu[j] = temp;
				}
			}
		}
		printf("오름차순 정렬되었습니다.\n");
		break;

	case 2:
		for (int i = 0; i < count - 1; i++)
		{
			for (int j = i + 1; j < count; j++)
			{
				if (strcmp(pstu[i].name, pstu[j].name) < 0)
				{
					student temp = pstu[i];
					pstu[i] = pstu[j];
					pstu[j] = temp;
				}
			}
		}
		printf("내림차순 정렬되었습니다.\n");
		break;

	case 3:
		return;
	}
	system("pause");
}
int searchStu(const student* s, int num, const char* buf)
{
	for (int i = 0; i < num; i++)
	{
		if (strcmp(s[i].name, buf) == 0)
		{
			return i;
		}
	}
	return -1;
}
void fileSave(student* s, int num);
void fileOpen(student* s, int* num);
int main()
{
	
	student s[STUDENT_SIZE];
	int choice;
	int num = 0;

	fileOpen(s, &num);
	while (1)
	{
		system("cls");
		printf("\t\t***** 메 뉴 *****\n\n");
		printf("1. 입력\n");
		printf("2. 출력\n");
		printf("3. 정렬\n");
		printf("4. 검색\n");
		printf("5. 저장\n");
		printf("0. 종료\n\n");
		printf("선택 : ");

		scanf("%d", &choice);
		bufferClear();

		char buf[100];
		switch (choice)
		{
		case 1:
			inputInfo(s, &num);
			break;
		case 2:
			outputInfo(s, num);
			break;
		case 3:
			sortIndex(s, num);
			break;
		case 4:
			system("cls");
			printf("\n\n검색할 이름을 입력하세요: ");
			fgets(buf, 100, stdin);
			removeEnter(buf);
			int searchIdx = searchStu(s, num,buf);
			if (searchIdx == -1)
			{
				printf("\n\n\t\t검색한 이름은 존재하지 않습니다.\n\n\n");
				system("pause");
				break;
			}
			else
				printf(" *** 학생 검색 정보 출력 ***\n\n");
			printf(" %7s %7s %7s %7s %7s %7s %7s %7s\n", "번호", "이름", "국어", "영어", "수학", "총점", "평균", "순위");
			printf(" %7d %7s %7d %7d %7d %7d %7.2f %7d\n\n", s[searchIdx].num, s[searchIdx].name, s[searchIdx].lang, s[searchIdx].eng, s[searchIdx].math, s[searchIdx].total, s[searchIdx].ave, s[searchIdx].rank);
			system("pause");
			break;
		case 5:
			fileSave(s, num);
			system("pause");
			break;
		case 0:
			return 0;
		}
	}
}

void fileSave(student* s, int num)
{
	FILE* fp;
	if ((fp = fopen("student.txt", "w")) == NULL)
	{
		printf("\n\nFile Save Fail\n");
		return;
	}

	for (int i = 0; i < num; i++)
	{
		fprintf(fp, "%d %s %d %d %d %d %f %d \n", s[i].num, s[i].name, s[i].lang, s[i].eng, s[i].math, s[i].total, s[i].ave, s[i].rank);
	}
	printf("\n\n\t\t저장을 완료했습니다.\n\n");
	fclose(fp);
}

void fileOpen(student* s, int* num)
{
	FILE* fp;
	fp = fopen("student.txt", "r");
	if (fp == NULL)
	{
		printf("File open Fail\n");
		return;
	}

	while (fscanf(fp, "%d %s %d %d %d %d %lf %d \n", &s[*num].num, &s[*num].name, &s[*num].lang, &s[*num].eng, &s[*num].math, &s[*num].total, &s[*num].ave, &s[*num].rank) != EOF)
	{
		(*num)++;
	}
}

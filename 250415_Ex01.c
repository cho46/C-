#include <stdio.h> //입출력(내부적으로 버퍼를 사용중인 입/출력 함수)
#include <stdlib.h> //라이브러리 랜덤, 시스템
#include <time.h> // 시간
#include <math.h> // 수학 연산
#include <conio.h> //console input output(내부적으로 버퍼를 사용하지 않는 입/출력 함수)

#pragma warning (disable : 4996)
#define STUDENT 20
int mathscore(int* pscore)
{
	int i;
	srand((unsigned int)time(NULL));
	for (i = 0; i < STUDENT; i++)
	{
		pscore[i] = rand() % 100 + 1;
	}
}
int stunums(int* pnums)
{
	int i;
	for (i = 0; i < STUDENT; i++)
	{
		pnums[i] = (i + 1);
	}
}

int comparison(int* pmath, int* pnums)
{
	int i, j;
	int temp;
	for (i = 0; i < STUDENT; i++)
	{
		for (j = 0; j < STUDENT; j++)
		{
			if (pmath[i] > pmath[j])
			{
				temp = pmath[i];
				pmath[i] = pmath[j];
				pmath[j] = temp;
				temp = pnums[i];
				pnums[i] = pnums[j];
				pnums[j] = temp;
			}
		}
	}
}


int main()
{
	int math[STUDENT];
	int nums[STUDENT];

	int count;

	mathscore(math);
	stunums(nums);
	comparison(math, nums);
	printf("장학금을 받을 인원수는? ");
	scanf("%d", &count);
	printf("\n[장학금 대상자 번호 리스트]\n");
	for (int i = 0; i < count; i++)
	{
		printf("%d번%d점 ", nums[i], math[i]);
	}
	return 0;
}
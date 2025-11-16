#include <stdio.h> //입출력(내부적으로 버퍼를 사용중인 입/출력 함수)
#include <stdlib.h> //라이브러리 랜덤, 시스템
#include <time.h> // 시간
#include <math.h> // 수학 연산
#include <conio.h> //console input output(내부적으로 버퍼를 사용하지 않는 입/출력 함수)

#pragma warning (disable : 4996)
#define REGIST_LEN 15

int checkRegist(char* pRegist)
{
	int checkNums[13] = { 2, 3, 4, 5, 6, 7, 0, 8, 9, 2, 3, 4, 5 };
	int Sum = 0;

	for (int i = 0; i < 13; i++)
	{
		if (i == 6)
		{
			continue;
		}
		Sum += (pRegist[i] - '0') * checkNums[i];
	}

	Sum %= 11;
	Sum = 11 - Sum;
	if (Sum > 9)
	{
		Sum -= 10;
	}
	if (Sum == pRegist[13] - '0')
	{
		return 1;
	}
	return 0;
}



int main()
{
	char regist[REGIST_LEN];

	printf("주민등록번호를 입력하세요.");
	gets_s(regist, REGIST_LEN);

	if (checkRegist(regist))
		printf("사용 가능한 주민등록번호 입니다.");
	else
		printf("사용 불가능한 주민등록번호 입니다.");



	return 0;
}
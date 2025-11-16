#include <stdio.h> //입출력
#include <stdlib.h> //라이브러리 랜덤, 시스템
#include <time.h> // 시간
#include <math.h> // 수학 연산

#pragma warning (disable : 4996)

int main()
{
	int year;

	printf("년도 입력: ");
	scanf("%d", &year);

	//윤년인지 평년인지를 판별하는 코드 작성
	//윤년: 4년마다 한번씩 돌아오는 해로, 100년마다 돌아오는 해는 윤년이 아님.(평년)
	//그러나, 다시 400년마다 돌아오는 윤년이된다.
	int isLeapYear = 0;


	//앞조건이 거짓인 경우에만 뒤 조건을 비교함
	if (year % 4 == 0 && year%100 != 0 || year % 400 == 0)
	{
		isLeapYear = 1;
	}
	

	if (isLeapYear)
	{
		printf("%d년은 윤년입니다.", year);
	}
	else
	{
		printf("%d년은 평년입니다.", year);

	}

	return 0;
}
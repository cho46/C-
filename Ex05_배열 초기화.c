#include <stdio.h> //입출력
#include <stdlib.h> //라이브러리 랜덤, 시스템
#include <time.h> // 시간
#include <math.h> // 수학 연산

#pragma warning (disable : 4996)
#define DUMMY_VALUE 0
int main()
{
	//한개 이상만 초기화시 나머지는 0으로 채워진다.
	//int a[100] = {1};
	//
	//for (int i = 0; i < 5; i++)
	//{
	//	printf("%d ", a[i]);
	//
	//}
	//puts("");

	int months[13] = { DUMMY_VALUE,31,28,31,30,31,30,31,31,30,31,30,31 };
	int i;
	for (i = 1; i <= 12; i++)
	{
		printf("%2d월의 일수는 %2d일 입니다.\n", i, months[i]);
	}

	int search;
	printf("\n\n검색할 월을 입력 하세요.");

	scanf("%d", &search);
	

	/*for (int i = 0; i <= 12; i++)
	{
		if (i == search)
		{
			printf("검색한 %d월의 일수는 %d일 입니다.", i,months[i]);
		}
	}*/
	if (search>=1 &&search<=12)
	{
		printf("검색한 %d월의 일수는 %d일 입니다.", search, months[search]);
	}
	else
	{
		printf("검색한 월은 존재하지 않습니다.");
	}

	



	return 0;
}
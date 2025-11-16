#include <stdio.h> //입출력
#include <stdlib.h> //라이브러리 랜덤, 시스템
#include <time.h> // 시간
#include <math.h> // 수학 연산

#pragma warning (disable : 4996)

int main()
{
	int a, i, j, k;
	int arr[5] = { 40, 50, 60, 70, 80 };
	int arr1[4] = { 0, };
	printf("인덱스 입력: ");
	scanf("%d", &a);
	while (getchar() != '\n');


	for (i = 0; i < 5; i++)
	{
		if (i < a)
		{
			for (j = 0; j < a; j++)
			{
				arr1[j] = arr[j];
			}
		}
		else
		{
			arr[i - a] = arr[i];
		}
	}

	for (i = 0; i < a; i++)
	{
		arr[5 - a + i] = arr1[i];
	}



	for (i = 0; i < 5; i++)
	{
		printf("%d ", arr[i]);
	}



	return 0;
}
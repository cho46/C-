#include <stdio.h> //입출력
#include <stdlib.h> //라이브러리 랜덤, 시스템
#include <time.h> // 시간
#include <math.h> // 수학 연산

#pragma warning (disable : 4996)

#define NUMS_SIZE 100



int main()
{
	int nums[NUMS_SIZE];

	//랜덤하게 100 ~ 999사이의 데이터를 랜덤하게 저장

	for (int i = 0; i < NUMS_SIZE; i++)
	{
		nums[i] = rand() % 900 + 100;
	}


	printf("\n정렬전 데이터 출력 \n");
	for (int i = 0; i < NUMS_SIZE; i++)
	{
		printf("%5d", nums[i]);
	}
	//정렬 알고리즘 => 선택정렬(selection sort) 알고리즘
	for (int i = 0; i < NUMS_SIZE - 1; i++)
	{
		for (int j = i+1;j<NUMS_SIZE;j++)
		{
			if (nums[i] < nums[j])//정렬데이터>비교데이터 =>오름차순
			{
				int temp = nums[i];
				nums[i] = nums[j];
				nums[j] = temp;

			}
		}
	}





	printf("\n정렬후 데이터 출력 \n");
	for (int i = 0; i < NUMS_SIZE; i++)
	{
		printf("%5d", nums[i]);
	}




	return 0;
}
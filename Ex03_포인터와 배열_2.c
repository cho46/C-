#include <stdio.h> //입출력(내부적으로 버퍼를 사용중인 입/출력 함수)
#include <stdlib.h> //라이브러리 랜덤, 시스템
#include <time.h> // 시간
#include <math.h> // 수학 연산
#include <conio.h> //console input output(내부적으로 버퍼를 사용하지 않는 입/출력 함수)

#pragma warning (disable : 4996)
#define NUM_MAX_SIZE 100

void randomize(int* pNums, int size)
{
	//배열에 100~999사이의 정수를 랜덤하게 저장
	int i;
	for (i = 0; i < NUM_MAX_SIZE; i++)
	{
		pNums[i] = rand() % 900 + 100;
	}

}
void displayArray(int* pNums, int size)
{
	int i;
	for (i = 0; i < NUM_MAX_SIZE; i++)
	{
		printf("%d ", pNums[i]);

		if (i % 10 == 9)
		{
			puts("");
		}


	}

}
int getArraySum(int * pnums, int size)
{
	int i;
	int sum = 0;
	for (i = 0; i<NUM_MAX_SIZE; i++)
	{
		sum += pnums[i];
	}
	return sum;
}

int main()
{
	srand(time(NULL));
	int nums[NUM_MAX_SIZE];

	randomize(nums, NUM_MAX_SIZE);
	displayArray(nums, NUM_MAX_SIZE);


	printf("배열에 저장된 정수의 합계는 %d개 입니다.\n", getArraySum(nums, NUM_MAX_SIZE));

	return 0;
}
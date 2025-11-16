#include <stdio.h> //입출력
#include <stdlib.h> //라이브러리 랜덤, 시스템
#include <time.h> // 시간
#include <math.h> // 수학 연산

#pragma warning (disable : 4996)

#define ARR_SIZE 10

int main()
{
	int arr[ARR_SIZE] = { 5,6,7,8,9,10,11,12,13,14 };

	printf("original array: ");
	for (int i = 0; i < ARR_SIZE; i++)
	{
		printf("%5d", arr[i]);
	}
	puts("");

	//역순저장 알고리즘(문제 해결 방법)
	
	for (int i = 0 ;i < ARR_SIZE / 2 ;i++)
	{
		int temp = arr[i];
		arr[i] = arr[ARR_SIZE - 1 - i];
		arr[ARR_SIZE -1 -i] = temp;
	}
	

	printf("Reversed array: ");
	for (int i = 0; i < ARR_SIZE; i++)
	{
		printf("%5d", arr[i]);
	}
	puts("");


	return 0;
}
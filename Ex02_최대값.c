#include <stdio.h> //입출력
#include <stdlib.h> //라이브러리 랜덤, 시스템
#include <time.h> // 시간
#include <math.h> // 수학 연산

#pragma warning (disable : 4996)
#define MAX_SIZE 10


int main()
{
	//배열의 크기는 상수만 가능 => 변수 불가능함.(scanf로 지정)
	int nums[MAX_SIZE];

	srand((unsigned int)time(NULL));
	//랜덤으로 값 저장
	for (int i = 0; i < MAX_SIZE; i++)
	{
		nums[i] = rand();
		printf("%5d ", nums[i]);
	}
	//1.배열의 첫번째 값을 최댓값으로 설정
	int max = nums[0];
	int min = nums[0];
	//2. 배열의 두번째부터 마지막값까지 반복
	for (int i = 1;i<MAX_SIZE;i++)
	{
		//최대값 < 비교값
		if (max < nums[i])
		{
			max = nums[i];
		}
	}
	for (int i = 1; i < MAX_SIZE; i++)
	{
		if (min > nums[i])
		{
			min = nums[i];
		}
	}

	printf("\n배열에 저장된 값 중에서 가장 큰값은 %d 입니다", max);
	printf("\n배열에 저장된 값 중에서 가장 작은값은 %d 입니다", min);

	return 0;
}
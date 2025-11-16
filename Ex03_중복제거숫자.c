#include <stdio.h> //입출력
#include <stdlib.h> //라이브러리 랜덤, 시스템
#include <time.h> // 시간
#include <math.h> // 수학 연산

#pragma warning (disable : 4996)

int main()
{
	int a[5][5];
	int i, j;
	int num = 1;
	for (i = 0; i < 5; i++)
	{
		for (j = 0; j < 5; j++)
		{
			a[i][j] = num++;
		}
	}

	//피셔-예이츠 셔플 알고리즘
	//가로세로인덱스를 추출

	
	int temp;
	for (i = 0; i < 5; i++)
	{
		for (j = 0; j < 5; j++)
		{
			//무작위로 바꿀 인덱스를 저장
			int randRow = rand() % 5;
			int randCol = rand() % 5;


			//두개의 값을 교환
			temp = a[i][j];
			a[i][j] = a[randRow][randCol];
			a[randRow][randCol] = temp;

		}


	}





	for (i = 0; i < 5; i++)
	{
		for(j=0;j<5;j++)
		{
			printf("%2d ", a[i][j]);

		}

		puts("");
	}





	return 0;
}
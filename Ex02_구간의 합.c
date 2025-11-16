#include <stdio.h> //입출력
#include <stdlib.h> //라이브러리 랜덤, 시스템
#include <time.h> // 시간
#include <math.h> // 수학 연산
#pragma warning (disable : 4996)

#define ROW 6
#define COL 6
int main()
{
	int i, j;
	int a[ROW][COL] = {0};

	for (i = 0; i < ROW-1; i++)
	{
		for (j = 0; j < COL-1; j++)
		{
			a[i][j] = rand() % 10;

			a[i][5] += a[i][j];
			a[5][j] += a[i][j];

			if (i==j)
			{
				a[5][5] += a[i][j];
			}

		}
		
	}
	


	for (i = 0; i < ROW; i++)
	{
		for (j = 0; j < COL; j++)
		{
			printf("%5d", a[i][j]);

		}
		puts("");

	}



	return 0;
}
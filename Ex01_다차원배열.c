#include <stdio.h> //입출력
#include <stdlib.h> //라이브러리 랜덤, 시스템
#include <time.h> // 시간
#include <math.h> // 수학 연산

#pragma warning (disable : 4996)

#define ROW 8
#define COL 9


int main()
{
	int table[ROW][COL];
	
	for (int i = 0; i < ROW; i++)
	{
		
		for (int j = 0; j < COL; j++)
		{
			table[i][j] = (i+2) * (j + 1);

			printf("%4d", table[i][j]);
			
		}
		puts("");
	}


	return 0;
}
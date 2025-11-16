#include <stdio.h> //입출력
#include <stdlib.h> //라이브러리 랜덤, 시스템
#include <time.h> // 시간
#include <math.h> // 수학 연산

#pragma warning (disable : 4996)

int main()
{
	srand(time(NULL));
	int a[6];
	int i,j;
	for (i = 0; i < 6; i++)
	{	
		a[i] = rand() % 45 + 1;
		for (j = 0; j < i; j++)
		{
			if (a[i] == a[j])
			{
				i--;
				break;
			}
		}
	}
	
	for (i = 0; i < 6; i++)
	{
		
		printf("%d ", a[i]);
	}


	
	return 0;
}
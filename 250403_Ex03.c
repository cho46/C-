#include <stdio.h> //입출력
#include <stdlib.h> //라이브러리 랜덤, 시스템
#include <time.h> // 시간
#include <math.h> // 수학 연산

#pragma warning (disable : 4996)

int main()
{
	srand(time(NULL));
	int a[100];
	int s[10] = {0,};
	int i,j,sta,end,count;
	


	for (i = 0; i < 100; i++)
	{
		a[i] = rand() % 100;
		printf("%2d ", a[i]);
		if (i%10 ==9)
		{
			puts("");
		}
		
	}


	printf("*** 구간의 개수 출력 ***\n\n");
	sta = 0;
	end = 9;

	for (i = 0; i < 10; i++)
	{
		count = 0;

		for (j = 0; j < 100; j++)
		{
			if (a[j] >= sta && a[j] <= end)
			{
				count++;
			}
		}

		s[i] = count;
		printf("%2d ~ %2d 사이의 개수는 %d개 입니다.\n", sta, end, s[i]);

		sta += 10;
		end += 10;
	}
	
	
	
	





	return 0;
}
#include <stdio.h>
#pragma warning (disable : 4996)

int main()
{
	int i, j, k;
	k = 0;
	for (i = 1; i <= 91; i+=10) //1부터 100까지 출력
	{
		for (j = i; j <= i+9; j++)//출력 숫자(시작수 - 시작수 + 9)
		{
			//숫자 출력
			printf("%2d", j);

			//출력숫자의 합계
			k = k + j;
			//부호출력
			if (j % 10 == 0)
			{
				printf("=");
				printf("%d", k);
				k = 0;
			}

			else 
			{
				printf("+");
			}
			
			
		}
		//줄바꿈
		puts("");
	}

	return 0;



}
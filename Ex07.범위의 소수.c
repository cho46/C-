/*
2 ~ 1000사이의 정수 중 소수를 구해 모두 출력.
단 소수는 10개 단위로 출력한다.
소수 출력 후, 소수의 개수도 출력


[출력 예]
2 3 5 7 11 13 17 19 23 29
31 37 ....

1 ~ 1000 사이의 소수의 개수는 _개 입니다.

*/



#include <stdio.h> //입출력
#include <stdlib.h> //라이브러리 랜덤, 시스템
#include <time.h> // 시간
#include <math.h> // 수학 연산

#pragma warning (disable : 4996)

int main()
{
	int isPrime, i,j, count;
	count = 0;

	for (i = 2; i <= 1000; i++) // 2부터 1000까지 판별할 수
	{
		isPrime = 1;
		for (j = 2; j < i; j++)
		{
			if (i%2 == 0)
			{
				isPrime = 0;
				break;
			}
			
		}
		if (isPrime == 1)
		{
			printf("%d ", i);
			count++;

			if (count % 10 == 0)
			{
				puts("");
			}
		}
		
	}
	printf("%d", count);




	return 0;
}
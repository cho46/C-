#include <stdio.h> //입출력
#include <stdlib.h> //라이브러리 랜덤, 시스템
#include <time.h> // 시간
#include <math.h> // 수학 연산

#pragma warning (disable : 4996)

int main()
{
	int i, n1, n2, prime, nprime, confirm;

	prime = 0;
	nprime = 0;
	printf("두수 입력(공백구분):");
	scanf("%d %d", &n1, &n2);
	while (getchar() != '\n');

	puts("");
	if (n1 == 1)
	{
		printf("+ 1 ");
		nprime += 1;
	}

	for (i = n1; i <= n2; i++)
	{
		confirm = 1;
		for (int j = 2; j < i; j++)
		{
			if (i % j == 0)
			{
				confirm = 0;
				nprime += i;
				printf("-%2d ", i);
				break;
			}

		}

		if (confirm == 1 && i != 1)
		{
			prime += i;
			printf("+%2d ", i);
		}

	}
	printf("\n\n= 결과는 %d 입니다.\n\n", nprime - prime);


	return 0;
}
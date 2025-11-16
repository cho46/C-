#include <stdio.h> //입출력
#include <stdlib.h> //라이브러리 랜덤, 시스템
#include <time.h> // 시간
#include <math.h> // 수학 연산

#pragma warning (disable : 4996)



/*
소수는 1과 자신외에는 나누어 떨어지지 않는 수.
*/

int main()
{
	int num, num2, isPrime;
	int i = 1;
	printf("정수를 입력 하세요");
	scanf("%d", &num);
	while (getchar() != '\n');

	//소수일지 합성수인지 판별하는 코드
	isPrime = 1;
	for (i = 2; i < num; i++) // 나누는 수를 반복
	{
		if (num % i == 0) //나누어 떨어진다면?
		{
			isPrime = 0; //합성수
			break;
		}

	}
	
	if (isPrime == 1)
	{
		printf("%d는 소수입니다.\n", num);
	}
	else
	{
		printf("%d는 합성수입니다.\n", num);
	}

	return 0;
}
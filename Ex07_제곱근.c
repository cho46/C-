#include <stdio.h>
#include <math.h>//수학에 관련된 함수
#pragma warning (disable : 4996)

int main()
{
	double num, result;
	char isExit;

	while (1)
	{
		printf("제곱근을 구할 수 입력: ");
		scanf("%lf", &num);
		while (getchar() != '\n');


		if (num<0)
		{
			printf("\n0보다 작은 수는 입력 받을 수 없습니다.\n");
				continue;//반복문의 끝으로 이동(continue아래 명령은 수행되지 않는다.)
		}

		result = sqrt(num);


		printf("%.2f의 제곱근은 %.2f 입니다.\n", num, result);

		printf("\n\t\t계속(아무키) / 종료(E/e): ");
		
		isExit = getchar();
		while (getchar() != '\n');

		if (isExit =='E' || isExit == 'e')
		{
			break;
		}

	}
	return 0;
}
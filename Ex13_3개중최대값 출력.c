#include <stdio.h>
#pragma warning (disable : 4996)

int main()
{
	int a, b, c;



	printf("3개의 정수 입력(공백구분)");
	scanf("%d %d %d", &a, &b, &c);
	if (a >= b && a >= c)
	{
		printf("3개의 정수중 가장 큰 수는 %d입니다", a);
	}
	else if (b >= a && b >= c)
	{
		printf("3개의 정수중 가장 큰 수는 %d입니다.", b);

	}
	else if (c >= a && c >= b)
	{
		printf("3개의 정수중 가장 큰 수는 %d입니다.", c);
	}
	else
		printf("3개의 정수 중 가장 큰 수는 %d입니다.", a);
	{

	}
	return 0;
}
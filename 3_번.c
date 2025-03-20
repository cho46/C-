#include <stdio.h>
#pragma warning (disable : 4996)

int main()
{
	int num;
	
	printf("정수 입력: ");
	scanf("%d", &num);

	if (num%3 == 0 && num%4 == 0)
	{
		printf("%d는 3의배수 이면서, 4의 배수 입니다.",num);
	}
	else if (num % 3 == 0)
	{
		printf("%d는 3의 배수입니다.",num);
	}
	else if (num % 4 == 0)
	{
		printf("%d는 4의 배수입니다.",num);
	}
	else
	{
		printf("%d는 3의 배수도 4의 배수도 아닙니다.", num);
	}

	return 0;
}
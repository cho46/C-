#include <stdio.h>
#pragma warning (disable:4996)

int main()
{
	int num;

	printf("정수입력:");
	scanf("%d", &num);


	if (num < 0) //음의 정수인 경우?
	{
		num *= -1;
		printf("음의 정수를 양의 정수로 변환합니다.\n");

	}



	printf("결과는 %d입니다. \n", num);

	





	return 0;
}
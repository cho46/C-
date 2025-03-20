#include <stdio.h>
#pragma warning (disable : 4996)

int main()
{
	int num;


	printf("정수 입력: ");
	scanf("%d", &num);

	if (num %2 != 0)
	{
		//수행되는 명령이 단문(한줄)인경우, 중괄호'{}'는 생략 가능함.
		printf("입력한 정수는 홀수입니다.");
	}
	else
	{
		printf("입력한 정수는 짝수입니다.");
	}

	return 0;
}
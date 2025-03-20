#include <stdio.h>
#pragma warning (disable : 4996)

int main()
{
	int num;


	printf("정수 입력: ");
	scanf("%d", &num);
	
	


	switch (num%2)
	{
	case 0:
		printf("짝수입니다.");
			break;
	default:
		printf("홀수입니다.");
	}
	

	return 0;
}
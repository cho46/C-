#include <stdio.h>
#pragma warning (disable : 4996)

int main()
{
	int num;
	
	/*while (1)
	{
	printf("1부터 5사이의 정수입력: ");
	scanf("%d", &num);

	if (num>=1 &&num<=5)
	{
		break;
	}


	}*/


	do
	{
		printf("1부터 5사이의 정수입력: ");
		scanf("%d", &num);
	} while (num < 1 || num>5); //반복하는 조건 -> 잘못 입력 받은 경우


	printf("\n결과는 %d입니다.\n", num);



	return 0;
}
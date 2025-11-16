#include <stdio.h>
#pragma warning (disable : 4996)

int main()
{
	int num,total;
	total = 0;
	
	/*while (1)
	{
		printf("정수입력(0을 입력 받으면 종료 됩니다.) :");
		scanf("%d", &num);
		if (num == 0)
		{
			break;
		}
		else
		{
			total += num;
		}
	}
	printf("%d", total);*/


	do
	{
		printf("정수입력(0을 입력 받으면 종료 됩니다.)");
		scanf("%d", &num);
		total += num;
	} while (num!=0);
		
		
		printf("%d", total);

	return 0;
}
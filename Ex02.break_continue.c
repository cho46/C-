#include <stdio.h>
#pragma warning (disable : 4996)

int main()
{
	//0만 거짓(false), 0이 아닌 모든값은 참(True)
	int a = 3;
	while (0)
	{
		printf("@");
	}
	puts("");


	do
	{
		printf("@");
	} while(0);
	puts("");
	
	int i;
	for (i = 0;;i++)//for문의 무한루프(;;),(조건이 없어도 무한루프)
	{
		printf("%d ",i);
		if (i > 100)
		{
			break; //반복문 탈출
		}
	}
	puts("");

	i = 1;
	while (1)
	{
		printf("%d ", i++);

		if (i>100)
		{
			break;
		}
		if (i > 50)
		{
			continue;
		}
		printf("&&&&&&&&&&\n");
		printf("@@@@@@@@@@\n");
	}


	return 0;
}
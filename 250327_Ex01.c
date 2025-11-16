#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#pragma warning (disable : 4996)

int main()
{
	int num,com;
	srand(time(NULL));
	while (1)
	{
		printf("***가위/바위/보 게임***");
		puts("");
		puts("");

		printf("가위(1)/바위(2)/보(3)/종료(0)\n");
		printf("당신의 선택: ");
		scanf("%d", &num);
		while (getchar() != '\n');
		com = rand() % 3 + 1;
		
		if (num == 0)
		{
			break;
		}



		switch (com)
		{
		case 1:
			printf("\n컴퓨터 : 가위\n");
			if (num == 1)
			{
				printf("\n당 신 : 가위\n");
				printf("비겼다!\n");
				puts("");
			}
			else if (num == 2)
			{
				printf("당 신 : 바위\n");
				printf("당신이 이겼다!\n");
				puts("");
			}
			else
			{
				printf("당 신 : 보\n");
				printf("당신이 졌다!\n");
				puts("");
			}
			break;
		case 2:
			printf("컴퓨터 : 바위\n");
			if (num == 1)
			{
				printf("당 신 : 가위\n");
				printf("당신이 졌다!\n");
				puts("");
			}
			else if (num == 2)
			{
				printf("당 신 : 바위\n");
				printf("비겼다!\n");
				puts("");
			}
			else
			{
				printf("당 신 : 보\n");
				printf("당신이 이겼다!\n");
				puts("");
			}
			break;
		case 3:
			printf("컴퓨터 : 보\n");
			if (num == 1)
			{
				printf("당 신 : 가위\n");
				printf("당신이 이겼다!\n");
				puts("");
			}
			else if (num == 2)
			{
				printf("당 신 : 바위\n");
				printf("당신이 졌다!\n");
				puts("");
			}
			else
			{
				printf("당 신 : 보\n");
				printf("비겼다!\n");
				puts("");
			}
			break;
		}
		


	}



	return 0;
}
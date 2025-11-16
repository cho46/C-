#include <stdio.h>
#pragma warning (disable : 4996)

int main()
{
		//역별
	int i, j;

	for (i = 1;i<=5;i++)
	{
		for (j=1;j<=6 - i;j++)
		{
			printf("*");
		}
		puts("");
	}

	//56789 45678
	for (i = 5; i >= 1; i--)
	{
		for (j = i; j<=i+4; j++)
		{
			printf("%d", j);
		}
		printf("\n");
	}

	puts("");
	//1000000200000...
	for (i = 1; i <= 7; i++)
	{
		for (j = 1; j <= 7; j++)
		{
			if (i==j)
			{
				printf("%d", i);
			}
			else
			{
				printf("0");
			}
			


		}
		puts("");
	}

	puts("");


	//1001110000
	for (i = 1; i <= 9; i++)
	{
		for (j = 1; j <= i; j++)
		{
			
			/*if (i%2 ==0)
			{
				printf("0");
			}
			else
				printf("1");*/

			printf("%d", i % 2);
		}
		puts("");
	}
	puts("");
	//별 피라미드
	int k;
	for (i = 1; i <= 5; i++)
	{

		for (j = 1; j <=5 - i; j++)
		{
			printf(" ");
			
		}
		for (k = 1; k <=i+i-1 ; k++)
		{
			printf("*");
		}
		
		puts("");
	}

	//C언어 5일차과제 for문(1번, 2번, 4번, 5번, 6번)
	//C언어 이중for문(3번)
	//1 2 3 4 5 6 7 8 9 10 = 55(1부터 10까지 합)
	//11 12 13 14 15 16 17 = 155(1부터 20까지 합)
	//91 92 93 94 95 96 97 = (1부터 100까지 합)
	//암스트롱수 구하는법 각자리의 세제곱 더한수랑 자신과같은수
	//파일 업로드 후 코드 c+c c+v
	//파일이름: Ex01~Ex06.c
	//압축이름: 3일차_이름.zip
	//

	return 0;
}
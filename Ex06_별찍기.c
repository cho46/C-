#include <stdio.h>
#pragma warning (disable : 4996)

int main()
{
	int i, j;
	//(case 1)
	//for (i = 1; i <= 9; i++)
	//{
	//	if (i<=5)
	//	{
	//		for (j = 1; j<=i; j++)//1행부터 5행까지 별 출력
	//		{
			//역출력일땐 6-i

	//			printf("*");

	//		}
	//	}
	//	else
	//	{
	//		for (j = 1; j <= 10-i; j++)//6행부터 9행까지 별 출력
	//		{
			//i-4

	//			printf("*");

	//		}


	//	}

	//	


	//	puts("");
	//}

	//int star = 5;
	//for (i = 1; i <= 9; i++)//행
	//{
	//	for (j = 1; j <= star; j++)//별 반복횟수
	//	{
	//		printf("* ");

	//	}
	//	puts("");

	//	//if (i <= 4)//4행까지는 *개수 증가
	//	//{
	//	//	star++;
	//	//}
	//	//else
	//	//{
	//	//	star--;
	//	//}
	//	//조건? 참 : 거짓
	//	i <= 4 ?  star--: star++;
	//}

	/*####*
	###**
	##***
	#****
	******/
	int k;
	for (i = 1; i <= 9; i++)
	{
		if (i<=5)
		{
			for (j = 1; j<=5-i; j++)
			{
			

				printf("# ");

			}
			for (k = 1; k <= i; k++)
			{
				printf("* ");
			}



		}
		else
		{
			for (j = 1; j <= i - 5; j++)
			{
			

				printf("# ");

			}
			for (k = 1; k <= 10-i; k++)
			{
				printf("* ");
			}

		}

		


		puts("");
	}

	//int star = 1;
	//int hash = 4;
	//for (i = 1; i <= 9; i++)//행
	//{
	// for (j = 1; j <= hash; j++)//# 반복횟수
	//	{
	//		printf("# ");
	// 
	// 
	//	for (j = 1; j <= star; j++)//* 반복횟수
	//	{
	//		printf("* ");

	//	}
	//	puts("");

	//	if (i <= 4)//4행까지는 *개수 증가
	//	{
	//		star++;
	//	}
	//	else
	//	{
	//		star--;
	//	}
	//	//조건? 참 : 거짓
	//	i <= 4 ? (star++, hash--) : (star--, hash++);
	//} 




	return 0;
}
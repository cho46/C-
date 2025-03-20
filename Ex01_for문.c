#include <stdio.h>
#pragma warning (disable : 4996)

int main()
{
	//for(초기값;조건;증/감값)
	//{
		//실행문
	//}

	int i; // 1부터 100까지 증가하는 값을 저장할 변수

	for (i = 1; i <= 100; ++i)
	{
		printf("%d ", i);
	}

	printf("\n\n");

	//0부터 90까지 10씩 증가
	for (i = 0; i <= 90; i += 10)
	{
		printf("%d \t", i);
	}

	printf("\n\n");

	//100 부터 500까지 1씩 증가
	for (i = 100; i <= 500; ++i)
	{
		printf("%d ", i);
	}

	printf("\n\n");

	//1부터 50까지 5씩 증가
	for (i = 1; i <= 50; i += 5)
	{
		printf("%d ", i);
	}

	printf("\n\n");

	for (i = 1; i <= 91; i += 10)
	{
		//%뒤의 숫자는 공간확보
		printf("%10d ~ %2d\n", i, i+9);
	}

	for (i = 1; i <= 9; ++i)
	{
		printf("2 * %2d = %3d\n", i, 2 * i);
	}

	puts(""); //printf("\n");

	int total = 0;
	for (i = 100; i<=500; ++i)
	{
		total = total + i;
		
	}
		printf("100부터 500까지의 범위 합계는 %d입니다.\n", total);

		total = 0;

		for (i = 3; i <= 100; i+=3)
		{
				total = total + i;
		}
		printf("\n1부터 100까지의 3의배수 합은 %d입니다.", total);

		total = 0;
		for (i = 100; i <= 200; i += 4)
		{
			total = total + 1;
		}


		printf("\n100부터 200까지의 4의배수의 개수는 %d입니다.\n", total);

		total = 0;
		//3의배수 이면서 2의 배수가 아닌 1부터 100까지의 합

		for (i = 3; i <= 100; i += 3)
		{

			if (i%2 != 0)
			{
				
				total += i;

			}

		}
		printf("\n3의배수 이면서 2의 배수가 아닌 1부터 100까지의 합 %d", total);

		total = 0;

		//200 ~ 400사이의 정수중 4의 배수면서 5의배수인 수의 개수
		for (i = 200; i <= 400; i += 4)
		{
			if (i % 5 == 0)
			{
				++total;
			}
			
		}

		printf("\n200 ~400사이의 정수중 4의 배수면서 5의배수인 수의 개수 %d\n", total);


		//0도에서 100도까지 섭씨를 화씨로 변경
		// 화씨 = (섭씨온도 * 1.8)+32

		total = 0;
		printf("\n");

		for (i = 0;i<=100;i +=4)
		{
			double f = (i * 1.8) + 32;
			printf("%8d => %8.2f\n", i, f);
		}






	return 0;
}
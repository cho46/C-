#include <stdio.h>
#pragma warning (disable : 4996)

int main()
{
	int i = 1;
	//for문

	/*
	for (i = 1; i >= 100; i++)
	{
		printf("%d", i);
	}
	puts("");*/

	//while문
	/*while (조건)
	{
		반복 실행문
	}*/

	i = 1;
	while (i<=100)
	{
		printf("%d", i);
		i++;
	}
	puts("");


	//do~while문
	/*do
	{
		반복실행문
	} while (조건);*/

	do
	{
		printf("%d", i);
		i++;
	} while (i<=100);
	

	return 0;
}
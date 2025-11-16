#include <stdio.h>
#include <stdlib.h>//standard library //rand,srand
#include <time.h>//시간 관련 헤더파일 //time
#pragma warning (disable : 4996)

int main()
{
	int num;
	
	//srand함수는 rand함수 사용 전 한번만 호출한다.(특히, 반복문내에서 쓰지 않도록한다)
	//time함수: 1970년 자정이후로 1초씩 증가되는 값을 리턴
	

	srand(time(NULL)); //rand함수의 seed값

	for (int i = 1; i <= 100; i++)
	{

		num = rand(); //0~32767 사이중 하나의 수를 추출
		printf("%d ", num);
	}
	puts("");


	for (int i = 1; i <= 100; i++)
	{

		num = rand() % 3; //0 ~ 2사이중 하나의 수를 추출 ex) %10일경우 0~9까지 나옴.
		//start ~ end //rand()%(end -start+1)+start
		printf("%d ", num);
	}
	puts("");

	//start ~ end //rand()%(end -start+1)+start   1~3         3-1+1
	//0 ~ 2사이중 하나의 수를 추출 ex) %10일경우 0~9까지 나옴
	printf("----------------------------------------------------\n");
	
	
	
	for (int i = 1; i <= 30; i++) //10~99
	{

		num = rand() % 90+10; 
		
		printf("%d ", num);
	}
	puts("");

	for (int i = 1; i <= 10; i++) //50~80
	{

		num = rand() % 31+50;

		printf("%d ", num);
	}
	puts("");

	for (int i = 1; i <= 100; i++) //1~9
	{

		num = rand() % 9+1;

		printf("%d ", num);
	}
	puts("");

	
	for (int i = 1; i <= 100; i++) //알파벳 대문자 65~90 100개
	{

		num = rand() % 26+65;

		printf("%c ", num);
	}

	for (int i = 1; i <= 100; i++) //알파벳 소문자 97~122 100개
	{

		num = rand() % 26 + 97;

		printf("%c ", num);
	}




	int begin, end, temp;
	printf("\n\n랜덤 시작수: ");
	scanf("%d", &begin);

	printf("랜덤 끝수: ");
	scanf("%d", &end);


	if (begin>end)
	{
		//두개의 값을 교환

		temp = begin;
		begin = end;
		end = temp;
		printf("두개의 값을 교환합니다.\n");
	}

	printf("\n*** %d ~ %d사이의 랜덤한 수 100개 ***\n\n", begin, end);
		for (int i = 1; i <= 100; i++)
		{
			num = rand() % (end - begin + 1) + begin;

			printf("%d ", num);
		}

	return 0;
}
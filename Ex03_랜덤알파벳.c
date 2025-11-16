#include <stdio.h> //입출력
#include <stdlib.h> //라이브러리 랜덤, 시스템
#include <time.h> // 시간
#include <math.h> // 수학 연산

#pragma warning (disable : 4996)

#define ALPHA_SIZE 100


int main()
{
	
	char alpha[ALPHA_SIZE];

	srand((unsigned)time(NULL));
	printf("* 배열에 알파벳을 랜덤하게 저장 후 출력 *\n");
	//대문자 ('A') ~ 90('Z'),97 ~ 122
	
	for (int i = 0; i < ALPHA_SIZE; i++)
	{
		//방법 1
		/*do
		{
			alpha[i] = rand() % 58 + 65;
			
		} while (alpha[i]> 'z' && alpha[i]< 'a');*/
		
		//방법 2
		alpha[i] = rand() % 58 + 65;
		if (alpha[i] > 'Z' && alpha[i] < 'a')
		{
			i--;//같은자리를 다시뽑기 위해 i값을 감소
			continue; // continue시 증/감값으로 이동되기 때문.
		}
		
		printf("%5c ", alpha[i]);

		if (i % 10 == 9)
		{
			puts("");
		}

		puts("");

		char search;
		
		printf("\n\n검색할 문자를 입력 하세요: ");
		search = getchar();
		int count = 0;
		for (i = 0; i < 100; i++)
		{
			if (alpha[i] == search)
			{
				++count;
			}
		}


		printf("\n검색한 문자의 개수는 %d개 입니다.\n", count);



	}
	

	return 0;
}
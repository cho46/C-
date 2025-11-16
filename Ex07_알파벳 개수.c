#include <stdio.h> //입출력(내부적으로 버퍼를 사용중인 입/출력 함수)
#include <stdlib.h> //라이브러리 랜덤, 시스템
#include <time.h> // 시간
#include <math.h> // 수학 연산
#include <conio.h> //console input output(내부적으로 버퍼를 사용하지 않는 입/출력 함수)

#pragma warning (disable : 4996)
#define STR_LEN 1024
#define ALPHA_SIZE 26

int calcAlphaCount(char *str, int *count)
{
	int i;
	void strToLower(str);
	for (int i = 0; str[i] != '\0'; i++)
	{
		int index = str[i] - 97;
		count[index]++;
	}
}

int printAlphaCount(int* count)
{
	printf("[알파벳 개수 출력]");
	
	for (int i = 0; i < ALPHA_SIZE; i++)
	{
		//int j = 97;
		//printf("%c: ", j);
		//j++;
		if (count[i] !=0)
		{
			//printf("%c의 개수: %d", 'A' + 1, count[i]);
			printf("%c의 개수: ",'A' + 1);
			printStar(count[i]);
		}
		
		puts("");
	}
}

void strToLower(char* ptr)
{
	for (int i = 0; ptr[i] != '\0'; i++)
	{
		if (ptr[i] >= 'A' && ptr[i] <= 'Z')
		{
			ptr[i] += 32; //대문자를 소문자로 변환
		}
	}
}
void printStar(int* count)
{
		for (int j = 0; j <= count[i]; j++)
		{
			printf("*");
		}
		puts("");
	
}


int main()
{
	char str[STR_LEN];
	int count[ALPHA_SIZE] = { 0 };

	printf("문자열 입력: ");
	gets_s(str, STR_LEN);

	//각 문자의 개수를 count배열에 저장.
	
	int calcAlphaCount(str, count);
	//각 문자의 개수를 출력하는 함수.
	int printAlphaCount(count);


	return 0;
}
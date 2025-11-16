#include <stdio.h> //입출력(내부적으로 버퍼를 사용중인 입/출력 함수)
#include <stdlib.h> //라이브러리 랜덤, 시스템
#include <time.h> // 시간
#include <math.h> // 수학 연산
#include <conio.h> //console input output(내부적으로 버퍼를 사용하지 않는 입/출력 함수)

#pragma warning (disable : 4996)
#define STR_LEN 255

 int getUppercount(char *p)
{
	 int i;
	 int count = 0;
	for (i = 0; p[i] != '\0'; i++)
	{
		if (p[i] >= 'A' && p[i] <= 'Z')
		{
			++count;
		}

	}
	return count;
}


int main()
{
	char str[STR_LEN];

	printf("문자열 입력: ");
	gets_s(str, STR_LEN);

	//getUpperCount함수: 문자열에서 대문자의 개수를 구해 리턴하는 함수
	printf("입력 받은 문자열에서 대문자의 개수는 %d 입니다.\n", getUppercount(str));



	return 0;
}
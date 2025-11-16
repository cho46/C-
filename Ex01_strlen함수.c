#include <stdio.h> //입출력(내부적으로 버퍼를 사용중인 입/출력 함수)
#include <stdlib.h> //라이브러리 랜덤, 시스템
#include <time.h> // 시간
#include <math.h> // 수학 연산
#include <conio.h> //console input output(내부적으로 버퍼를 사용하지 않는 입/출력 함수)
#include <string.h> //strlen 문자열 관련 헤더파일
#pragma warning (disable : 4996)
#define STR_LEN 255

int strlength(char* str)
{
	int i = 0;
	for (i = 0; str[i] != '\0'; i++)
	{
	}
	return i;
}
int main()
{
	char str[STR_LEN];
	
	printf("문자열 입력: ");
	gets_s(str, STR_LEN);

	//strlen(주소): 주소부터 널문자 이전의 길이를 구해 리턴하는 함수.
	printf("입력 받은 문자열은 %s이며, 문자열의 길이는 %d입니다.\n", str, strlen(str));
	printf("입력 받은 문자열은 %s이며, 문자열의 길이는 %d입니다.\n", str, strlength(str));
	return 0;
}
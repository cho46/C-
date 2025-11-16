#include <stdio.h> //입출력(내부적으로 버퍼를 사용중인 입/출력 함수)
#include <stdlib.h> //라이브러리 랜덤, 시스템
#include <time.h> // 시간
#include <math.h> // 수학 연산
#include <conio.h> //console input output(내부적으로 버퍼를 사용하지 않는 입/출력 함수)
#include <string.h> //strlen 문자열 관련 헤더파일

#pragma warning (disable : 4996)
#define STR_LEN 255
void strcpy(char *pcopy, char *str)
{
	int i;
	for (i = 0; str[i] != '\0'; i++)
	{
		pcopy[i] = str[i];
	}
	pcopy[i] = '\0';
}
int main()
{
	char str[6] = "apple";
	char copy[6];
	//copy = "hello"; //오류
	//strcpy(destination, source);
	//strcpy(copy, "hello");
	strcpy(copy, "hello");
	printf("%s\n", copy);

	return 0;
}
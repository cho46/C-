#include <stdio.h> //입출력(내부적으로 버퍼를 사용중인 입/출력 함수)
#include <stdlib.h> //라이브러리 랜덤, 시스템
#include <time.h> // 시간
#include <math.h> // 수학 연산
#include <conio.h> //console input output(내부적으로 버퍼를 사용하지 않는 입/출력 함수)

#pragma warning (disable : 4996)
int isUpper(char ch);
int isLower(char ch);
int isDigit(char ch);

int main()
{
	char ch;
	printf("문자 입력: ");
	ch = getchar();

	if (isUpper(ch))
	{
		printf("%c(은)는 대문자입니다.\n", ch);
	}
	else if (isLower(ch))
	{
		printf("%c(은)는 소문자입니다.\n", ch);
	}
	else if (isDigit(ch))
		printf("%c(은)는 문자가 아닙니다.\n", ch);


	return 0;
}

int isUpper(char ch)
{
	return (ch >= 'A' && ch <= 'Z');

}

int isLower(char ch)
{
	return (ch >= 'A' && ch <= 'z');
	
}

int isDigit(char ch)
{
	return (ch >= '0' && ch <= '9');
}

int isLeapYear(int year)
{
	return year % 4 == 0 && year % 100 != 0 || year % 400 == 0;
}

#include <stdio.h> //입출력(내부적으로 버퍼를 사용중인 입/출력 함수)
#include <stdlib.h> //라이브러리 랜덤, 시스템
#include <time.h> // 시간
#include <math.h> // 수학 연산
#include <conio.h> //console input output(내부적으로 버퍼를 사용하지 않는 입/출력 함수)

#pragma warning (disable : 4996)

void swap(int *p1,int *p2)
{
	int temp;
	temp = *p1;
	*p1 = *p2;
	*p2 = temp;
	//return 되는 값은 오직 한개임.
}

void toUpper(char *c) //call by reference
{
	if (*c>='a' && *c<='z')
	{
		*c -= 32;
	}
}

char getUpper(char c); //call by value



int main()
{
	int a = 3, b = 5;
	swap(&a, &b);
	printf("%d %d", a, b);

	

	char ch;
	printf("영문자입력: ");
	ch = getchar();
	//toUpper(&ch);
	ch = getUpper(ch);

	printf("결과는 %c입니다.\n", ch);


	return 0;

}

char getUpper(char c)
{
	if (c>='a' && c<='z') // 소문자인 경우?
	{
		c -= 32; // 대문자로 변환
	}
	return 0;
}

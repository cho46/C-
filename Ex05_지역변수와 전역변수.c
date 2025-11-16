#include <stdio.h> //입출력(내부적으로 버퍼를 사용중인 입/출력 함수)
#include <stdlib.h> //라이브러리 랜덤, 시스템
#include <time.h> // 시간
#include <math.h> // 수학 연산
#include <conio.h> //console input output(내부적으로 버퍼를 사용하지 않는 입/출력 함수)

int glo = 10;
double pi = 3.14;

void fun(char ch)
{
	static int rrr = 55;
	double d = 1.23;
}



#pragma warning (disable : 4996)

int main()
{
	int a = 3;
	{
		int b = 10;
		{
			int c = -2;
			static int sta = 99;
		}
		char e = 'A';
		fun(e);
	}
	double x = 6.2;


	return 0;
}
#include <stdio.h> //입출력(내부적으로 버퍼를 사용중인 입/출력 함수)
#include <stdlib.h> //라이브러리 랜덤, 시스템
#include <time.h> // 시간
#include <math.h> // 수학 연산
#include <conio.h> //console input output(내부적으로 버퍼를 사용하지 않는 입/출력 함수)

#pragma warning (disable : 4996)

void display(int *ptr)
{
	int i;
	for (i = 0; i < 5; i++)
	{
		//printf("%d ", *(ptr + i));
		printf("%d ", ptr[i]);
	}
}
void display_d(double* dtr)
{
	int i;
	for (i = 0; i < 3; i++)
	{
		printf("%f", dtr[i]);
	}

}
void display_c(char* ctr)
{
	int i;
	for (i = 0; i < 4; i++)
	{
		printf("%c", ctr[i]);
	}

}


int main()
{
	int arr[5] = {10, 20, 30, 40, 50};
	double d[3] = { 1.1,2.2,3.3 };
	char c[4] = { 'a','b','c','d' };
	display(arr);
	display_d(d);
	display_c(c);
	return 0;
}
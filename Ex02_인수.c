#include <stdio.h> //입출력(내부적으로 버퍼를 사용중인 입/출력 함수)
#include <stdlib.h> //라이브러리 랜덤, 시스템
#include <time.h> // 시간
#include <math.h> // 수학 연산
#include <conio.h> //console input output(내부적으로 버퍼를 사용하지 않는 입/출력 함수)

#pragma warning (disable : 4996)
void add(int num1, int num2);
void power(int num3);
void Star(int size, char c);





void add(int num1, int num2)
{
	printf("합계= %d\n", num1 + num2);
	return;
}

void power(int num3)
{
	printf("제곱= %d\n", num3 * num3);
}

double pow(int x, int y)
{
	return 0.0;
}


void Star(int size,char c)
{
	for (int i = 0; i < size; i++)
	{
		printf("%c",c);
	}
	puts("");
}


int main()
{
	//함수호출시 인수(인자, argument) 전달
	add(3,5);
	
	power(100);
	int count;
	printf("문자 몇개를 출력할거야?");
	scanf("%d", &count);
	while (getchar() != '\n');

	char ch;
	printf("어떤 문자를 출력할거야?");
	ch = getchar();


	Star(count,ch);
	return 0;


}
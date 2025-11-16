#include <stdio.h> //입출력(내부적으로 버퍼를 사용중인 입/출력 함수)
#include <stdlib.h> //라이브러리 랜덤, 시스템
#include <time.h> // 시간
#include <math.h> // 수학 연산
#include <conio.h> //console input output(내부적으로 버퍼를 사용하지 않는 입/출력 함수)

#pragma warning (disable : 4996)
#define DIGITS_LEN 1024

int getDigitsSum(char* p)
{
	int sum = 0;
	for (int i = 0; p[i] != '\0'; i++)
	{
		sum += (p[i] - '0'); //숫자 형태의 문자를 수로 변환
	}
	return sum;
}


int main()
{
	//초기화의 개수와 배열의 크기가 같은경우 배열의 크기는 생략이 가능하다.
	//초기화의 개수를 배열의 크기로 삼고 싶은 경우 주로  사용되는 방법이다.
	char digits[] = "1234";

	printf("입력받은 수의 합은 %d입니다.\n", getDigitsSum(digits));



	/*
	숫자형태의 문자를 숫자로 변환하는 코드
	printf("%d\n", 1); //정수 상수
	printf("%d\n", '1' -48); //문자 상수 => 아스키코드

	printf("%d\n", 2);
	printf("%d\n", '2' - '0');

	printf("%d\n", 3);
	printf("%d\n", '3' - '0');
	*/


	return 0;
}
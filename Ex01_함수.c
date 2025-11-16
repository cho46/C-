#include <stdio.h> //입출력(내부적으로 버퍼를 사용중인 입/출력 함수)
#include <stdlib.h> //라이브러리 랜덤, 시스템
#include <time.h> // 시간
#include <math.h> // 수학 연산
#include <conio.h> //console input output(내부적으로 버퍼를 사용하지 않는 입/출력 함수)

#pragma warning (disable : 4996)

//함수 정의: 함수를 만드는 작업
//함수 선언: 컴파일러에서 함수의 정보를 알려준다. => 함수호출과 함수정의의 순서에 영향을 미치지 않습니다.
//출력되는 값의 자료형


void printLine();
void printStar();

int main()
{
	//함수호출: 함수를 부르는 작업
	
	printLine();

	return 0;
}
void printLine()//=>함수의 헤더
{
	printStar();
	printf("======\n");
	printStar();
	return;
}
void printStar(/*void*/) //압력이 비어있는 경우 void는 생략가능. //함수의 바디
{
	printf("******\n");
	//return 출력 값
	return;//출력되는 값이 없는 경우는 return은 생략 가능하다.
}
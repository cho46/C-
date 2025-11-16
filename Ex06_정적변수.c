#include <stdio.h> //입출력(내부적으로 버퍼를 사용중인 입/출력 함수)
#include <stdlib.h> //라이브러리 랜덤, 시스템
#include <time.h> // 시간
#include <math.h> // 수학 연산
#include <conio.h> //console input output(내부적으로 버퍼를 사용하지 않는 입/출력 함수)

#pragma warning (disable : 4996)
void fun()
{
	//정적변수란
	//static으로 선언된 변수
	//메인함수 실행전에 딱 한번 메모리(data segments)에 할당된다.
	//프로그램이 실행될때부터 종료될 때까지 그 값을 유지한다.
	static int a = 1;
	int x = 10;
	printf("%d\n", a++);
}

void dummy()
{
	int x = 2;
}



int main()
{
	fun();
	fun();
	fun();


	return 0;
}
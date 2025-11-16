#include <stdio.h> //입출력(내부적으로 버퍼를 사용중인 입/출력 함수)
#include <stdlib.h> //라이브러리 랜덤, 시스템
#include <time.h> // 시간
#include <math.h> // 수학 연산
#include <conio.h> //console input output(내부적으로 버퍼를 사용하지 않는 입/출력 함수)

#pragma warning (disable : 4996)

int plusNumber(int *p1, int *p2, int num)
{
	*p1 += num;
	*p2 += num;
}


int main()
{
	int n1, n2, num;
	printf("두수 입력: ");
	scanf("%d %d", &n1, &n2);
	printf("누적할 정수 입력: ");
	scanf("%d", &num);

	//plusNumber함수: n1과 n2에 num을 더하는 함수

	printf("입력 결과=%d, %d\n", n1, n2);
	plusNumber(&n1, &n2, num);
	
	printf("누적 결과=%d, %d\n", n1, n2);
	return 0;
}
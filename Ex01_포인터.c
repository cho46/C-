#include <stdio.h> //입출력(내부적으로 버퍼를 사용중인 입/출력 함수)
#include <stdlib.h> //라이브러리 랜덤, 시스템
#include <time.h> // 시간
#include <math.h> // 수학 연산
#include <conio.h> //console input output(내부적으로 버퍼를 사용하지 않는 입/출력 함수)

#pragma warning (disable : 4996)

int main()
{
	int* p;
	int i = 3, j;
	p = &i;
	j = *p;
	j++;
	printf("1. %d\n", *p); //3
	printf("2. %p\n", p); //i의 주소
	printf("3. %d\n\n", j); //4

	p = &j;

	printf("4. %d\n", *p); //4
	printf("5. %p\n", p); //j의 주소

	*p = *p + 3;
	printf("6. %d\n", i);
	printf("7. %d\n", j);
	printf("8. %d\n\n", *p);



	return 0;
}
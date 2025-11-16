#include <stdio.h> //입출력(내부적으로 버퍼를 사용중인 입/출력 함수)
#include <stdlib.h> //라이브러리 랜덤, 시스템
#include <time.h> // 시간
#include <math.h> // 수학 연산
#include <conio.h> //console input output(내부적으로 버퍼를 사용하지 않는 입/출력 함수)

#pragma warning (disable : 4996)

int main()
{
	//배열이름은 포인터다.
	//배열이름은 배열의 첫 번째 요소의 주소를 나타내는 포인터다.
	//a ==&a[0]

	//배열이름도 포인터 상수
	//포인터도 포인터 변수
	int a[5] = { 10,20,30,40,50 };
	int* p;

	p = a; //a ==&a[0]
	printf("1. %p\n", a); // 배열의 첫번째 주소값
	printf("2. %d\n", p); // 10
	printf("3. %d\n", *(p + 1));//20
	printf("4. %d\n", p[2]);//30
	printf("5. %d\n\n", *(a + 2));;//30

	p = p + 2;
	//a = p + 2; (X) 배열이름은 상수기때문에 대입 불가.
	p = a + 2; // 가능
	//a = a + 2; (X)

	printf("6. %p\n", a); // 배열의 첫번째 주소값
	printf("%p\n", p - 1); // 배열의 두번째 주소값



	return 0;
}
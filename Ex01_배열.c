#include <stdio.h> //입출력
#include <stdlib.h> //라이브러리 랜덤, 시스템
#include <time.h> // 시간
#include <math.h> // 수학 연산


//전처리 - 컴파일 - 링킹 - 실행
//(전처리기) - (컴파일러) - (링커) - 실행
//#으로 시작하는 모든 명령은 전처리기가 처리함.
//


#pragma warning (disable : 4996)
//매크로 상수 => 찾아바꾸기
#define ARR_SIZE 3


int main()
{
	//int a, b, c, d, e;
	//int a[크기];
	int a[ARR_SIZE];
	
	//a[2] = 94;
	//a[4] = -8;
	int sum = 0;


	for (int i = 0; i < ARR_SIZE; i++) //배열의 인덱스
	{
		printf("정수입력: ");
		scanf("%d", &a[i]);



		sum += a[i];
	}
	printf("\n정수 %d개의 평균은 %.2f입니다.\n",ARR_SIZE,(double)sum / ARR_SIZE);

	return 0;
}
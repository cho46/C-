#include <stdio.h> //입출력(내부적으로 버퍼를 사용중인 입/출력 함수)
#include <stdlib.h> //라이브러리 랜덤, 시스템
#include <time.h> // 시간
#include <math.h> // 수학 연산
#include <conio.h> //console input output(내부적으로 버퍼를 사용하지 않는 입/출력 함수)

#pragma warning (disable : 4996)
#define STUDENT_NUM 30
/*랜덤으로 짝꿍을 정하는 프로그램을 작성해보자
반 전체 인원은 30명으로, 짝꿍은 2명씩 총 15쌍이다.
중복없이 무작위로 짝을 정해 출력하시오.
포인터, 함수, 배열, rand함수를 적절하게 사용해서 구현.
[출력예]

4월 짝꿍 발표
1번 - 17번
5번 - 23번
8번 - 13번*/
void randomize(int* pnums) // 랜덤수 지정
{
	int i;
	for (i = 0; i < STUDENT_NUM; i++)
	{
		pnums[i] = i + 1;
	}
}
void swap(int *x, int *y)
{
	int temp;
	temp = *x;
	*x = *y;
	*y = temp;

}


void shuffle(int* pnums)
{
	int i, temp;
	for (i = 0; i < 15; i++) // 배열의 반만 섞음.
	{
		int index = rand() % 30; // 0번부터 29번


		swap(pnums+i, pnums+index);
	}

}
void printpairs(int *pnums)
{
	for (int i = 0; i < STUDENT_NUM; i + 2)
	{
		printf("%d번 - %d번\n",pnums[i],pnums[i+1]);
	}
}


int main()
{
	int numbers[STUDENT_NUM];
	srand(time(NULL));
	randomize(numbers);
	shuffle(numbers);
	printpairs(numbers);

	//1~30번까지 배열에 저장
	//배열에 저장된 값을 랜덤하게 섞기
	//섞은 값을 2개씩 순서대로 출력


	return 0;
}
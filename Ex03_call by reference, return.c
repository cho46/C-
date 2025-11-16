#include <stdio.h> //입출력(내부적으로 버퍼를 사용중인 입/출력 함수)
#include <stdlib.h> //라이브러리 랜덤, 시스템
#include <time.h> // 시간
#include <math.h> // 수학 연산
#include <conio.h> //console input output(내부적으로 버퍼를 사용하지 않는 입/출력 함수)

#pragma warning (disable : 4996)
int getsumReference(int x, int y, int *sum)
{
	*sum = x + y;
	return *sum;
}
int getSumReturn(int n1, int n2)
{
	return n1+n2;

}


int main()
{
	int n1, n2;
	printf("두수 입력: ");
	scanf("%d %d", &n1, &n2);

	int sum;
	//sum 변수에 n1+n2의 결과값을 저장
	getsumReference(n1, n2, &sum);

	//getSumReturn함수: 두 수의 합계를 구해 리턴
	sum = getSumReturn(n1, n2);



	printf("두수의 합=%d\n", sum);

	return 0;
}
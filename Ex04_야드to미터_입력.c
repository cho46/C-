#include <stdio.h>
#pragma warning (disable : 4996)


int main()
{
	const double oy = 0.9144;
	double m, y;

	printf("야드입력:");
	scanf("%lf", &y);

	m = oy * y;

	printf("%dyard는 %fmeter입니다", y, m);

	return 0;
}

//과제 제출 이메일 주소: envy0209@naver.com
//과제1: 자료의 입출력/연산자 1번문제 
//과제2: 등차수열을 이용. 두 정수를 입력받아 그 사이에 포함된 모든 정수들의
// 합을 구하는 프로그램을 작성
// [출력 예]
// 시작값 입력: _(3)
// 끝 값 입력: _(5)
//
//_(3)부터 _(5)사이의 합은 _(12)입니다.
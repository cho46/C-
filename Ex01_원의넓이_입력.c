/*
 입력받는 서식문자
 
 %d: 정수
 %f: float형 실수
 %lf(long float): double형 실수
 %c: 문자

 */

#include <stdio.h> //standard Input Output(printf, scanf)
//C언어는 50년이 넘은 오래된 언어로 대부분의 함수에서 안정성의 이유로 4996의 오류가 발생된다.
//이 경고를 방지하기 위해 아래의 명령을 추가한다.
#pragma warning (disable : 4996)

int main()
{
	int rad;
	const double PI = 3.141592;
	double area, ro;

	printf("원의 반지름을 입력하세요:");
	scanf("%d", &rad); //변수명 앞에 반드시 &연산자를 쓴다.



	area = PI * rad * rad;
	ro = 2 * PI * rad;

	printf("반지름 %d의 원의 넓이는 %.3f입니다.\n", rad, area);
	printf("반지름 %d의 원의 둘레는 %.3f입니다.\n", rad, ro);



	return 0;
}
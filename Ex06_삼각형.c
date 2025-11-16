#include <stdio.h> //입출력(내부적으로 버퍼를 사용중인 입/출력 함수)
#include <stdlib.h> //라이브러리 랜덤, 시스템
#include <time.h> // 시간
#include <math.h> // 수학 연산
#include <conio.h> //console input output(내부적으로 버퍼를 사용하지 않는 입/출력 함수)

#pragma warning (disable : 4996)
double getCircle(double rad, double *ar, double *cir)
{
	const PI = 3.141592;
	
	*ar = PI * (rad * rad);
	*cir = 2 * PI * rad;

}
// 1시30분 전에 완료할 예제
//사다리꼴의 윗변, 밑변, 높이를 입력 받아 넓이를 구하는 함수를 call by reference방식을 이용하여 해결
//리턴은 무조건 void 타입
double gettrapezoid(double x, double y, double z, double* area)
{

	*area = (x + y) * z / 2;
}




int main()
{
	double radius;
	printf("반지름 입력: ");
	scanf("%lf", &radius);
	while (getchar() != '\n');
	double area, circum;

	double up,down,high,harea;
	printf("윗변,아랫변,높이 입력(공백구분): ");
	scanf("%lf %lf %lf", &up, &down, &high);
	gettrapezoid(up, down, high, &harea);



	//getCircle: 원의 넓이(area)와 둘레(circum)를 구해 저장하는 함수
	getCircle(radius, &area, &circum);
	printf("반지름 %.2f의 원의 넓이는 %.2f이고, 원의 둘레는 %.2f입니다.\n", radius, area, circum);
	printf("사다리꼴의 넓이는 %.2f입니다.\n", harea);
	return 0;
}

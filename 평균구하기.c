#include <stdio.h>
#pragma warning (disable:4996)
int main()
{
	int a, b;
	double c, d;
	printf("2개의 정수 입력:");
	scanf("%d %d",&a,&b);
	printf("2개의 실수 입력:");
	scanf("%lf %lf",&c,&d);

	double A = (a + b)/2.0;
	double C = (c + d)/2;

	printf("정수값의 평균은 %.2f 이며, 실수값의 평균은 %.2f 입니다", A, C);



	return 0;
}
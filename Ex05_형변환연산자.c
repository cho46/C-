#include <stdio.h>
#pragma warning (disable : 4996)

int main()
{
	int a = 10, b = 3;
	double result;
	double d = 3.54;

	//형변환(casting): 일시적으로 자료형을 변환(완전히 변환X)
	result = (int)a / b;
	printf("result = %f\n", result);

	printf("정수부= %d\n",(int) d); // 소수점 이하는 절삭(버림)
	printf("소수부= %f\n", d-(int)d); //0.54


	return 0;

}

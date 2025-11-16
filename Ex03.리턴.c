#include <stdio.h> //입출력(내부적으로 버퍼를 사용중인 입/출력 함수)
#include <stdlib.h> //라이브러리 랜덤, 시스템
#include <time.h> // 시간
#include <math.h> // 수학 연산
#include <conio.h> //console input output(내부적으로 버퍼를 사용하지 않는 입/출력 함수)

#pragma warning (disable : 4996)
int add(int num1, int num2);
double power(int num3);

double pow(int x, int y)
{
	int calc = 1;
	for (int i = 1; i <= y; i++)
	{
		calc = calc * x;
	}

	return calc;
}

int add(int num1, int num2)
{
	//printf("합계= %d\n", num1 + num2);
	int re = num1 + num2;
	return re;
}

double power(double x)
{
	double re = x * x;
	return re;
}

double factorial(int n)
{
	
	double re = 1;
	for (int i = n; i>1 ; i--)
	{
		re = re * i;

		return re;
	}

}

int largeNumber(num1, num2)
{
	if (num1 > num2)
	{
		return num1;
	}
	else
	{
		return num2;
	}
	//return num1>num2 ? num1:num2;
}
int(sameNumber(num1, num2))
{
	if (num1 == num2)
	{
		return 1;
	}
	else
	{
		return 0;
	}

}




int main()
{
	double result = add(3,5)*1234 / 3.8;

	printf("계산결과= %.2f\n", result);

	printf("두수의 덧셈 결과는 %d입니다.\n", add(45, 6));
	printf("6.8의 제곱은 %.2f입니다.\n", power(6.8));

	printf("5! = %.2f\n", factorial(5));

	//pow함수: x의 y승을 구해 리턴하는 함수

	printf("2^10 = %.2f\n", pow(2, 10));


	printf("두수 입력(공백구분): ");
	int num1, num2;
	scanf("%d %d", &num1, &num2);
	printf("두 수 중 큰 수는 %d입니다.\n", largeNumber(num1, num2));


	if (sameNumber(num1, num2))
	{
		printf("두 수는 같습니다.\n");
	}
	else
	{
		printf("두 수는 다릅니다.\n");
	}


	return 0;
}
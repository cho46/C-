#include <stdio.h>

int main()
{
	int rad = 5;
	const double PI = 3.141592;

	//PI = -777; 에러발생: 상수는 변경이 불가능함.


	double area, ro;
	area = PI * rad * rad;
	ro = 2 * PI * rad;

	printf("반지름 %d의 원의 넓이는 %.3f입니다.\n", rad, area);
	printf("반지름 %d의 원의 둘레는 %.3f입니다.\n", rad, ro);



	return 0;
}
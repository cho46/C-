/*
밑변을 3, 윗변을 4, 높이를 5로 초기화 한후,
사다리꼴의 넓이를 구하는 프로그램 작성


사다리꼴의 넓이 = (윗변 + 밑변)* 높이 / 2


*/

#include <stdio.h>

int main()
{

	int un, up, hi, area;
	un = 3;
	up = 4;
	hi = 5;
	
	double ar;

	//정수 나눗셈은 몫을 구한다.
	//최소 한개 이상의 실수가 연산식에 포함되어 있을 경우만 
	//소수점 이하까지 계산할 수 있음
	area = (up + un) * hi / 2; 
	ar = (up + un) * hi / 2.0;


		printf("사다리꼴의 넓이는 %d 입니다\n", area);
		printf("사다리꼴의 넓이는 %.3f 입니다", ar);










}

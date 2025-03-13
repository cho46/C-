/*
밑변을 3, 윗변을 4, 높이를 5로 초기화 한후,
사다리꼴의 넓이를 구하는 프로그램 작성


사다리꼴의 넓이 = (윗변 + 밑변)* 높이 / 2


주석 설정: ctrl + k + c
주석 해제: ctrl + k + u

*/

#include <stdio.h>
#pragma warning (disable : 4996)


int main()
{

	int un, up, hi, area;
	
	/*printf("윗변의 길이를 입력해주세요.");
	scanf("%d", &up);

	printf("밑변의 길이를 입력해주세요.");
	scanf("%d", &un);

	printf("높이의 길이를 입력해주세요.");
	scanf("%d", &hi);*/
	
	printf("윗변 밑변 높이를 연속으로 입력 하세요(공백구분) : ");
	scanf("%d %d %d", &up, &un, &hi);


	//입력받아 사다리꼴 넓이를 구함

	double ar;

	//정수 나눗셈은 몫을 구한다.
	//최소 한개 이상의 실수가 연산식에 포함되어 있을 경우만 
	//소수점 이하까지 계산할 수 있음
	area = (up + un) * hi / 2;
	ar = (up + un) * hi / 2.0;


	printf("사다리꼴의 넓이는 %d 입니다\n", area);
	printf("사다리꼴의 넓이는 %.3f 입니다", ar);










}

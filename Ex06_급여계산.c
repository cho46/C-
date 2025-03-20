#include <stdio.h>
#pragma warning (disable : 4996)

int main()
{
	int base, bonus;
	double tax, total;
	
	printf("기본금 입력:");
	scanf("%d", &base);
	printf("보너스 입력:");
	scanf("%d", &bonus);

	tax = base * 0.1;
	total = (base + bonus) - tax;

	printf("당신의 실 급여는 %.0f 입니다.",total );










	return 0;
}
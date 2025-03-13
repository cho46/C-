#include <stdio.h>
#pragma warning (disable:4996)
int main()
{
	int price, sale;
	

	printf("물건가격을 입력하세요:");
	scanf("%d", &price);
	sale = price / 4;
	int sp = (price - sale)+ 3500;
	
	printf("회원님의 최종 결제금액(배송비 포함)은 %d원 입니다", sp);

	return 0;
}
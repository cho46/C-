#include <stdio.h>
#pragma warning (disable: 4996)

int main()
{
	int price, pay, change,thousand,remainder, hundred,remainder2;


	printf("물건 값 입력:");
	scanf("%d", &price);
	printf("지불액 입력:");
	scanf("%d", &pay);

	change = pay - price;
	


	printf("거스름돈은 %d입니다.", change);
	thousand = change / 1000;


	printf("1000원권 %d 장을 지불합니다.",thousand);
	remainder = change - (thousand * 1000);

	printf("남은 거스름돈은 %d 입니다", remainder);

	hundred = remainder / 100;

	printf("\n100원 %d개를 지불합니다\n", hundred);

	remainder2 = remainder % 100;
	printf("남은 거스름돈은 %d입니다.", remainder2);





	return 0;
}
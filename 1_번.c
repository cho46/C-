#include <stdio.h>
#pragma warning (disable : 4996)

int main()
{
	int kg;

	printf("짐의 무게(kg)를 입력하세요.");
	scanf("%d", &kg);

	if (kg<10)
	{
		printf("수수료: 0원");
	}
	else if(kg <= 19)
	{
		printf("수수료 10,000원");
	}
	else if (kg <= 29)
		
	{
		printf("수수료 20,000원");
	}
	else if (kg <= 39)
	{
		printf("수수료 30,000원");
	}
	else if (kg <= 49)
	{
		printf("수수료 40,000원");
	}
	else
	{
		printf("50kg 이상인 짐은 불가능합니다.");
	}

	return 0;
}
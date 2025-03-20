#include <stdio.h>
#pragma warning (disable : 4996)
int main()
{
	int fee = 3000;
	int age;
	printf("나이입력:");
	scanf("%d", &age);

	if (age>=60)
	{
		fee = 0;
		printf("60세 이상은 무료입장입니다.\n");

	}


	printf("입장료는 %d원 입니다.\n", fee);








	return 0;
}
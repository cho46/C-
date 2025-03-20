#include <stdio.h>
#pragma warning (disable : 4996)

int main()
{
	int hour, workType;
	const int MONEY = 9620;
	int totalMoney;
	printf("총 근무시간을 입력해주세요.\n");
	scanf("%d", &hour);
	
	printf("근무타입을 입력해주세요. 주간근무시 '1', 야간근무시 '2'\n");
	scanf("%d", &workType);

	if (workType == 1)
	{
		totalMoney = hour * MONEY;
		printf("당신의 이번달 총 급여는 %d입니다.", totalMoney);
	}
	else if (workType == 2)
	{
		totalMoney = (hour * MONEY) * 1.5;
		printf("당신의 이번달 총 급여는 %d입니다.", totalMoney);
	}
	else
	{
		printf("근무타입을 잘못 입력하셨습니다.");
	}



	return 0;
}
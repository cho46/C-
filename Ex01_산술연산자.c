#include <stdio.h>
#pragma warning (disable : 4996)


int main()
{
	int minute,hour,rem;
	const ONE_HOUR = 60;


	printf("분 입력:");
	scanf("%d", &minute);
	hour = minute / ONE_HOUR;
	rem = minute % ONE_HOUR;
	printf("\n%d분은 %d시간 %d분입니다\n", minute, hour, rem);










	return 0;
}
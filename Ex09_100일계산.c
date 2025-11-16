#include <stdio.h> //입출력
#include <stdlib.h> //라이브러리 랜덤, 시스템
#include <time.h> // 시간
#include <math.h> // 수학 연산

#pragma warning (disable : 4996)

int main()
{
	int year, month, day;
	int base_month = 0;
	int count = 0;
	int increaseDays;
	int months[13] = {9999,31,28,31,30,31,30,31,31,30,31,30,31 };
	printf("년/월/일 입력(/구분): ");
	scanf("%d/%d/%d", &year, &month, &day);
	printf("%d/%d/%d", year, month, day);
	printf("몇일 후의 날짜를 검색하시겠습니까?");
	scanf("%d", &increaseDays);


	day += increaseDays-1;
	//일수가 넘어가면 월 +

	/*base_month = months[month - 1];
	while (day<base_month)
	{
		day = day - base_month;
		
		if (day>base_month)
		{
			base_month = months[month];
		}

	}
	//월이 넘어가면 년 +
	if (month > 12)
	{
		month = month % 12;
		year += (month / 12);
	}
	*/

	while (day - months[month] > 0)
	{
		if (year % 4 == 0 && year%100 != 0|| year%400 == 0)
		{
			months[2] == 29;
		}
		else
		{
			months[2] == 28;
		}
		
		day = day - months[month];
		month++;
	}

	if (month > 12)
	{
		month = 1;
		year ++;
	}


	
	printf(" + 100일 = % d / % d / % d", year, month, day);


	return 0;
}
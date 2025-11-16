#include <stdio.h> //입출력(내부적으로 버퍼를 사용중인 입/출력 함수)
#include <stdlib.h> //라이브러리 랜덤, 시스템
#include <time.h> // 시간
#include <math.h> // 수학 연산
#include <conio.h> //console input output(내부적으로 버퍼를 사용하지 않는 입/출력 함수)

#pragma warning (disable : 4996)

int main()
{
	int syear, smonth, sday;
	int eyear, emonth, eday;
	int i, j;
	//날짜 입력
	printf("시작 일 입력(/구분): ");
	scanf("%d/%d/%d", &syear, &smonth, &sday);
	while (getchar() != '\n');
	printf("종료 일 입력(/구분): ");
	scanf("%d/%d/%d", &eyear, &emonth, &eday);
	while (getchar() != '\n');

	int day1 = 0;
	int day2 = 0;
	int months[13] = { 9999,31,28,31,30,31,30,31,31,30,31,30,31 };

	//연도 합하기
	day1 += (syear - 1) * 365;
	day2 += (eyear - 1) * 365;

	//달을 일로 전환하여 더하기
	for (i = 1; i < smonth; i++)
	{
		day1 += months[i];
	}
	for (i = 1; i < emonth; i++)
	{
		day2 += months[i];
	}
	day1 += sday;
	day2 += eday;

	//윤년계산하여 1씩 더한후 최총 ly값 더하기
	int ly = 0;

	for (i = 1; i < syear; i++)
	{
		if (i % 4 == 0 && i % 100 != 0 || i % 400 == 0)
		{
			ly += 1;
		}
	}
	day1 += ly;

	if (syear % 4 == 0 && syear % 100 != 0 || syear % 400 == 0)
	{
		if (smonth > 2)
		{
			day1 += 1;
		}
	}


	ly = 0;
	for (i = 1; i < eyear; i++)
	{
		if (i % 4 == 0 && i % 100 != 0 || i % 400 == 0)
		{
			ly += 1;
		}
	}
	day2 += ly;

	if (eyear % 4 == 0 && eyear % 100 != 0 || eyear % 400 == 0)
	{
		if (emonth > 2)
		{
			day2 += 1;
		}
	}

	//출력
	printf("%d/%d/%d을 기준으로 %d/%d/%d는(은) (%d)일째 날 입니다.", syear, smonth, sday, eyear, emonth, eday, day2 - day1 + 1);

	return 0;
}
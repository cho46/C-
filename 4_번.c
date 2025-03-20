#include <stdio.h>
#pragma warning (disable : 4996)

int main()
{
	int score;
	printf("점수를 입력: ");
	scanf("%d", &score);
	
	if (score>100 || score<0)
	{
		printf("\n잘못된 점수 입력입니다.");
	}
	else if (score>=90)
	{
		printf("\nA등급입니다.");
	}
	else if (score>=80)
	{
		printf("\nB등급입니다.");
	}
	else if (score>=70)
	{
		printf("\nC등급입니다.");
	}
	else if (score>=60)
	{
		printf("\nD등급입니다.");
	}
	else
	{
		printf("\nF등급입니다.");
	}
	
	return 0;
}
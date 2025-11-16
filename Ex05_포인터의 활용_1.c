#include <stdio.h> //입출력(내부적으로 버퍼를 사용중인 입/출력 함수)
#include <stdlib.h> //라이브러리 랜덤, 시스템
#include <time.h> // 시간
#include <math.h> // 수학 연산
#include <conio.h> //console input output(내부적으로 버퍼를 사용하지 않는 입/출력 함수)

#pragma warning (disable : 4996)
char getGrade(int score)
{
	if (score<=100 && score>=90)
	{
		return 'A';
	}
	else if(score>=80)
	{
		return 'B';
	}
	else if (score >= 70)
	{
		return 'C';
	}
	else if (score >= 60)
	{
		return 'D';
	}
	else
	{
		return 'F';
	}

}
char returnGrade(int score,char*p)
{
	if (score<=100 && score>=90)
	{
		*p = 'A';
	}
	else if (score >= 80)
	{
		*p = 'B';
	}
	else if (score >= 70)
	{
		*p = 'C';
	}
	else if (score >= 70)
	{
		*p = 'D';
	}
	else
	{
		*p = 'F';
	}

}


int main()
{
	int score;
	printf("점수 입력: ");
	scanf("%d", &score);

	char grade;
	//grade = getGrade(score);
	returnGrade(score, &grade);

	printf("%d점 => %c등급\n", score, grade);



	return 0;
}
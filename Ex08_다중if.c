#include <stdio.h>
#pragma warning (disable : 4996)

int main()
{

	int kor, eng, mat;
	double avg;
	char grade;


	printf("국어 영어 수학 점수 연속으로 입력(공백구분): ");
	scanf("%d %d %d", &kor, &eng, &mat);

	avg = (kor + eng + mat) / 3.0;
	printf("평균 = %.2f\n", avg);

	if (avg >= 90)
	{
		grade = 'A'; //'A' == 65
	}
	else if (avg >= 80)
	{
		grade = 'B';
	}
	else if (avg >=70)
	{
		grade = 'C';
	}
	else if (avg >=60)
	{
		grade = 'D';
	}
	else
	{
		grade = 'F';
	}

	printf("등급 = %c\n", grade);
	return 0;
}
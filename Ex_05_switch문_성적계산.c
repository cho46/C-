#include <stdio.h>
#pragma warning (disable : 4996)

int main()
{

	int kor, eng, mat,intavg;
	double avg;
	char grade;


	printf("국어 영어 수학 점수 연속으로 입력(공백구분): ");
	scanf("%d %d %d", &kor, &eng, &mat);

	avg = (kor + eng + mat) / 3.0;
	printf("평균 = %.2f\n", avg);
	intavg  = avg/10;

	switch (intavg)
	{
	case 10:
	case 9:
		grade = 'A';
		printf("등급 = %c\n", grade);
		break;
	case 8:
		grade = 'B';
		printf("등급 = %c\n", grade);
		break;
	case 7:
		grade = 'C';
		printf("등급 = %c\n", grade);
		break;
	case 6:
		grade = 'D';
		printf("등급 = %c\n", grade);
		break;
	default:
		grade = 'F';
		printf("등급 = %c\n", grade);
		break;
	}

	return 0;
}
#include <stdio.h>
#pragma warning (disable : 4996)

int main()
{
	int kor, eng, mat;
	double avg;


	printf("국어 영어 수학 점수입력(공백구분)");
	scanf("%d %d %d", &kor, &eng, &mat);
	avg = (double)(kor + eng + mat) / 3;

	printf("평균 = %.2f\n", avg);


	if (avg >= 60)
	{
		if (kor >= 60 && eng >= 60 && mat >= 60)
		{
			printf("합격입니다.");
		}
		else
		{
			if (kor < 60)
			{
				printf("국어 평균미달입니다.\n");
			}
			if (eng < 60)
			{
				printf("영어 평균미달입니다.\n");
			}
			if (mat < 60)
			{
				printf("수학 평균미달입니다.\n");
			}
			printf("과락으로 탈락입니다.");
		}


	}
	else
	{
		printf("평균미달로 탈락입니다.\n");
	}






	return 0;
}
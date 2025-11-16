#include <stdio.h> //입출력
#include <stdlib.h> //라이브러리 랜덤, 시스템
#include <time.h> // 시간
#include <math.h> // 수학 연산

#pragma warning (disable : 4996)
#define STUDENT_NUM 5
int main()
{
	int score[STUDENT_NUM];
	int rank[STUDENT_NUM];

	//학생들의 점수 입력
	for (int i = 0; i < STUDENT_NUM; i++)
	{
		//점수입력
		printf("%d번째 학생 점수 입력: ", i + 1);
		scanf("%d", &score[i]);


		//모든학생의 순위는 1등으로 설정
		rank[i] = 1;

		if (score[i]<0 || score[i]>100)
		{
			--i;
			printf("0~100 사이의 점수를 입력해주세요.\n");
			continue;
		}
	}

	//순위를구하기
	for (int i = 0; i < STUDENT_NUM; i++)//순위를 구하려는 인덱스
	{
		for (int j = 0; j < STUDENT_NUM; j++)
		{
			//비교점수가 더 크다면?
			if (score[i] < score[j])
			{
				//등수를 1씩증가
				rank[i]++;
			}
		}

	}


	for (int i = 0; i < STUDENT_NUM; i++)
	{
		printf("%5d점 => %3d등\n", score[i], rank[i]);
	}





	return 0;
}
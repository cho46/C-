#include <stdio.h> //입출력(내부적으로 버퍼를 사용중인 입/출력 함수)
#include <stdlib.h> //라이브러리 랜덤, 시스템
#include <time.h> // 시간
#include <math.h> // 수학 연산
#include <conio.h> //console input output(내부적으로 버퍼를 사용하지 않는 입/출력 함수)
//_getch() -> 한글자 입력 함수 -> 일시대기의 목적으로 주로 사용된다.
#pragma warning (disable : 4996)

int main()
{
	int i, j;
	
	int correct[10] = { 3, 2, 1, 3, 4, 1, 2, 3, 4, 1 }; //정답

	int answer[5][10] = { //5명 학생의 답안
		{3, 2, 1, 3, 4, 1, 2, 3, 4, 1}, //1번 답안
		{1, 2, 1, 3, 4, 2, 2, 3, 4, 1}, //2번 답안
		{2, 2, 1, 2, 4, 1, 2, 1, 4, 1}, //3번 답안
		{3, 1, 1, 3, 3, 1, 2, 3, 1, 4}, //4번 답안
		{4, 2, 1, 3, 4, 1, 2, 3, 4, 1} //5번 답안
	};
	int score[5] = { 0 }; //5명 학생의 점수
	for (i = 0; i < 5; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (correct[j] == answer[i][j])
			{
				score[i] += 10;
			}
		}

	}
	
	printf("[점 수 출 력]\n\n");
	

	for (i = 0; i < 5; i++)
	{
		printf("%d번 점수: %d", i+1, score[i]);
		puts("");
	}
	puts("");
	printf("\t[출 력 결 과]\n\n");
	
	
	for (i = 100; i >= 10; i -= 10)
	{
		printf("%3d ", i);
		
		for (j = 0; j < 5; j++)
		{
			if (score[j]>=i)
			{
				printf("  * ");
			}
			else
			{
				printf("    ");
			}
		}
		_getch(); //한글자 입력 함수 //에코기능 없다.(입력 글자가 화면에 출력되지 않는다.)

		puts("");
	}
	printf("========================\n");
	printf("번호  1   2   3   4   5");



	return 0;
}
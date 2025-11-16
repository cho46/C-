/*
	 밑줄 친 부분에 0 ~ 9사이의 랜덤한 수가 출력하게 코드를 구현하시오.

	   1. _ + _ =
	   2. _ + _ =
	   3. _ + _ =
	   4. _ + _ =
	   5. _ + _ =
	   6. _ + _ =
	   7. _ + _ =
	   8. _ + _ =
	   9. _ + _ =
	  10. _ + _ =

*/
#include <stdio.h> //printf(출력), scanf(입력), getchar(문자입력), puts(문자열 출력, 자동개행)
#include <stdlib.h> //standard library //rand, srand
#include <time.h> //시간 관련 헤더파일 //time
#include <math.h> //pow

#pragma warning (disable : 4996)

int main()
{
	int i, ques1, ques2, answer, correct;
	int choice, start, end;

	srand((unsigned int)time(NULL));        //unsigned int : 부호가 없는 int형 => 양의 정수만 취급

	do
	{
		printf("몇 자리 문제를 풀으시겠습니까(1 ~ 4자리)? ");
		scanf("%d", &choice);
		while (getchar() != '\n');
	} while (choice < 1 || choice > 4);

	start = (int)pow(10, (choice - 1));
	end = (int)pow(10, choice) - 1;

	//correct = 0;
	for (correct = 0, i = 1; i <= 10; i++)
	{
		//start ~ end
		ques1 = rand() % (end - start + 1) + start;
		ques2 = rand() % (end - start + 1) + start;

		printf("%2d. %d + %d = ", i, ques1, ques2);
		scanf("%d", &answer); //입력 받아
		while (getchar() != '\n'); //버퍼 비우기

		//점수 계산 -> 1문제당 10점
		if (ques1 + ques2 == answer)
		{
			correct++; //맞은 개수 증가
		}
	}

	printf("총 10문제 중 정답은 %d개 입니다.\n", correct);
	printf("당신의 점수는 %d점 입니다.\n", correct * 10);

	return 0;
}
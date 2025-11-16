#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#pragma warning (disable : 4996)

int main()
{
	int num,ques1,ques2,ans,point,count;
	point = 0;
	count = 0;
	srand(time(NULL));
	

	for (int i = 1; i <= 10; i++)
	{
		num = rand();
		ques1 = rand() % 10;
		ques2 = rand() % 10;

		printf("%2d. %d + %d = ", i, ques1, ques2);
		//입력받아 점수계산
		//점수 계산 -> 1문제당 10점
		scanf("%d", &ans);
		while (getchar() != '\n');

		if (ques1 + ques2 == ans)
		{
			point += 10;
			count += 1;
		}
		
	}
	printf("총 10문제중 정답은 %d개 입니다.", count);
	printf("당신의 점수는 %d점입니다.", point);
	//총 10문제중 정답은 _개입니다.
	//당신의 점수는 /점입니다.
	return 0;
}
#include <stdio.h>
#pragma warning (disable : 4996)

int main()
{
	int min, onehour,chour,cmin;
	onehour = 60;

	while (1)
	{
		printf("분 입력 (종료 0): ");
		scanf("%d", &min);
		while (getchar() != '\n');
		if (min<0)
		{
			printf("0보다 큰수를 입력하세요.\n");
			continue;
		}

		if (min ==0)
		{
			break;
		}
		chour = min / onehour;
		cmin = min % onehour;
		printf("\n%d분은 %d시간 %d분입니다.\n", min, chour, cmin);
	}



	return 0;
}
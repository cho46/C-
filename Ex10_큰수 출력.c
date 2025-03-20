#include <stdio.h>
#pragma warning (disable : 4996)

int main()
{
	int n1, n2;

	printf("두수 입력: ");
	scanf("%d %d", &n1, &n2);
	if (n1 > n2)
	{
		printf("두 수중 큰 수는 %d 이며, 작은 수는 %d입니다.", n1, n2);
	}
	else if (n1 < n2)
	{
		printf("두 수중 큰수는 %d 이며, 작은 수는 %d 입니다.", n2, n1);
	}
	else
	{
		printf("두 수는 같습니다.");
	}


	return 0;
}
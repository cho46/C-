#include <stdio.h>
#pragma warning (disable : 4996)
//1부터 10, 1부터 20 ... 1부터 100까지 합, 10단위 줄바꿈
int main()
{
	int i, j, total;
	total = 0;
	for (i = 1; i <= 100; i++)
	{
		printf("%3d ", i);
		
		total = total + i;
		
		if (i%10 == 0)
		{
			printf("= %2d", total);
			puts("");

		}
	}



	return 0;
}
#include <stdio.h>
#pragma warning (disable : 4996)

int main()
{
	int i, j;
	
	for (i = 2; i <= 9; ++i)
	{
		printf("%d´Ü\n", i);
		for (j = 1; j <= 9; ++j)
		{
			printf("%d*%d= %2d   ", i, j,i*j);
		}
		puts("");
	}





	return 0;
}
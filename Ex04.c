#include <stdio.h>
#pragma warning (disable : 4996)

int main()
{
	int i, j;


	for (i = 7; i >= 1; i--)
	{
		for (j = 1; j <= 7; j++)
		{
			if (i == j)
			{
				printf("%d", i);
			}
			else
			{
				printf("0");
			}



		}
		puts("");
	}

	puts("");



	return 0;
}
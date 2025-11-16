#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#pragma warning (disable : 4996)

int main()
{
	int i, j;

	for (i = 0; i <= 10; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			if (i == 10 && j > 0)
			{
				break;
			}




			if (i == 0 && (j == 3 || j == 6 || j == 9))
			{
				printf("%d 박수\n", j);
			}
			else if (i == 3 || j == 3 || i == 6 || j == 6 || i == 9 || j == 9)
			{
				printf("%d%d 박수\n", i, j);
			}
			else if (i == 0)
			{
				printf("%d\n", j);
			}
			else
			{
				printf("%d%d\n", i, j);


			}

		}


	}
	return 0;
}
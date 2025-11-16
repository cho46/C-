#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#pragma warning (disable : 4996)

int main()
{
	int i;
	for (i = 1; i <= 100; i++)
	{
		if ((i%10) != 0 && (i % 10)%3 ==0 )
		{
			printf("%3d 박수\n", i);
		}
		else if ((i/10) != 0 && (i / 10) % 3 == 0)
		{
			printf("%3d 박수\n", i);
		}
		
		
		else
		{
			printf("%3d\n", i);
		}

	}




	return 0;
}
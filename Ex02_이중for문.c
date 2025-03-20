#include <stdio.h>
#pragma warning (disable : 4996)

int main()
{
	int i, j;
		for (i = 0; i <= 23; ++i)
		{
			for (j = 0;j <=59;++j)
			{
				//공간확보후 빈공간은 0으로 채움
				printf("%02d : %02d\n", i, j);
			}
			printf("\n");
		}




	return 0;
}
#include <stdio.h>
#pragma warning (disable : 4996)

int main()
{
	int i, a, b ,c, armsnum;

	printf("[¾Ï½ºÆ®·Õ ¼ö]\n");
	puts("");
	for (i = 100; i <= 500; i++)
	{
		a = i / 100;
		b = (i / 10) % 10;
		c = i % 10;
		
		armsnum = (a * a * a) + (b * b * b) + (c * c * c);
		if (armsnum == i)
		{
			printf("%d\t", i);
		}


	}
	

	return 0;
}
#include <stdio.h>
#pragma warning (disable : 4996)

int main()
{
	int a, b, i, total;

	printf("두수입력(공백구분):");
	scanf("%d %d", &a, &b);

	total = a;
	printf("%d ", total);
	for (i = a + 1; i < b; i++)

	{
		if (i % 2 == 0)
		{
			printf("- %d ", i);
			total -= i;
		}
		else
		{
			printf("+ %d ", i);
			total += i;
		}

	}
	if (b % 2 == 0)
	{
		printf("- %d ", b);
		total -= b;
	}

	else
	{
		printf("- %d ", b);
		total += b;
	}


	printf(" = %d", total);
	return 0;
}
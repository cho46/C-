#include <stdio.h>
#pragma warning (disable : 4996)

int main()
{
	while (1)
	{
		double n1, n2;
		char a, b;

		printf("실수 입력1 (공백구분): ");
		scanf("%lf", &n1);
		while (getchar() != '\n');
		
		printf("실수 입력2 (공백구분): ");
		scanf("%lf", &n2);
		while (getchar() != '\n');

		printf("연산자 입력: ");
		scanf("%c", &a);
		while (getchar() != '\n');

		

		switch (a)
		{
		case'+':
			printf("\n%lf + %lf = %lf\n", n1, n2, n1 + n2);
			break;
		case'-':
			printf("\n%lf - %lf = %lf\n", n1, n2, n1 - n2);
			break;
		case'*':
			printf("\n%lf * %lf = %lf\n", n1, n2, n1 * n2);
			break;
		case'/':
			printf("\n%lf / %lf = %lf\n", n1, n2, n1 / n2);
			break;
		}
		
		printf("\n계속(아무키) / 종료(Q/q) : ");
		b = getchar();
		while (getchar() != '\n');

		if (b == 'Q' || 'q')
		{
			break;
		}
		
		
		
	}





	return 0;
}
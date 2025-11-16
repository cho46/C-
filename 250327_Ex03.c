#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#pragma warning (disable : 4996)

int main()
{
	double a, b, c, x1, x2;
	double confirm;

	confirm = 0;

	printf("a값 입력: ");
	scanf("%lf", &a);
	while (getchar() != '\n');
	printf("b값 입력: ");
	scanf("%lf", &b);
	while (getchar() != '\n');
	printf("c값 입력: ");
	scanf("%lf", &c);
	while (getchar() != '\n');




	if (a == 0)
	{
		printf("a가 0이 되면 안됩니다.");
	}

	confirm = (b * b) - (4 * a * c);
	double root = sqrt(confirm);
	double min = b - (2 * b);

	if (confirm > 0)
	{
		x1 = (min + root) / (2 * a);
		x2 = (min - root) / (2 * a);

		printf("실근: x = %.2lf or %.2lf", x1, x2);

	}
	else if (confirm == 0)
	{
		x1 = (-b / (2 * a));
		printf("중근: x = %.2lf", x1);

	}
	else
	{
		printf("실근은 존재하지 않습니다.");
	}




	return 0;
}
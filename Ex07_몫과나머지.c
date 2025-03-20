#include <stdio.h>
#pragma warning (disable : 4996)

int main(void)
{
	int n1, n2, calc1, calc2;
	printf("두개의 정수 입력: ");
	scanf("%d %d", &n1, &n2);

	

	if (n2 == 0)
	{
		printf("0으로 나눌 수 없습니다.");
	}
	else
	{
		calc1 = n1 / n2;
		calc2 = n1 % n2;
		printf("%d를 %d로 나눈 결과, 몫은 %d, 나머지는 %d입니다.", n1, n2, calc1, calc2);
	}

	return 0;
}
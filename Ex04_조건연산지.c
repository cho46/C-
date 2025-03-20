#include <stdio.h>
#pragma warning (disable:4996)

int main()
{
	int n1, n2, large, small;

	printf("두 수 입력(공백 구분):");
	scanf("%d %d", &n1, &n2);

	//large = 조건 ? 참 : 거짓;
	large = n1 > n2 ? n1 : n2;
	small = n1 < n2 ? n1 : n2;

	printf("두 수 중 큰 수는 %d입니다.\n", large);
	printf("두 수 중 작은 수는 %d입니다.\n", small);

	return 0;
}
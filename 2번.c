#include <stdio.h>
#pragma warning (disable:4996)

int main()
{
	int fn, sn, co, sum;
	
	printf("시작값 입력:");
	scanf("%d", &fn);
	printf("끝 값 입력:");
	scanf("%d", &sn);
	co = (sn - fn) + 1;
	sum = (fn + sn) * co / 2;

	printf("%d부터 %d사이의 합은 %d입니다", fn, sn, sum);


	return 0;
}
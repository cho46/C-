#include <stdio.h>
#pragma warning (disable : 4996)

int main()
{
	int num;
	char c;

	printf("문자입력: ");
	scanf("%c", &c);

	while (getchar() != '\n');

	printf("정수입력: ");
	//숫자 입력시 공백(엔터, 탭, 스페이스바)은 무시
	scanf("%d", &num);
	while (getchar() != '\n');


	printf("결과는 %c %d 입니다.\n", c, num);


	return 0;
}
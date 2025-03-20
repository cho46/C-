#include <stdio.h>
#pragma warning (disable : 4996)

int main()
{
	char a;
	printf("문자 입력: ");
	scanf("%c", &a);

	if (a >= 'a' && a<= 'z')
	{
		a = a - 32;
		printf("입력한 문자: %c 대문자로 변환하여 출력합니다.",a);
	}
	else if (a >= 'A' && a <= 'Z')
	{
		a= a + 32;
		printf("입력한 문자: %c 소문자로 변환하여 출력합니다.", a);
	}
	else
	{
		printf("입력한 문자는 영문자가 아닙니다.");
	}


	return 0;
}
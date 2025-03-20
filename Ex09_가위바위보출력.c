#include <stdio.h>
#pragma warning (disable : 4996)

int main()
{
	int num;
	
	printf("가위바위보 프로그램\n");
	printf("1: 가위 2: 바위 3: 보 중 원하는 정수를 입력해주세요.\n");
	printf("정수 입력: ");
	scanf("%d", &num);

	if (num == 1)
	{
		printf("1은 가위입니다.");
	}
	else if (num ==2)
	{
		printf("2는 바위입니다.");
	}
	else if (num ==3)
	{
		printf("3은 보 입니다.");
	}
	else 
	{
		printf("오류");
	}

	return 0;
}
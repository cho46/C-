#include <stdio.h>
#pragma warning (disable : 4996)

int main()
{

	int num;
	
	printf("가위바위보 프로그램\n");
	printf("1: 가위 2: 바위 3: 보 중 원하는 정수를 입력해주세요.\n");
	printf("정수 입력: ");
	scanf("%d", &num);

	/*if (num == 1)
	{
		printf("1은 가위입니다.");
	}
	else if (num == 2)
	{
		printf("2는 바위입니다.");
	}
	else if (num == 3)
	{
		printf("3은 보 입니다.");
	}
	else
	{
		printf("오류");
	}*/



	switch (num)
	{
	//case값:
	case 1:
		printf("가위\n");
		break; //switch문 탈출(break가 없는 경우 switch문의 끝까지 수행한다.)
	case 2:
		printf("바위\n");
		break;
	case 3:
		printf("보\n");
		break;
	default: //if문의 else랑 같다. //default 다음에는 값을 쓸 수 없음.
		printf("오류\n");
	}
	
	return 0;
}
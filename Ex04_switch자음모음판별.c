#include <stdio.h>
#pragma warning (disable : 4996)

int main()
{
	char alpha;

	printf("문자를 입력해주세요.");
	alpha = getchar(); //scanf("%c", &alpha);
	if (alpha >= 'a' && alpha <= 'z')
	{
		alpha -= 32; //소문자는 대문자로 변환
	}


	switch (alpha)
	{
	//case 'a':case 'e':case 'i':case 'o':case 'u':
	case 'A':case 'E':case 'I':case 'O':case 'U':
		printf("모음입니다.\n");
		break;
	default:
		if (alpha>='A' && alpha<= 'Z')
		{
		printf("자음입니다.\n");
		}
		else
		{
		printf("알파벳이 아닙니다.");
		}
	}

	return 0;
}
#include <stdio.h>
#pragma warning (disable : 4996)
int main()
{
	char alpha;

	printf("문자 입력: [ ]\b\b"); // \b: back: 뒤로 한 칸 이동
	alpha = getchar();//scanf("%c", &alpha);

	//if (alpha >= 97 && alpha <= 122)

if (alpha>= 'a' && alpha <= 'z')
	{
	//alpha -= 32; //대문자로 변환
	alpha = alpha - ('a' - 'A');
	printf("소문자를 대문자로 변환합니다.\n");
	}


	printf("결과는 %c 입니다.\n", alpha);
	return 0;
}
#include <stdio.h>
#pragma warning (disable : 4996)

int main()
{
	int age, retro;
	printf("나이 입력: ");
	scanf("%d",&age);
	printf("내공 입력: ");
	scanf("%d", &retro);

	if (age >= 18 && retro >= 1400 && retro <= 1600)
	{
		printf("초보 채널 입장이 가능합니다.\n");
	}
	else
	{
		printf("초보 채널 입장이 불가능합니다.\n");
	}


	return 0;
}
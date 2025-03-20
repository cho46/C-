#include <stdio.h>
#pragma warning (disable : 4996)

int main()
{
	char menu;


	printf("메뉴코드 입력: ");
	scanf("%c", &menu);

	switch (menu)
	{
	case 'F':
	case 'f':
		printf("File Menu");
		break;

	case 'H':
	case 'h':
		printf("Help Menu");
		break;

	case 'E':
	case 'e':
		printf("Edit Menu");
		break;

	default:
		printf("Error");
	}
	return 0;
}
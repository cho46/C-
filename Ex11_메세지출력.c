#include <stdio.h>
#pragma warning (disable : 4996)

int main()
{
	char menu;


	printf("메뉴코드 입력: ");
	scanf("%c", &menu);
	
	if (menu == 'F' || menu == 'f')
	{
		printf("File Menu");
	}
	else if (menu == 'H' || menu == 'h')
	{
		printf("Help Menu");
	}
	else if (menu == 'E' || menu == 'e')
	{
		printf("Edit Menu");
	}
	else
	{
		printf("Error");
	}
	return 0;
}
#include <stdio.h>
#pragma warning (disable : 4996)

int main()
{
	char c1, c2, c3;

	printf("문자입력 1: ");
	c1 = getchar();
	
	//버퍼의 남은 내용을 모두 가져온다.
	//한글자를 가져와서 temp에 저장후, temp의 값이 '\n'이 아니라면 반복
	/*while (1)
	{
		char temp = getchar();
		if (temp == '\n')
		{
			break;
		}
	}*/
	//while (1)
	//{
	//	if (getchar () =='\n')// 가져온 글자가  '\n'이면 탈출
	//	{
	//		break;
	//	}
	//}


	/*while (getchar() != '\n');
	{
	}*/

	//버퍼에서 한글자를 가져와서 가져온 문자가'\n'이 아니라면 반복
	while (getchar() != '\n');//입력버퍼를 비우는 코드

	printf("문자입력 2: ");
	c2 = getchar();

	while (getchar() != '\n');

	printf("문자입력 3: ");
	c3 = getchar();

	
	printf("\n\n *결과* \n");
	printf("문자: %c => 아스키코드: %d\n", c1, c1);
	printf("문자: %c => 아스키코드: %d\n", c2, c2);
	printf("문자: %c => 아스키코드: %d\n", c3, c3);



	return 0;
}
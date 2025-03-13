#include <stdio.h>
#pragma warning (disable:4996)
int main()
{
	char a, b, c;
	printf("아스키코드로 변환할 문자를 3개 입력해주세요.(공백구분)");
	scanf("%c %c %c", &a, &b, &c);

	printf("%c를 변환한 아스키코드는 %d입니다\n",a, a);
	printf("%c를 변환한 아스키코드는 %d입니다\n",b, b);
	printf("%c를 변환한 아스키코드는 %d입니다\n",c, c);


	return 0;

}
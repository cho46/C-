#include <stdio.h> //입출력(내부적으로 버퍼를 사용중인 입/출력 함수)
#include <stdlib.h> //라이브러리 랜덤, 시스템
#include <time.h> // 시간
#include <math.h> // 수학 연산
#include <conio.h> //console input output(내부적으로 버퍼를 사용하지 않는 입/출력 함수)

#pragma warning (disable : 4996)
#define STR_LEN 255
int main()
{
	char str[STR_LEN];

	printf("문자열 입력: ");
	gets_s(str, STR_LEN);

	printf("입력문자열= %s\n", str);
	//대문자를 찾아 '*' 로 변환하는 코드 작성
	for (int i = 0; str[i] != 0; i++) // 문자열의 길이만큼 반복
	{
		if (str[i]>='A' && str[i]<='Z')
		{
			str[i] = '*';
		}
	}

	printf("변환문자열= %s\n", str);



	return 0;
}
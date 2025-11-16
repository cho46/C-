#include <stdio.h> //입출력(내부적으로 버퍼를 사용중인 입/출력 함수)
#include <stdlib.h> //라이브러리 랜덤, 시스템
#include <time.h> // 시간
#include <math.h> // 수학 연산
#include <conio.h> //console input output(내부적으로 버퍼를 사용하지 않는 입/출력 함수)
#include <string.h> //strlen 문자열 관련 헤더파일

#pragma warning (disable : 4996)
void strconcatenate(char*des, char *sou)
{
	int len;
	for (len= 0; des[len] != '\0'; len++)
	{	
	}
	int i;
	for (i = 0; sou[i] != '\0'; i++)
	{
		des[i+len] = sou[i];
	}
	des[len + i] = '\0'; // 복사시 마지막엔 널문자가 추가되어야 함.

	//표준함수를 이용해서
	/*int len = strlen(des);
	strcpy(des+len, sou);*/
}

int main()
{
	char str[20] = "Hello";
	char buf[10] = "World";

	printf("str = %s, buf = %s\n", str, buf);

	//strcat(destination, source);
	//strcat(str, buf);
	strconcatenate(str, buf);
	printf("str = %s, buf = %s\n", str, buf);
	return 0;
}
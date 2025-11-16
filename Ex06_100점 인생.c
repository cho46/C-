#include <stdio.h> //입출력(내부적으로 버퍼를 사용중인 입/출력 함수)
#include <stdlib.h> //라이브러리 랜덤, 시스템
#include <time.h> // 시간
#include <math.h> // 수학 연산
#include <conio.h> //console input output(내부적으로 버퍼를 사용하지 않는 입/출력 함수)



#pragma warning (disable : 4996)
#define STR_LEN 255
int isAlpha(char p)
{
	if (p>='A' && p<='Z' || p > 'a' && p <= 'z')
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

int getwordScore(char* p)
{
	int total = 0;
	strToLower(p);
	for (int i = 0; p[i] != '\0'; i++)
	{
		//isAlpha함수: 알파벳(A~Z,a~z)인 경우는 1을 리턴, 아닌 경우는 0을 리턴
		if (isAlpha(p[i]))
		{
			total += p[i] - 'a ' + 1;
		}
	}
	return total;
}

void strToLower(char *ptr)
{
	for (int i = 0; ptr[i] != '\0'; i++)
	{
		if (ptr[i]>='A' && ptr[i] <='Z')
		{
			ptr[i] += 32; //대문자를 소문자로 변환
		}
	}
}

int main()
{
	char str[STR_LEN];

	printf("인생을 100점으로 살기 위해서 가장 필요한 건 무엇인가요?");
	gets_s(str, STR_LEN);

	printf("\n\n\t\t%s의 점수는 [%d]점입니다.\n", str, getwordScore(str));


	return 0;
}
#include <stdio.h> //입출력(내부적으로 버퍼를 사용중인 입/출력 함수)
#include <stdlib.h> //라이브러리 랜덤, 시스템
#include <time.h> // 시간
#include <math.h> // 수학 연산
#include <conio.h> //console input output(내부적으로 버퍼를 사용하지 않는 입/출력 함수)

#pragma warning (disable : 4996)

int main()
{
	//포인터로 역참조 해서 문자열상수를 수정할 수 없게 한다.
	const char* p = "Hello";
	const char* ptr = "Ha\0ppy birthday";
	const char* str = "Time and tide wait for no man.";



	printf("%c\n", p[1]); //  == *(p+1)
	printf("%p\n", p);
	//printf %s : 주소부터 널문자 이전까지 출력
	printf("%s\n", p);
	printf("%s\n", p+2);

	printf("%s\n", ptr + 6);
	printf("%c\n", ptr[8]);

	//1. 문자열(%s)로 출력.
	//2. 문자 단위(%c) 한글자씩 출력.

	printf("%s\n", str);

	for (int i = 0; ; i++) // 조건을 비워서 1씩 증가하면서 무한루프
	{
		if (str[i] =='\0') // 저장된 문자가 NULL문자와 같다면? ==> 문자열의 끝.
		{
			break;
		}
		printf("%c ", str[i]);
	}
	puts("");

	//저장된 문자가 널문자와 같지 않다면 반복 진행. 즉 널문자 만나기 전까지 반복
	for (int i = 0; str[i] != '\0'; i++) 
	{
		printf("%c ", str[i]);
	}
	puts("");

	return 0;
}
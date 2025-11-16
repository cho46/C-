#include <stdio.h> //입출력(내부적으로 버퍼를 사용중인 입/출력 함수)
#include <stdlib.h> //라이브러리 랜덤, 시스템
#include <time.h> // 시간
#include <math.h> // 수학 연산
#include <conio.h> //console input output(내부적으로 버퍼를 사용하지 않는 입/출력 함수)

#pragma warning (disable : 4996)
#define STRING_LEN 255


int main()
{
	//char* p; //포인터는 문자열 상수의 주소를 저장하는 변수다.

	char str[STRING_LEN];

	printf("문자열 입력:");
	//scanf("%s"): 주소부터 차례대로 저장 후 마지막에 널문자를 자동으로 추가한다
	//scanf("%s", str);			// 배열이름은 배열의 첫 번째 주소를 나타낸다. 그래서 str로 입력.  
	/*scanf("%[^\n]", str); */    //엔터전의 모든 문자열을 받는다.
	//하지만 공백을 입력하면 다음 입력이라 생각하고 뒤의 문자는 안나옴
	//gets_s(주소, 크기): 
	gets_s(str, STRING_LEN); //null문자 포함 EX) apple => 6칸 이상은 할당해야함.

	//printf("%s"): 주소부터 널문자 이전까지 출력해라.
	printf("입력하신 문자는 %s 입니다.", str);


	return 0;
}
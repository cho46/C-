#include "myheader.h"

/*
C언어에서 0 표기법
1. 숫자 -> 0
2. 널문자 -> '\0' -> 아스키코드로 0
3. 포인터 -> NULL -> #define NULL 0 -> 포인터가 참조하는 대상이 없는 경우

*/
/*
파일모드
w(write): 기록모드: 파일이 존재하지 않는 경우 생성해서 기록을 시작함.
r(read): 읽기모드: 파일이 존재하지 않는 경우 오류.
a(append): 추가모드: 파일이 존재하지 않는 경우 생성해서 기록을 시작함.
									만약 파일이 존재하는 경우는 이어서 기록한다.

*/


int main()
{
	//fp는 FILE타입의 주소를 저장하는 포인터 변수
	FILE* fp; //8바이트
	//fopen("파일명", "파일모드")
	fp = fopen("out.txt","w");
	
	

	if (fp == NULL)
	{
		printf("file open fail\n");
	}

	fclose(fp);

	return 0;
}
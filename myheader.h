//인클루드 중복 방지 명령
#pragma once

#include <stdio.h> //입출력(내부적으로 버퍼를 사용중인 입/출력 함수)
#include <stdlib.h> //라이브러리 랜덤, 시스템
#include <time.h> // 시간
#include <math.h> // 수학 연산
#include <conio.h> //console input output(내부적으로 버퍼를 사용하지 않는 입/출력 함수)
#include <string.h> //strlen 문자열 관련 헤더파일(strlen,strcpy,strcat)
#include <ctype.h> //char 타입의 문자

#pragma warning (disable : 4996)

void bufferClear();
void removeEnter(char *buf);
int randInt(int begin, int end);

void bufferClear() // 버퍼비우기
{
	while (getchar() != '\n');
}

void removeEnter(char *buf)
{
	buf[strlen(buf) - 1] = '\0';
}


int randInt(int begin, int end) // 범위의 랜덤수 출력
{
	int num = rand() % (end - begin + 1) + begin;
	return num;
}




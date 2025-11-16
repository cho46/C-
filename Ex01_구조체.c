#include <stdio.h> //입출력(내부적으로 버퍼를 사용중인 입/출력 함수)
#include <stdlib.h> //라이브러리 랜덤, 시스템
#include <time.h> // 시간
#include <math.h> // 수학 연산
#include <conio.h> //console input output(내부적으로 버퍼를 사용하지 않는 입/출력 함수)
#include <string.h> //strlen 문자열 관련 헤더파일(strlen,strcpy,strcat)

#pragma warning (disable : 4996)
//구조체 정의: 자료형을 만드는 작업(구조체는 자료형이다.)
#define NAME_LEN 20

struct student
{
	char name[NAME_LEN];
	int age;
	char gender;
};


int main()
{
	//구조체 변수 선언
	struct student s1, s2;
	printf("이름: ");
	//구조체 멤버 접근 시 [변수.멤버]
	
	gets_s(s1.name, NAME_LEN); //gets_s에서는 버퍼에서 엔터(널)값이 추가됨. 버퍼를 비우는 작업을 사용하면 안됨.  

	printf("나이: ");
	scanf("%d", &s1.age);
	while (getchar() != '\n'); // 버퍼에 남아있는 내용을 모두 가져온다.

	printf("성별(M/F): ");
	scanf("%c", &s1.gender);
	while (getchar() != '\n');

	printf("이름: ");
	gets_s(s2.name, NAME_LEN); //gets_s에서는 버퍼에서 엔터(널)값이 추가됨. 버퍼를 비우는 작업을 사용하면 안됨.  

	printf("나이: ");
	scanf("%d", &s2.age);
	while (getchar() != '\n'); // 버퍼에 남아있는 내용을 모두 가져온다.

	printf("성별(M/F): ");
	scanf("%c", &s2.gender);


	printf("\n\n * 학생 정보 출력 *\n");
	printf("%-20s %5s %5s\n", "이름", "나이", "성별");
	printf("%-20s %5d %5c\n", s1.name, s1.age, s1.gender);
	printf("%-20s %5d %5c\n", s2.name, s2.age, s2.gender);
	return 0;
}
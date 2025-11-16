#include <stdio.h> //입출력(내부적으로 버퍼를 사용중인 입/출력 함수)
#include <stdlib.h> //라이브러리 랜덤, 시스템
#include <time.h> // 시간
#include <math.h> // 수학 연산
#include <conio.h> //console input output(내부적으로 버퍼를 사용하지 않는 입/출력 함수)
#include <string.h> //strlen 문자열 관련 헤더파일(strlen,strcpy,strcat)

#pragma warning (disable : 4996)
//구조체 정의: 자료형을 만드는 작업(구조체는 자료형이다.)
#define NAME_LEN 20
#define STUDENT_NUM 5

typedef struct student // typedef: 이름을 재정의함. ;(세미콜론)전에 작성해주면 됨
{
	char name[NAME_LEN];
	int age;
	char gender;
}student;//타입(자료형)의 이름을 student라고 정의함


int main()
{
	//구조체 변수 선언
	student s[STUDENT_NUM]; // =struct student s[STUDENT_NUM] 
	
	//구조체 멤버 접근 시 [변수.멤버]

	for (int i = 0; i < STUDENT_NUM; i++)
	{
		system("cls");
		printf("이름: ");
		gets_s(s[i].name, NAME_LEN); //gets_s에서는 버퍼에서 엔터(널)값이 추가됨. 버퍼를 비우는 작업을 사용하면 안됨.  

		printf("나이: ");
		scanf("%d", &s[i].age);
		while (getchar() != '\n'); // 버퍼에 남아있는 내용을 모두 가져온다.

		printf("성별(M/F): ");
		scanf("%c", &s[i].gender);
		while (getchar() != '\n');
		puts("");
	}
	system("cls"); // 화면 지우기
	printf("\n\n * 학생 정보 출력 *\n");
	printf("%-20s %5s %5s\n", "이름", "나이", "성별");
	for (int i = 0; i < STUDENT_NUM; i++)
	{
		printf("%-20s %5d %5c\n", s[i].name, s[i].age, s[i].gender);
	}
	return 0;
}
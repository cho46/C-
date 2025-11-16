//#include <stdio.h> //입출력(내부적으로 버퍼를 사용중인 입/출력 함수)
//#include <stdlib.h> //라이브러리 랜덤, 시스템
//#include <time.h> // 시간
//#include <math.h> // 수학 연산
//#include <conio.h> //console input output(내부적으로 버퍼를 사용하지 않는 입/출력 함수)
//#include <string.h> //strlen 문자열 관련 헤더파일(strlen,strcpy,strcat)
//
//#pragma warning (disable : 4996)
#include "myheader.h" // 나만의 헤더 파일을 만들어서 포함시킴. 
#define BOOK_LEN 30
#define BOOK_COUNT 3
#define TITLE_LEN 30
typedef struct book
{
	char name[BOOK_LEN];
	char writer[BOOK_LEN];
	int isSearch;
	int price;
	int count;
	int tprice;
}book;

void input(book* p)
{
	int i;
	for (int i = 0; i < BOOK_COUNT; i++)
	{
		system("cls");
		printf("%d번쨰 책", i + 1);
		printf("\n도서명: ");
		gets_s(p[i].name, BOOK_LEN);

		printf("작가: ");
		gets_s(p[i].writer, BOOK_LEN);

		printf("가격: ");
		scanf("%d", &p[i].price);
		bufferClear(); //헤더파일에 있는 bufferClear 함수[(while(getchar()!='\n')]를 불러옴.

		printf("수량: ");
		scanf("%d", &p[i].count);
		bufferClear();
	}
}
void output(book* p)
{
	system("cls");
	printf("\t\t***도서정보 출력***\n\n");
	printf("%3s \t%5s \t%5s \t%5s \t%5s \t%5s\n", "번호", "도서명", "작가", "가격", "수량", "매출액");
	for (int i = 0; i < BOOK_COUNT; i++)
	{
		printf("%03d \t%5s \t%5s \t%5d \t%5d \t%5d\n", i + 1, p[i].name, p[i].writer, p[i].price, p[i].count, p[i].price * p[i].count);
	}
}
int search(book* p, const char* target)
{
	for (int i = 0; i < BOOK_COUNT; i++)
	{
		
		if (strcmp(p[i].name, target)==0) // 도서명이 같다면? // 오류 /
		{
			return i; // 검색한 도서명의 인덱스를 리턴
		}
	}
	return -1; // 반복문을 다 돌아도 검색한 문자가 없는 경우?
}
int modify(book *p, const char*target)
{
	int searchIdx = search(p, target);
		if (searchIdx == -1)
			return;

		modifyMenu(p ,searchIdx);
}
int modifyMenu(book* p, int searchIdx)
{
	system("cls");
	printf("\n\n\t\t\t***도서정보 수정***\n\n");
	printf("1. 도서명   2. 작가   3. 가격   4. 수량   5. 모두   0. 되돌아가기\n");
	int choice;
	scanf("%d", &choice);
	bufferClear();

	char buf[255];
	int modinum;
	if (choice == 1 || choice == 5)
	{
		printf("변경할 도서명을 입력하세요: ");
		gets_s(buf, 255);
		strcpy(p[searchIdx].name, buf);
	}
	else if (choice == 2 || choice == 5)
	{
		printf("변경할 작가명을 입력하세요: ");
		gets_s(buf, 255);
		strcpy(p[searchIdx].writer, buf);
	}
	else if (choice == 3 || choice == 5)
	{
		printf("변경할 가격을 입력하세요: ");
		scanf("%d", &modinum);
		p[searchIdx].price = modinum;
		p[searchIdx].tprice = p[searchIdx].price * p[searchIdx].count;
	}
	else if (choice == 4 || choice == 5)
	{
		printf("변경할 수량을 입력하세요: ");
		scanf("%d", &modinum);
		p[searchIdx].count = modinum;
		p[searchIdx].tprice = p[searchIdx].price * p[searchIdx].count;
	}
	else if (choice == 0)
	{
		return 0;
	}
}
void printTitle()
{
	printf("\t\t***도서정보 출력***\n\n");
	printf("%3s \t%5s \t%5s \t%5s \t%5s \t%5s\n", "번호", "도서명", "작가", "가격", "수량", "매출액");
}
void printBookInfo(book *p, int index)
{
	printf("\t\t***도서정보 출력***\n\n");
	printf("%3s \t%5s \t%5s \t%5s \t%5s \t%5s\n", "번호", "도서명", "작가", "가격", "수량", "매출액");
}
void remove(book* p, const char* target)
{
	printf("\n\n\t\t 공사중 입니다! 사용불가 메뉴입니다.\n");
	int searchIdx = search(p, target);
	if (searchIdx == -1)
		return;
}
int main()
{
	book s[BOOK_COUNT];
	int i;
	//input(s);
	//output(s);

	while (1)
	{
		system("cls");

		printf("*도서관리 프로그램*\n\n");
		printf("1. 도서 정보 입력\n");
		printf("2. 도서 정보 출력\n");
		printf("3. 도서명 검색\n");
		printf("4. 도서정보 수정\n");
		printf("5. 도서 정보 삭제\n");
		printf("0. 프로그램 종료\n");

		int isSearch;
		int choice;
		printf("\n\n메뉴선택: ");
		scanf("%d", &choice);
		bufferClear();

		char title[TITLE_LEN];
		switch (choice)
		{
		case 1:
			input(s);
			break;
		case 2:
			output(s);//검색함수 선언
			break;
		case 3:
			printf("\n\n\t\t검색할 도서명 입력:");
			gets_s(title, TITLE_LEN);
			search(s, title);
			isSearch = (search(s, title));
			void printTitle();
			if(isSearch != -1)
			{
				printf("검색한 도서명은 존재합니다.");
				printTitle();
				printBookInfo(s ,isSearch);
			}
			else
			{
				printf("검색한 도서는 존재하지 않습니다.");
			}
			break;
		case 4:
			printf("수정할 도서명 입력: ");
			gets_s(title, TITLE_LEN);

			modify(s, title);
			break;
		case 5:
			printf("\n\n\t\t삭제할 도서명을 입력하세요: ");
			gets_s(title, TITLE_LEN);

			remove(s, title);

			break;
		case 0:
			return 0;
		}


		printf("\n\n\t\t");
		system("pause");
	}

	return 0;
}
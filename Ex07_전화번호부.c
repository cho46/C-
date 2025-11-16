#include "myheader.h"

#define NAME_LEN 50
#define PHONE_LEN 30
#define MAX_SIZE 100

typedef struct telephone
{
	char name[NAME_LEN];
	char phone[PHONE_LEN];
}telephone;

void inputTel(telephone* pTel, int* pIdx);
void sortTel(telephone* pTel, int index);
//포인터가 상수화 되면, 포인터로 역참조해서 값 변경이 불가능하게 된다.
void displayTel(const telephone* pTel, int index);
int searchTel(const telephone* pTel, int index, const char* pTarget);
int modifyTel(telephone* pTel, int index, const char* pTarget);
int removeTel(telephone* pTel, int* pIdx, const char* pTarget);
void fileSave(telephone* pTel, int index);
void fileOpen(telephone* pTel, int* pIdx);
int main()
{
	telephone tel[MAX_SIZE];
	int index = 0; //저장할 인덱스
	int isChange = 0; // 입력, 수정, 삭제 시 변경됨

	fileOpen(tel, &index);

	while (1)
	{
		system("cls");
		printf("* 전화번호부 프로그램 *\n\n");
		printf("1. 전화번호 등록\n");
		printf("2. 전화번호 리스트 출력\n");
		printf("3. 전화번호 수정\n");
		printf("4. 전화번호 삭제\n");
		printf("5. 전화번호 검색\n");
		printf("6. 전화번호부 파일 저장\n");
		printf("0. 프로그램 종료\n");

		printf("\n메뉴 선택: ");
		int choice;
		scanf("%d", &choice);
		bufferClear();

		char buf[100];
		switch (choice)
		{
		case 1:
			inputTel(tel, &index);
			isChange = 1;
			break;
		case 2:
			displayTel(tel, index);
			isChange = 1;
			break;
		case 3:
			printf("\n\n수정할 이름을 입력하세요: ");
			fgets(buf, 100, stdin);
			removeEnter(buf);
			//수정 성공 시 1리턴, 실패 시 0리턴
			if (modifyTel(tel, index, buf))
			{
				printf("\n\n\t\t%s 데이터를 수정했습니다.", buf);
				isChange = 1;
			}
			else
				printf("\n\n\t\t%s 데이터 수정을 실패했습니다.", buf);
			break;
		case 4:
			printf("\n\n삭제할 이름을 입력하세요: ");
			fgets(buf, 100, stdin);
			removeEnter(buf);
			//삭제 성공 시 1리턴, 실패 시 0리턴
			if (removeTel(tel, &index, buf))
			{
				isChange = 1;
				printf("\n\n\t\t%s 데이터를 삭제했습니다.", buf);
			}
			else
				printf("\n\n\t\t%s 데이터 삭제를 실패했습니다.", buf);
			break;
		case 5:
			printf("\n\n검색할 이름을 입력하세요: ");
			fgets(buf, 100, stdin);
			removeEnter(buf);
			int searchIdx = searchTel(tel, index, buf);

			if (searchIdx == -1)
				printf("\n\n\t\t검색한 이름은 존재하지 않습니다.\n");
			else
				printf("\n\n\n\t\t검색한 이름의 연락처는 [%s]입니다.\n", tel[searchIdx].phone);
			break;
		case 6:
			fileSave(tel, index);
			isChange = 0;
			break;
		case 0:
			if (isChange == 1)
			{
				printf("\n\n\t\t저장되지 않은 데이터가 존재합니다.\n");
				printf("\t\t저장하시려면 Y/y를 눌러주세요.(취소: 아무키): ");
				char ask = getchar();
				bufferClear();
				if (ask == 'Y' || ask == 'y')
				{
					fileSave(tel, index);
					printf("\n\n\t\t데이터를 추가로 저장했습니다.\n");
				}
			}
			return 0; //프로그램 종료
		}

		printf("\n\n\t\t");
		system("pause");
	}

	return 0;
}

void inputTel(telephone* pTel, int* pIdx)
{
	if (*pIdx == MAX_SIZE)
	{
		printf("\n\n\t\t메모리 공간이 부족합니다.\n");
		printf("\t\t삭제 후 다시 시도하세요!\n");
		return; //함수 종료
	}
	system("cls");
	printf("* 전화번호 등록 화면 *\n\n");
	printf("이름을 입력 하세요: ");
	fgets(pTel[*pIdx].name, NAME_LEN, stdin); //*pIdx == index
	removeEnter(pTel[*pIdx].name);

	printf("\n전화번호를 입력 하세요: ");
	fgets(pTel[*pIdx].phone, PHONE_LEN, stdin); //*pIdx == index
	removeEnter(pTel[*pIdx].phone);

	(*pIdx)++; //index 1증가

	//이름순으로 정렬
	sortTel(pTel, *pIdx);

	printf("\n\n\t\t등록 건수= %d건, 남은 메모리= %d개\n", *pIdx, MAX_SIZE - *pIdx);
}

void sortTel(telephone* pTel, int index)
{
	for (int i = 0; i < index - 1; i++) //정렬 기준 인덱스
	{
		for (int j = i + 1; j < index; j++) //비교 인덱스
		{
			//이름순 정렬
			//if (pTel[i].name > pTel[j].name) //문자열은 대소비교 불가
			if (strcmp(pTel[i].name, pTel[j].name) > 0) //앞 문자열의 코드값이 큰 경우 양수 리턴
			{
				//구조체 통채로 대입
				telephone temp = pTel[i];
				pTel[i] = pTel[j];
				pTel[j] = temp;
			}
		}
	}
	printf("\n\n\t\t이름순으로 정렬되었습니다.\n");
}

void displayTel(const telephone* pTel, int index)
{
	if (index == 0)
	{
		printf("\n\n\t\t등록한 데이터가 없습니다.\n");
		printf("\t\t전화번호 입력 후, 다시 시도하세요!\n");
		return; //함수 종료
	}

	system("cls");

	printf("\n  * 전화번호 리스트 출력 화면 *\n\n");
	printf("%-20s %-20s\n", "이름", "연락처");

	for (int i = 0; i < index; i++)
	{
		printf("%-20s %-20s\n", pTel[i].name, pTel[i].phone);
	}
}

int searchTel(const telephone* pTel, int index, const char* pTarget)
{
	for (int i = 0; i < index; i++)
	{
		//if (pTel[i].name == pTarget) //주소가 같냐?라는 의미로 문자열 비교가 불가능!

		//strcmp함수: 두 문자열이 같으면 0을 리턴하는 함수
		if (strcmp(pTel[i].name, pTarget) == 0)
		{
			return i; //검색한 인덱스를 리턴
		}
	}
	return -1; //검색한 값이 없는 경우는 -1을 리턴
}

int modifyTel(telephone* pTel, int index, const char* pTarget)
{
	//검색 함수 호출
	int searchIdx = searchTel(pTel, index, pTarget);
	if (searchIdx == -1)
		return 0;

	printf("\n전화번호 수정 시 1, 이름 수정 시 2를 선택해주세요(수정을 취소하려면 0): ");
	int choice;
	scanf("%d", &choice);
	bufferClear();

	char buf[80];

	if (choice == 0)
		return 0;
	else if (choice == 1)
	{
		printf("\n\n변경할 전화번호를 입력 하세요: ");
		fgets(buf, 80, stdin);
		removeEnter(buf);

		//pTel[searchIdx].phone = buf; //error
		strcpy(pTel[searchIdx].phone, buf);
	}
	else if (choice == 2)
	{
		printf("\n\n변경할 이름을 입력 하세요: ");
		fgets(buf, 80, stdin);
		removeEnter(buf);

		//pTel[searchIdx].name = buf; //error
		strcpy(pTel[searchIdx].name, buf);
	}

	return 1;
}

int removeTel(telephone* pTel, int* pIdx, const char* pTarget)
{
	//검색 함수 호출
	int searchIdx = searchTel(pTel, *pIdx, pTarget);
	if (searchIdx == -1)
		return 0;

	//맨 뒤의 데이터를 삭제할 위치로 대입
	pTel[searchIdx] = pTel[*pIdx - 1];

	(*pIdx)--; //삭제 시 인덱스 1감소
	return 1;
}

void fileSave(telephone* pTel, int index)
{
	FILE* fp;
	if ((fp = fopen("telephone.txt", "w")) == NULL)
	{
		printf("\n\n\tFile Save Fail\n");
		return; //실패시 메인메뉴로 리턴
	}

	for (int i = 0; i < index; i++)
	{
		fprintf(fp, "%s %s\n", pTel[i].name, pTel[i].phone);
	}
	printf("\n\n\t\ttelephone save complete\n\n");

	fclose(fp);

}

void fileOpen(telephone* pTel, int* pIdx)
{
	FILE* fp;
	fp = fopen("telephone.txt", "r");
	if (fp == NULL)
	{
		printf("File open Fail\n");
		return;
	}

	while (fscanf(fp, "%s %s", pTel[*pIdx].name, pTel[*pIdx].phone) != EOF)
	{
		(*pIdx)++;
	}
	fclose(fp);
}

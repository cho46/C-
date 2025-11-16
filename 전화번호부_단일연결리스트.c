#include "myheader.h"

#define NAME_LEN 50
#define PHONE_LEN 30

typedef struct node
{
	char name[NAME_LEN];
	char phone[PHONE_LEN];
	struct node* next;
}node;

node* head = NULL;

void fileSave();
void fileOpen();
void insertPhone();
void printPhone();
node* searchPhone();
int deletePhone();
int editPhone(node* target, int editNum);
void removePhoneAll();

int main()
{
	int choice;
	int editNum;
	int result;

	fileOpen();

	while (1)
	{
		system("cls");
		printf("\n\n\t\t 전화번호부 프로그램\n\n");
		printf("1. 전화번호 등록\n");
		printf("2. 전화번호부 조회\n");
		printf("3. 전화번호 검색\n");
		printf("4. 전화번호 수정\n");
		printf("5. 전화번호 삭제\n");
		printf("0. 프로그램 종료\n");

		printf("\n\n메뉴를 선택해주세요.\n");
		scanf("%d", &choice);
		bufferClear();

		switch (choice)
		{
		case 1:
			insertPhone();
			printf("\n\n등록이 완료되었습니다.\n\n");
			system("pause");
			break;
		case 2:
			printPhone();
			system("pause");
			break;
		case 3:
			system("cls");
			searchPhone();
			system("pause");
			break;
		case 4:
		{
			system("cls");
			node* pos = searchPhone();

			if (pos != NULL) {
				printf("수정할 항목을 선택해주세요.(1: 이름 / 2: 전화번호): ");
				scanf("%d", &editNum);
				bufferClear();

				int editResult = editPhone(pos, editNum);
				if (editResult == 1)
					printf("\n수정 성공!\n");
				else
					printf("\n수정 실패! (잘못된 항목 선택)\n");
			}
			else {
				printf("\n\n수정할 연락처를 찾지 못했습니다.\n\n");
			}
			system("pause");
			break;
		}
		case 5:
			system("cls");
			result = deletePhone();
			if (result == 1)
				printf("삭제에 성공하였습니다.\n");
			else
				printf("삭제에 실패하였습니다.\n");
			system("pause");
			break;
		case 0:
			fileSave();
			removePhoneAll();
			printf("프로그램을 종료합니다.\n");
			return 0;
		default:
			printf("잘못된 메뉴 선택입니다. 다시 입력해주세요.\n");
			system("pause");
			break;
		}
	}
}

void fileSave()
{
	FILE* fp;
	fp = fopen("listPhone.txt", "w");
	if (fp == NULL)
	{
		printf("파일 열기 실패\n");
		return;
	}

	node* curNode = head;
	while (curNode != NULL)
	{
		fprintf(fp, "%s %s\n", curNode->name, curNode->phone);
		curNode = curNode->next;
	}
	printf("저장 완료.\n");
	fclose(fp);
}

void fileOpen()
{
	FILE* fp;
	char dName[NAME_LEN];
	char dPhone[PHONE_LEN];

	fp = fopen("listPhone.txt", "r");
	if (fp == NULL)
	{
		printf("파일 열기 실패\n");
		return;
	}

	removePhoneAll();

	while (fscanf(fp, "%s %s", dName, dPhone) == 2)
	{
		node* newNode;
		newNode = (node*)malloc(sizeof(node));
		if (newNode == NULL) {
			printf("메모리 할당 실패\n");
			fclose(fp);
			return;
		}

		strcpy(newNode->name, dName);
		strcpy(newNode->phone, dPhone);
		newNode->next = NULL;

		if (head == NULL || strcmp(newNode->name, head->name) < 0)
		{
			newNode->next = head;
			head = newNode;
		}
		else {
			node* curNode = head;
			while (curNode->next != NULL && strcmp(newNode->name, curNode->next->name) > 0)
			{
				curNode = curNode->next;
			}
			newNode->next = curNode->next;
			curNode->next = newNode;
		}
	}

	fclose(fp);
}

void insertPhone()
{
	node* newNode;
	newNode = (node*)malloc(sizeof(node));
	if (newNode == NULL) 
	{
		printf("메모리 할당 실패\n");
		return;
	}

	char dname[NAME_LEN];
	char dphone[PHONE_LEN];

	system("cls");

	printf("\n\n등록할 이름을 입력하세요.\n");
	fgets(dname, NAME_LEN, stdin);
	removeEnter(dname);

	printf("등록할 전화번호를 입력하세요.\n");
	fgets(dphone, PHONE_LEN, stdin);
	removeEnter(dphone);

	strcpy(newNode->name, dname);
	strcpy(newNode->phone, dphone);
	newNode->next = NULL;

	if (head == NULL || strcmp(newNode->name, head->name) < 0)
	{
		newNode->next = head;
		head = newNode;
		return;
	}

	node* curNode = head;
	while (curNode->next != NULL && strcmp(newNode->name, curNode->next->name) > 0)
	{
		curNode = curNode->next;
	}
	newNode->next = curNode->next;
	curNode->next = newNode;
}

void printPhone()
{
	system("cls");
	if (head == NULL)
	{
		printf("\n\n출력할 전화번호가 없습니다.\n\n");
		return;
	}

	printf("\t\t\n\n전화번호부\n\n");
	node* curNode = head;
	printf("%s\t\t%s\n", "이름", "전화번호");
	while (curNode != NULL)
	{
		printf("%s\t\t%s\n", curNode->name, curNode->phone);
		curNode = curNode->next;
	}
}

node* searchPhone()
{
	system("cls");
	char dName[NAME_LEN];
	node* curNode = head;
	printf("검색할 이름을 입력하세요.: ");
	fgets(dName, NAME_LEN, stdin);
	removeEnter(dName);

	if (head == NULL) {
		printf("\n\n등록된 연락처가 없습니다.\n\n");
		return NULL;
	}

	while (curNode != NULL)
	{
		if (strcmp(dName, curNode->name) == 0)
		{
			printf("\n\n검색결과: 이름: %s \t\t 전화번호: %s\n\n", curNode->name, curNode->phone);
			return curNode;
		}
		curNode = curNode->next;
	}
	printf("\n\n검색한 사용자는 존재하지 않습니다.\n\n");
	return NULL;
}

int deletePhone()
{
	node* delNode;
	node* prevNode;
	system("cls");

	if (head == NULL)
	{
		printf("삭제할 전화번호가 없습니다.\n");
		return 0;
	}

	char dName[NAME_LEN];
	printf("삭제할 이름을 입력하세요.: ");
	fgets(dName, NAME_LEN, stdin);
	removeEnter(dName);

	if (strcmp(dName, head->name) == 0)
	{
		delNode = head;
		head = head->next;
		free(delNode);
		printf("'%s' 연락처를 성공적으로 삭제했습니다.\n", dName);
		return 1;
	}

	prevNode = head;
	delNode = head->next;

	while (delNode != NULL)
	{
		if (strcmp(dName, delNode->name) == 0)
		{
			prevNode->next = delNode->next;
			free(delNode);
			printf("'%s' 연락처를 성공적으로 삭제했습니다.\n", dName);
			return 1;
		}

		prevNode = delNode;
		delNode = delNode->next;
	}

	printf("'%s' 이름의 연락처를 찾을 수 없습니다.\n", dName);
	return 0;
}

int editPhone(node* target, int editNum)
{
	char edit[PHONE_LEN];
	printf("\n\n수정할 내용을 입력해주세요.");
	fgets(edit, PHONE_LEN, stdin);
	removeEnter(edit);
	if (editNum == 1)
	{
		strcpy(target->name, edit);
		return 1;
	}
	else if (editNum == 2)
	{
		strcpy(target->phone, edit);
		return 1;
	}

	return 0;
}

void removePhoneAll()
{
	node* delNode;

	while (head != NULL)
	{
		delNode = head;
		head = head->next;
		free(delNode);
	}
}
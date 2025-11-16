#include "myheader.h"

typedef struct node
{
	int value;			//정수 값
	struct node* next;	//다음 노드의 주소를 저장하는 포인터 변수(8바이트)
}node;
node* head = NULL;
void push(int data)
{
	//연결리스트는 필요할땨마다 노드를 생성해서 저장하는 구조라서
	// overflow가 발생하지 않음
	//노드 생성
	node* newNode; //새로 생성된 노드의 주소를 저장하는 포인터 변수(8바이트)
	newNode = (node*)malloc(sizeof(node));

	//노드에 값을 저장
	newNode->value = data;
	newNode->next = NULL;

	//연결리스트에 노드를 연결
	if (head == NULL)
	{
		head = newNode;
		return; //호출한 곳으로 돌아간다.(함수 종료)
	}

	//노드를 맨 앞에 추가!
	newNode->next = head;
	head = newNode;
}

int pop()
{
	//물리적인 삭제 => 메모리상에서 제거

	if (head == NULL)
		return -99999;

	node* delNode; //삭제할 노드의 주소를 저장하는 포인터 변수(8바이트)

	//첫 노드를 삭제할 노드로 설정
	delNode = head;

	//head의 값을 다음 주소로 변경
	head = head->next;

	int delValue = delNode->value;
	//첫 노드 제거
	free(delNode); //free(포인터);

	return delValue;
}

void stackPrint()
{
	if (head == NULL)
	{
		printf("Stack UnderFlow\n");
		return;
	}

	printf("\n\n\t\tStack Display(LIFO): ");

	node* curNode; //방문한 노드의 주소를 저장하는 포인터변수(8바이트)
	//첫번째 노드부터 방문
	curNode = head;

	while (curNode != NULL)
	{
		printf("%d ", curNode->value);
		curNode = curNode->next;
	}

	//printf("%d ", curNode->value);
	//curNode = curNode->next;

	//printf("%d ", curNode->value);
	//curNode = curNode->next;

	//printf("%d ", curNode->value);
	//curNode = curNode->next;
}


int stackClear()
{
	//물리적인 삭제
	if (head == NULL)
		return 0;

	node* delNode; //삭제할 노드의 주소를 저장하는 포인터 변수(8바이트)

	while (head != NULL)
	{
		//첫 노드를 삭제할 노드로 설정
		delNode = head;

		//head의 값을 다음 주소로 변경
		head = head->next;

		//첫 노드 제거
		free(delNode); //free(포인터);
	}

	return 1;
}


int main()
{
	int choice;
	int data;
	while (1)
	{
		system("cls");
		printf("\n\n\t\t*** Stack with Linkedlist ***\n\n");
		printf("\t\t1. push    2. pop    3. print    4. clear    0. exit\n");
		printf("\t\tchoice : [ ]\b\b");
		scanf("%d", &choice);
		while (getchar() != '\n');

		switch (choice)
		{
		case 1:
			printf("\n\n삽입할 정수를 입력하세요.: ");
			scanf("%d", &data);
			bufferClear();

			push(data);
			break;
		case 2:
			data = pop();
			if (data == -99999)
				printf("\n\n\t\tStack UnderFlow\n");
			else
				printf("\n\n\t\t%d pop!\n", data);
			break;
		case 3:
			stackPrint();
			break;
		case 4:
			stackClear();
			break;
		case 0:
			exit(0);
		}
		printf("\n\n\t\t");
		system("pause");
	}
	return 0;
}
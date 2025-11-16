#include "myheader.h"

#pragma warning (disable : 4996)
typedef struct node
{
	int value;
	struct node* next;
}node;

node* head = NULL; // 첫노드의 주소를 저장하는 포인터(8바이트)
node* tail = NULL; //마지막 노드의 주소를 저장하는 포인터(8바이트)

void enqueue(int data);
int dequeue();
int isEmpty();
int peek();
void displayQueue();
void clearQueue();

int main()
{
	int choice, data;
	while (1)
	{
		system("cls");
		printf("\n\n\t\t****  연결리스트를 이용한 큐 ***\n\n");
		printf("1. enqueue    2. dequeue    3. print     4. clear    5.peek     0. terminate\n");
		printf("choice : [ ]\b\b");
		scanf("%d", &choice);
		while (getchar() != '\n');

		switch (choice)
		{
		case 1:
			printf("\n\n\t\t삽입할 정수를 입력 하세요: ");
			scanf("%d", &data);
			bufferClear();

			enqueue(data);
			break;
		case 2:
			data = dequeue();
			if (data = -99999)
				printf("\n\n\t\tQueue Underflow\n");
			else
				printf("\n\n\t\t삭제된 값 = %d\n", data);
			break;
		case 3:
			displayQueue();
			break;
		case 4:
			//물리적인삭제
			clearQueue();
			break;
		case 5:
			printf("이번에 삭제될 값은? =%d",peek());
			break;
		case 0:
			exit(0);
		}
		printf("\n\n\t\t");
		system("pause");
	}
	return 0;
}


void enqueue(int data)
{
	//노드 생성
	node* newNode = (node*)malloc(sizeof(node));

	//값 저장
	newNode->value = data;
	newNode->next = NULL;

	//연결리스트에 노드를 추가
	if (head == NULL)
	{
		head = tail = newNode;
		return;
	 }

	//마지막 노드에 추가
	tail->next = newNode;
	tail = newNode;
}

int dequeue()
{
	if (head == NULL)
		return -99999;

	//첫노드를 제거
	int delValue = head->value;
	node* delNode = head;
	head = head->next;
	free(delNode);

	if (head == NULL)
		tail = NULL;


	return delValue;
}

int isEmpty()
{
	if (head == NULL)
		return 1;
	else
		return 0;
}

int peek()
{
	if (isEmpty())
		return -99999;
	else
	return head->value;
}

void displayQueue()
{
	if (isEmpty())
	{
		printf("큐는 비어있습니다.\n");
		return;
	}
	//선입선출(FIFO)
	printf("Queue Display: ");
	node* curNode = head;
	while (curNode)
	{
		printf("%d", curNode->value);
		curNode = curNode->next;
	}
	puts("");
}

void clearQueue()
{
	if (head == NULL)
		return;

	//전체노드를 제거
	while (head)
	{
		node* delNode = head;
		head = head->next;
		free(delNode);
	}

	tail = NULL;
	return;
}

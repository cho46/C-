#include "myheader.h"

#pragma warning (disable : 4996)

#define MAX_SIZE 5

//원형 큐 구현
typedef struct Queue
{
	int arr[MAX_SIZE]; // 큐로 사용할 배열
	int rear; // 삽입할 위치(배열의 인덱스)
	int front; // 삭제할 위치(배열의 인덱스)
	int count; // 저장된 원소의 개수
}Queue;

void enqueue(Queue* ptr, int data);
int dequeue(Queue* ptr);
int isEmpty(const Queue* ptr);
int peek(const Queue* ptr);
void displayQueue(const Queue* ptr);

int main()
{
	int choice;
	Queue que;
	int data;
	que.rear = que.count = que.front = 0;
	


	while (1)
	{
		system("cls");
		printf("\n\n\t\t****  배열을 이용한 큐 ***\n\n");
		printf("1. enqueue    2. dequeue    3. print    4. clear   5. peek   0. terminate\n");
		printf("choice : [ ]\b\b");
		scanf("%d", &choice);
		while (getchar() != '\n');

		switch (choice)
		{
		case 1:
			printf("삽입할 정수를 입력하세요: ");
			scanf("%d", &data);
			bufferClear();

			enqueue(&que, data);
			break;
		case 2:
			data = dequeue(&que);
			if (data == -99999)
				printf("Queue Underflow\n");
			else
				printf("\n\n\t\t삭제된 값 = %d",data);
			break;
		case 3:
			displayQueue(&que);
			break;
		case 4:
			//논리적인 삭제
			que.rear = que.count = que.front = 0;
			break;
		case 5:
			printf("\n\n\t\t 이번에 삭제될 값은? %d\n", peek(&que));
			break;
		case 0:
			exit(0);
		}
		printf("\n\n\t\t");
		system("pause");
	}
	return 0;
}

void enqueue(Queue* ptr, int data)
{
	if (ptr->count == MAX_SIZE)
	{
		printf("\n\n\t\t Queue Overflow");
		return;
	}


	ptr->arr[(ptr->rear)++] = data;
	(ptr->rear)++; //삽입 위치를 변경
	ptr->rear %= MAX_SIZE;
	(ptr->count)++; // 저장된 원소의 개수도 1증가

	//if (ptr->rear == MAX_SIZE)
		//ptr->rear = 0;

}

int dequeue(Queue* ptr)
{
	if (ptr->count == 0)
	{
		printf("\n\n\t\t Queue Underflow");
		return -99999;
	}


	int delvalue = ptr->arr[(ptr->front)++];
	(ptr->front)++;
	ptr->front %= MAX_SIZE;
	(ptr->count)--;

	//원형큐를 구현하기 위해서
	//if (ptr->front == MAX_SIZE)
		//ptr->front = 0;


	return delvalue; // 삭제된 값을 리턴
}

int isEmpty(const Queue* ptr)
{
	//큐가 비어있다면 True(1), 아니라면 False(0)
	if (ptr->count == 0)
		return 1;
	else
		return 0;
}

int peek(const Queue* ptr)
{
	if (isEmpty(ptr))
		return -99999;

	return ptr->arr[ptr->front]; //꼭대기값(삭제될 값) 리턴
}

void displayQueue(const Queue* ptr)
{
	if (isEmpty(ptr))
	{
		printf("\n\n\t\t큐는 비어있습니다.\n");
		return ;
	}

	//선입선출
	printf("\n\n\t\tQueue Display(FIFO): ");
	for (int i = ptr->front;i<(ptr->front + ptr->count);i++)
	{
		printf("%d ", ptr->arr[i%MAX_SIZE]);
	}
}

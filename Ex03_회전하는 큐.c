#include "myheader.h"

typedef struct node
{
	int value;
	struct node* prev;
	struct node* next;
}node;

node* head = NULL;
node* tail = NULL;


void circularQueue(int n);
void displayQueue();
int isEmpty();
int min_rotate_count(int n, int target);

int main()
{
	//target제거를 위한 최소 이동 횟수를 구하시오
	printf("2를 제거하기 위한 최소 이동횟수는 %d회 입니다.\n",min_rotate_count(10, 2));


	return 0;
}

void circularQueue(int n)
{
		head = (node*)malloc(sizeof(node));
		tail = head;
		head->value = 1;
		head->prev = head->next = NULL;
	
	for (int i = 2; i <= n; i++)
	{
		node* newNode = (node*)malloc(sizeof(node));
		newNode->value = i;
		newNode->next = newNode->prev = NULL;

		tail->next = newNode;
		newNode->prev = tail;
		tail = newNode;

		//원형큐를 만듦
		tail->next = head;
		head->prev = tail;
		
	}
}
int min_rotate_count(int n, int target)
{
	//n만큼 원형 큐 생성
	circularQueue(n);
	//displayQueue();

	//왼쪽, 오른쪽중 어느쪽이 더 빠른지?
	int size = n;
	int idx =  0;
	int left = 0;
	node* curNode = head;

	while (curNode->value != target)
	{
		idx++;
		curNode = curNode->next;
	}
	int rotateCount = 0;
	node* delNode = head;
	if (idx < size/2) //왼쪽이동
	{
		for (int i = 0; i < idx; i++)
		{
			delNode = delNode->next;
			++rotateCount;
		}
	}
	else //오른쪽이동
	{
		for (int i = 0; i < size-idx; i++)
		{
			delNode = delNode->prev;
			++rotateCount;
		}
	}
		//재연결
		delNode->next->prev = delNode->prev;
		delNode->prev->next = delNode->next;
		tail = delNode->prev;
		head = delNode->next;
		free(delNode);

	return rotateCount;
}
int isEmpty()
{
	if (head == NULL)
		return 1;
	else
		return 0;
}
void displayQueue()
{
	if (isEmpty())
	{
		printf("\n\n\t\t큐는 비어 있습니다.\n");
		return;
	}

	//선입선출: Fisrt In First Out, FIFO
	printf("\n\nQueue Display(FIFO): ");

	node* curNode = head;
	while (curNode != tail)
	{
		printf("%d ", curNode->value);
		curNode = curNode->next;
	}
	puts("");
}
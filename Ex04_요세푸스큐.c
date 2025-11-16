#include "myheader.h"

typedef struct node
{
	int value;
	struct node* next;
	struct node* prev;
}node;

node* head = NULL;
node* tail = NULL;

int josephusQueue(n, k)
{
	head = (node*)malloc(sizeof(node));
	tail = head;
	head->value = 1;
	head->prev = head->next = NULL;

	for (int i = 2; i <= n; i++)
	{
		node* newNode = (node*)malloc(sizeof(node));
		newNode->value = i;
		newNode->prev = newNode->next = NULL;

		tail->next = newNode;
		newNode->prev = tail;
		tail = newNode;
	}
	tail->next = head;
	head->prev = tail;

	/*node* curNode = head;
	while (curNode != tail)
	{
		printf("%d ", curNode->value);
		curNode = curNode->next;
	}
	printf("%d ", curNode->value);
	puts("");*/


	node* delNode = head;
	node* killNode = head;

	while (delNode != delNode->next)
	{
		for (int i = 0; i < k-1; i++)
		{
			delNode = delNode->next;
		}
		delNode->next->prev = delNode->prev;
		delNode->prev->next = delNode->next;
		killNode = delNode->next;
		printf("%d번 탈락.\n", delNode->value);
		free(delNode);
		delNode = killNode;
	}
	
	return delNode->value;
}

int main()
{

	int n, k;
	printf("처형을 기다리는 사람은 몇 명 입니까?");
	scanf("%d", &n);

	printf("몇번째 사람을 처형시키겠습니까? ");
	scanf("%d", &k);

	printf("생존자는 %d번 입니다.\n", josephusQueue(n, k));
}
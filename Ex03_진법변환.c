#include "myheader.h"

typedef struct node
{
	int value;			//정수 값
	struct node* next;	//다음 노드의 주소를 저장하는 포인터 변수(8바이트)
}node;
node* head = NULL;

void to_binary(int num);
void display(int num)
{
	if (head == NULL)
	{
		printf("변환할 정수는 존재하지 않습니다.\n");
		return;
	}

	printf("\n\n\t\t10진수: %d => 2진수: ",num);

	node* curNode; //방문한 노드의 주소를 저장하는 포인터변수(8바이트)
	//첫번째 노드부터 방문
	curNode = head;

	while (curNode != NULL)
	{
		printf("%d ", curNode->value);
		curNode = curNode->next;
	}
	printf("(2)  \n",curNode->value);
}
int memoryFree()
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
	int num;
	printf("10진수를 입력하세요: ");
	scanf("%d", &num);

	to_binary(num); //2진수 변환
	display(num); //2진수 출력
	memoryFree(); // 동적으로 할당된 메모리 제거

	return 0;
}

void to_binary(int num)
{

	while (num > 0)
	{
		node* newNode;
		newNode = (node*)malloc(sizeof(node));

		newNode->value = num % 2;
		newNode->next = NULL;
		num /= 2;

		if (head == NULL)
		{
			head = newNode;
		}
		else 
		{
			newNode->next = head;
			head = newNode;
		}
	}
}


#include "myheader.h"

typedef struct node
{
	int value;			//정수 값
	struct node* next;	//다음 노드의 주소를 저장하는 포인터 변수(8바이트)
}node;

//전역변수로 선언: 함수 어디서든 접근 가능한 변수다.
node* head = NULL; //첫 번째 노드의 주소를 저장하는 포인터 변수(8바이트)

void insertNodeFront(int data);
void insertNodeRear(int data);
void insertNodeAscend(int data);
void nodeTraversal();
int getNodeCount();
int getNodeSum();
int removeNodeFront();
int removeNodeAll();
int removeNodeTarget(int target);
node* searchNode(int target);

int main()
{

	while (1)
	{
		system("cls");
		printf("\n\n\t\t단일 연결 리스트(Singly Linked List)\n\n");
		printf(" 1. 맨 앞에 노드를 삽입\n");
		printf(" 2. 맨 뒤에 노드를 삽입\n");
		printf(" 3. k번째에 노드를 삽입\n");
		printf(" 4. 오름차순 정렬해서 삽입\n");
		printf("===========================\n");
		printf(" 5. 맨 앞 노드를 삭제\n");
		printf(" 6. 맨 뒤 노드를 삭제\n");
		printf(" 7. k번째 노드를 삭제\n");
		printf(" 8. 특정 값 노드를 삭제\n");
		printf(" 9. 전체 노드를 삭제\n");
		printf("===========================\n");
		printf("10. 단일 연결 리스트 순회\n");
		printf("11. 노드의 개수 구하기\n");
		printf("12. 노드의 합계 구하기\n");
		printf("13. 노드 검색\n");
		printf("14. 노드 역순 연결\n");
		printf("15. 중간 값 노드 찾기\n");
		printf("===========================\n");
		printf(" 0. 프로그램 종료\n");

		printf("\n메뉴 선택: [  ]\b\b\b");
		int choice;
		scanf("%d", &choice);
		bufferClear();

		int data;

		switch (choice)
		{
		case 1:
			printf("삽입할 정수를 입력하세요: ");
			scanf("%d", &data);
			bufferClear();

			insertNodeFront(data);
			break;
		case 2:
			printf("삽입할 정수를 입력하세요: ");
			scanf("%d", &data);
			bufferClear();

			insertNodeRear(data);
			break;
		case 3:
			break;
		case 4:
			printf("삽입할 정수를 입력하세요: ");
			scanf("%d", &data);
			bufferClear();

			insertNodeAscend(data);
			break;
		case 5:
			if (removeNodeFront())
				printf("\n\n\t\t첫 노드 삭제 성공!\n");
			else
				printf("\n\n\t\t첫 노드 삭제 실패!\n");
			break;
		case 6:
			break;
		case 7:
			break;
		case 8:
			printf("삭제할 정수를 입력하세요: ");
			scanf("%d", &data);
			bufferClear();

			if (removeNodeTarget(data))
				printf("\n\n\t\t%d 노드 삭제 성공!\n", data);
			else
				printf("\n\n\t\t%d 노드 삭제 실패!\n", data);
			break;
		case 9:
			if (removeNodeAll())
				printf("\n\n\t\t전체 노드 삭제 성공!\n");
			else
				printf("\n\n\t\t전체 노드 삭제 실패!\n");
			break;
		case 10:
			nodeTraversal();
			break;
		case 11:
			printf("\n\n\t\t생성된 노드의 개수는 %d개 입니다.\n", getNodeCount());
			break;
		case 12:
			printf("\n\n\t\t생성된 노드의 합계는 %d 입니다.\n", getNodeSum());
			break;
		case 13:
			printf("검색할 정수를 입력하세요: ");
			scanf("%d", &data);
			bufferClear();

			//searchNode함수: 검색한 노드의 주소를 리턴, 검색 노드가 없는 경우는 NULL을 리턴
			node* pos = searchNode(data);
			if (pos != NULL)
				printf("\n\n\t\t검색한 노드의 주소는 %p입니다.\n", pos);
			else
				printf("\n\n\t\t검색한 노드는 존재하지 않습니다.\n");
			break;
		case 14:
			break;
		case 15:
			break;
		case 0:
			//메모리 누수(memory leak)를 막기 위해 모든 노드를 제거한다.
			removeNodeAll();
			return 0;
		}

		printf("\n\n\t\t");
		system("pause");
	}
	return 0;
}

//O(1)
void insertNodeFront(int data)
{
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

//O(N)
void insertNodeRear(int data)
{
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

	node* curNode = head;
	//마지막 노드에서 스탑!
	while (curNode->next != NULL)
		curNode = curNode->next;

	//마지막 노드로 연결
	curNode->next = newNode;
}

void insertNodeAscend(int data)
{
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

	//가장 작은 값인 경우 맨 앞 노드로 추가
	if (data < head->value)
	{
		//맨 앞 노드로 추가!
		newNode->next = head;
		head = newNode;
		return;
	}

	node* prevNode = head;
	node* curNode = head;

	while (curNode->next != NULL)
	{
		curNode = curNode->next;
		if (curNode->value > newNode->value)
		{
			//여기에서 연결!
			newNode->next = curNode;
			prevNode->next = newNode;
			return;
		}
		prevNode = prevNode->next;
	}

	//가장 큰 값인 경우 맨 마지막 노드로 추가!
	curNode->next = newNode;
}

//o(N)
void nodeTraversal()
{
	if (head == NULL)
	{
		printf("연결 리스트가 구성되지 않아 출력할 데이터가 없습니다.\n");
		return;
	}

	printf("\n\n\t\tSingly Linked List: ");

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

int getNodeCount()
{
	if (head == NULL)
		return 0;

	//순회하면서 개수 증가
	node* curNode = head;
	int count = 0;

	while (curNode != NULL) //방문한 노드가 있다면?
	{
		++count; //개수를 증가하고, 
		curNode = curNode->next; //다음 노드로 이동
	}
	return count;
}

//O(N): 생성된 노드의 수만큼 연산 수행!
int getNodeSum()
{
	if (head == NULL)
		return 0;

	//순회하면서 합계 구하기
	node* curNode = head;
	int sum = 0;

	while (curNode != NULL) //방문한 노드가 있다면?
	{
		sum += curNode->value; //방문한 노드의 값을 저장 
		curNode = curNode->next; //다음 노드로 이동
	}
	return sum;
}

//O(1): 노드의 개수와 상관없이 항상 일정 횟수의 연산을 수행 
int removeNodeFront()
{
	if (head == NULL)
		return 0;

	node* delNode; //삭제할 노드의 주소를 저장하는 포인터 변수(8바이트)

	//첫 노드를 삭제할 노드로 설정
	delNode = head;

	//head의 값을 다음 주소로 변경
	head = head->next;

	//첫 노드 제거
	free(delNode); //free(포인터);

	return 1;
}

int removeNodeAll()
{
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

int removeNodeTarget(int target)
{
	node* delNode, * prevNode;

	if (head == NULL)
		return 0;

	//삭제할 값이 첫 번째 값이야? => head가 변경돼야 하기 때문이다.
	if (head->value == target)
	{
		//첫 노드 제거
		delNode = head;
		head = head->next;
		free(delNode); //노드 제거
		return 1;
	}

	delNode = prevNode = head;

	while (delNode->next != NULL)
	{
		delNode = delNode->next;

		if (delNode->value == target)
		{
			//여기서 삭제! 
			//삭제 전 연결부터!
			prevNode->next = delNode->next;
			free(delNode);
			return 1;
		}

		prevNode = prevNode->next;
	}

	return 0;
}

//O(N)
node* searchNode(int target)
{
	if (head == NULL)
		return NULL;

	//순회하면서 target검색
	node* curNode = head;
	while (curNode != NULL) //방문한 노드가 있다면?
	{
		if (curNode->value == target)
		{
			return curNode;//검색한 노드의 주소를 리턴
		}
		curNode = curNode->next;
	}

	return NULL;
}
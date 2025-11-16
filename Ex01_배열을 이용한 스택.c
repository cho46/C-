#include "myheader.h"
#define MAX_SIZE 5

typedef struct stack
{
	int arr[MAX_SIZE]; //스택으로 사용할 배열
	int top;					//꼭대기
}stack;

void push(stack* ptr, int data);
int pop(stack *ptr);
void displayStack(const stack *stk);
int main()
{
	int choice, data;
	stack stk; //구조체 변수 선언(24바이트)
	stk.top = -1;

	while (1)
	{
		system("cls");
		printf("\n\n\t\t*** Stack with Array ***\n\n");
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

			push(&stk,data);

			break;
		case 2:
			data = pop(&stk);
			if (data == -99999)
				printf("\n\n\t\tStack UnderFlow\n");
			else
				printf("\n\n\t\t%d pop!\n", data);
			break;
		case 3:
			displayStack(&stk);
			break;
		case 4:
			//논리적인 삭제! =>삭제된 것처럼 코드를 구현! 실제 삭제되는건 아니다.
			stk.top = -1;
			break;
		case 0:
			exit(0);
		}
		printf("\n\n\t\t");
		system("pause");
	}
	return 0;
}

void push(stack* ptr, int data)
{
	if (ptr->top ==MAX_SIZE-1)
	{
		printf("\n\n\t\tStack Overflow\n");
		return;
	}
	(ptr->top)++;
	ptr->arr[ptr->top] = data;
}

int pop(stack* ptr)
{
	if (ptr->top == -1)
	{
		return -99999;
	}
	
	//배열에서의 삭제는 물리적인 삭제가 아니다.
	//즉, 진짜 삭제되는 것이 아니라, 삭제된 것처럼 코드를 작성한다.
	int delvalue = ptr->arr[ptr->top];
	(ptr->top)--;
	return ;
}

void displayStack(const stack* ptr)
{
	//Last In First Out
	printf("\n\n\t\tStack Display(LIFO): ");
	for (int i = ptr->top; i <=0; i--)
	{
		printf("\n\n%d", ptr->arr[i]);
	}
}

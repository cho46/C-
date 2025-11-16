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


int evaluate_postfix(char* expression);
int main()
{
	char* expression[255] = "3 4 + 5 * 6 -"; //((3+4)*5) - 6

	printf("결과=%d\n", evaluate_postfix(expression));


	return 0;
}

int evaluate_postfix(char* expression)
{
	char* token = strtok(expression, " ");
	//printf("%s", token);
	//printf("%d", token[0] - '0'); // 숫자형태의 문자는 코드값이 숫자보다 48이 큼

	//if (*token >= '0' && *token <= '9')
	if(isdigit(*token))
	{
		*token -= 48; //숫자 형태의 문자를 숫자로 변환
		//push(*token);
		//push(atoi(*token)); //숫자형태의 문자를 숫자로 변환시킴

	}
	else // 후위 표기식에서는 연산자가 먼저 나올수가 없음.
	{
		return 0;
	}
	

	while (token = strtok(NULL, " ")) //토큰이 없다면 NULL
	{
		if (*token == '+'|| *token == '-' || *token == '*' || *token == '/' )
		{
			int var2 = pop();
			int var1 = pop();

			switch (*token)
			{
			case '+':
				push(var1 + var2);
			case '-':
				push(var1 + var2);
			case '*':
				push(var1 + var2);
			case '/':
				push(var1 + var2);
			}

		}
		else
		{
			push(atoi(*token));
		}
		
		//연산자가 아닌 경우에는 스택에 push
		//연산자인 경우는 pop 2번
		//연산자에 따라 계산한 후, 스택에 push;
	}
	return head->value; //스택에 [0]값을 리턴
}

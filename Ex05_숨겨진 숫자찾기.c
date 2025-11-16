/*숨겨진 숫자 찾기
* 
* 1. 1 ~ 10까지 배열에 차례대로 저장
* 2. 무작위로 한개의 숫자를 숨긴다.(숨긴 숫자는 -1로 저장)
* 3. 이때, 어떤 숫자가 숨겨져 있는지를 맞히는 게임
* 4. 빠진 숫자를 맞출경우엔 정답, 못맞출경우 오답으로 출력한다.
* 5. 적절하게 함수, 배열, 포인터를 이용해서 풀이하기.
* 
* [출력 예]
* [숫자 맞추기 게임]
* 빠진 숫자는 무엇일까요? 5
* 오답입니다. or 정답입니다.
* 
* 
*/
#include <stdio.h> //입출력(내부적으로 버퍼를 사용중인 입/출력 함수)
#include <stdlib.h> //라이브러리 랜덤, 시스템
#include <time.h> // 시간
#include <math.h> // 수학 연산
#include <conio.h> //console input output(내부적으로 버퍼를 사용하지 않는 입/출력 함수)

#pragma warning (disable : 4996)

int onetoten(int *pnums)
{
	int i;
	
	for (i = 0; i < 10; i++)
	{
		pnums[i] += (i + 1);
		
	}
}
int delectnum(int *pnums)
{
	srand((unsigned int)time(NULL));
	int a = rand() % 10;
	pnums[a] = -1;

	return a + 1; //숨긴숫자 리턴
}



int main()
{
	int nums[10];
	int guess;
	int onetoten(nums);
	int hidden = delectnum(nums);
	printf("[숫자 맞추기 게임]");
	printf("빠진 숫자는 무엇일까요?");
	scanf("%d", &guess);
	//1. 배열에 1~10까지 차례대로 저장한다.
	//2. 랜덤하게 숫자를 숨긴다.(숨긴 숫자는 -1로 저장)
	//3. 사용자에게 입력을 받아 오답과 정답을 출력.
	if (guess == hidden)
	{
		printf("정답");
	}
	else
	{
		printf("오답. 정답은 %d입니다", hidden);
	}
	return 0;
}
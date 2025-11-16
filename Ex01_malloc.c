#include "myheader.h"

int main()
{
	int a = 5;
	double d = 3.14;
	//모든 타입의 주소를 저장이 가능함
	//하지만 타입이 없기 때문에 역참조는 불가
	//역참조시 반드시 형변환후 사용.
	void* ptr;

	
	ptr = &a;
	printf("%d", *(int*)ptr);

	ptr = &d;


	//int num;
	//printf("숫자 입력: ");
	//scanf("%d", &num);

	/*
	정적할당: 컴파일하는 시점에 메모리 크기가 결정돼야 한다.
	C언어의 모든 변수는 정적할당.
	때문에, 배열의 크기로 변수는 불가능함
	변수의 초기화는 실행 중에 결정되기 때문이다.
	*/
	//동적할당: 실행중에 메모리를 할당. heap영역에 잡힌다.
	//int *score = malloc(sizeof(int) *num);

	//동적으로 할당된 메모리 제거
	//동적메모리를 제거하지 않을 시 메모리 누수(memory leak)가 발생
	//free(포인터); 포인터가 가리키는 동적메모리가 제거됨.
	//free(score);

	return 0;
}
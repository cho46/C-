#include <stdio.h>

int main()
{
	//상수(constant): 고정된 값을 저장하는 공간
	//상수를 대문자 기초로 작성한다. pascal표기법을 쓴다.
	// Ex:MY_AGE, YOUR_AGE
	//한번 값을 설정하면 변경할 수 없음.
	//상수는 반드시 선언하면서 초기화가 되어야한다.
	//선언된 공간에는 쓰레기 값으로 채워지기 때문.
	
	const int con = 5;
	//con = 55; // 에러발생: 상수의 값은 변경이 불가능함.





	//변수(variable): 변하는 값을 저장하는 공간
	//변수를 소문자 기초로 작성한다. camel 표기법을 쓴다.
	//EX: int myAge, yourAge

	int var = 546;
	var = -12;
	var = 777;

	printf("변수 = %d\n", var);







	return 0;
}
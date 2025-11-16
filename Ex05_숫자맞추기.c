#include <stdio.h> //입출력
#include <stdlib.h> //라이브러리 랜덤, 시스템
#include <time.h> // 시간
#include <math.h> // 수학 연산

#pragma warning (disable : 4996)

int main()
{
	int chance = 5;
	int computer,user, i;
	printf("\n\n\n\t\t1부터 100사이의 숫자 중 기억하는 숫자를 맞추세요!\n");
	printf("\t\t총 기회는 [%d회] 입니다.\n", chance);

	srand((unsigned int)time(NULL));
	computer = rand() % 100 + 1;
	printf("\n\n테스트 모드에서 컴퓨터가 기억하는 정답 출력 = %d\n", computer);

	int isCorrect = 0; // 정답 여부를 판별, 오답에서 시작.




	for (i = 1; i < chance; i++)
	{
		printf("%d번째 기회(남은 기회: %d):", i, chance - i + 1);
		scanf("%d", &user);
		while (getchar() != '\n');

		//!연산자 = 참은 거짓, 거짓은 참으로
		// c언어에서 0만 거짓임.
		// 때문에 ! 연산자로 참을 만들수 있는 값은 오직 0 한개임.
		if (!(computer - user) == 0)
		{
			printf("정답");
			isCorrect = 1; //정답인 경우에만 값을 변경
			break;
		}
		else if (computer - user > 0)
		{
			printf("정답은 %d보다는 큰 수 입니다.\n", user);

		}
		else
		{
			printf("정답은 %d보다는 작은 수 입니다.\n", user);


		}
	}
	//isCorrect ==0 /정답야부를 판별하는 변수를 사용. 
	//computer != user
	//!isCorrect
		if (i>chance)
		{
			printf("\n\n\t\t 모든 기회를 소진하셨습니다.");
			printf("정답은 %d입니다", computer);
		}
	

	return 0;
}
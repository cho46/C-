#include "myheader.h"

//o(2^n): 사용하기 불가능한 알고리즘
double fibo(int n)
{
	if (n <= 0)
		return 0;
	if (n <= 2)
		return 1;

	return fibo(n - 1) + fibo(n - 2);
}

//메모이제이션(Memoization): 동적계획법(DP)의 한 기법으로 계산된 결과를 저장해서
//재사용하는 방식을 말한다. =>재귀함수 이용(Top - down 방식)
//시간복잡도: o(N), 공간복잡도: o(n)
double mz[101] = { 0 ,1,1}; //계산된 결과를 저장할 배열
double fiboMemo(int n)
{
	if (n <= 0)
		return 0;
	if (n <= 2)
		return 1;
	if (mz[n] != 0)
		return mz[n];

	return fiboMemo(n - 1) + fibo(n - 2);
}

//동적 계획법(Dynamic Programming, DP): 반복문을 사용해서 작은 문제부터 차례대로 저장해서
//큰 문제를 해결하는 방식을 말한다. (Bottom - up 방식)
//시간복잡도: o(n), 공간복잡도: O(n)
double dp[101] = { 0,1,1 };
double fiboDP(int n)
{
	if (n <= 0)
		return 0;
	if (n <= 2)
		return 1;
	if (mz[n] != 0)
		return mz[n];

	
	//DP=> 반복문을 이용하는 방식
	for (int i = 3; i <= n; i++) // 3번째 ~ n 항
	{
		dp[i] = dp[i - 1] + dp[i - 2];
	}
	return dp[n];
}

//동적 계획법(Dynamic Programming, DP) 최적화: 공간복잡도를 o(1)
//저장하지 않고 반복문 사용
double fiboLoop(int n)
{
	if (n <= 0)
		return 0;
	if (n <= 2)
		return 1;

	double prev1 = 1, prev2 = 1, result;
	for (int i = 3; i <= n; i++)
	{
		result = prev1 + prev2;
		prev1 = prev2;
		prev2 = result;
	}

	return result;
}

int main()
{
	
	
	printf("피보니차 수열의 여섯번째 항의 값은? %.0f\n",fibo(6));
	printf("피보니차 수열의 여섯번째 항의 값은? %.0f\n", fiboMemo(100));
	printf("피보니차 수열의 여섯번째 항의 값은? %.0f\n", fiboDP(100));
	printf("피보니차 수열의 여섯번째 항의 값은? %.0f\n", fiboLoop(100));
	return 0;
}
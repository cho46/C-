#include "myheader.h"

long long factorial(int n)
{
	if (n <= 1)
	{
		return 1;
	}
	return n * (factorial(n-1));
}
long long power(int x, int y)
{
	if (y == 0)
	{
		return 1;
	}

	if (y % 2 == 0)
		return power(x * x, y / 2);
	else
		return x* power(x * x, y / 2);
		// return x * power(x,y-1);
}

int gcd(int x, int y)
{
	if (y == 0)
	{
		return x;//최대공약수
	}
	return gcd(y, x % y);
}


int main()
{
	printf("%d\n", gcd(72, 30));
	//printf("%lld\n", power(2, 5));
	//printf("%lld\n", factorial(5));

	return 0;
}
#include <stdio.h>

int main()
{
	int ko, en, ma;
	double to;
	double av;
	char le;
	ko = 97.00;
	en = 79.00;
	ma = 65.00;
	to = ko + en + ma;
	av = to / 3;
	le = 'B';

	printf("국어 : %d점\n",ko);
	printf("영어 : %d점\n", en);
	printf("수학 : %d점\n", ma);
	printf("총점 : %f점\n", to);
	printf("평균 : %.2f점\n", av);
	printf("등급 : %c\n", le);

	return 0;

}
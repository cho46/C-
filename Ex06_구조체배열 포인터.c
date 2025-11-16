#include "myheader.h"

typedef struct score
{
	int kor, eng, mat;
	double avg;
}score;

int main()
{
	score s[3] = { 
		{70,70,70}, 
		{80,80,80}, 
		{90,90,90} 
	}; //구조체 배열 선언
	score* p = s; //s ==&s[0]

	s[1].avg = (s[1].kor + s[1].eng + s[1].mat) / 3.0;
	printf("2번째 값의 평균은? %.2f\n", s[1].avg);

	(p + 1)->avg = ((p + 1)->kor + (p + 1)->eng + (p + 1)->mat) / 3.0;
	printf("2번째 값의 평균은? %.2f\n", (p + 1)->avg);

	p[1].avg = (p[1].kor + p[1].eng + p[1].mat) / 3.0;
	printf("2번째 값의 평균은? %.2f\n", p[1].avg);
	return 0;
}
#include "myheader.h"
typedef struct score
{
	int kor, eng, mat;
	double avg;
}score;




int main() 
{
	/*printf("%d\n", randInt(100, 200));
	printf("%d\n", randInt(100, 50));
	printf("%d\n", randInt(1, 200));*/

	score sco = { 70,80,90 };
	//p는 score타입의 주소를 저장하는 포인터 => 포인터 변수는 무조건 64비트 시스템 기준 8byte
	score* p = &sco;

	//변수.멤버
	sco.avg = (sco.kor + sco.eng + sco.mat) / 3.0;
	printf("%.2f\n", sco.avg);

	//포인터 -> 멤버
	p->avg = (p->kor + p->eng + p->mat)/3.0;
	printf("%f\n", p->avg);
	(*p).avg = ((*p).kor + (*p).eng + (*p).mat) / 3.0;
	printf("%f\n", (*p).avg);

	return 0;
}
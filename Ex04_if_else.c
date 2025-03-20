#include <stdio.h>
#pragma warning (disable : 4996)

int main()
{
	int kor, eng, mat;

	printf("국어 영어 수학 점수 연속으로 입력(공백구분): ");
	scanf("%d %d %d", &kor, &eng, &mat);

	//if (kor>=60 && eng>=60 && mat>=60)
	//{
	//	printf("모든 과목이 60점 이상이므로 합격입니다.\n");

	//}
	//else //절때로 조건을 쓸 수 없다.
	//{
	//	printf("한 과목 이상 60점 미만으로 불합격입니다.\n");
	//}

	if (kor<60 || eng<60 || mat < 60) //불합격 조건
	{
		printf("한 과목 이상 60점 미만이므로 불합격입니다.");

	}
	else //절때로 조건을 쓸 수 없다.
	{
		printf("모든 과목이 60점 이상이므로 합격입니다.");
	}

	return 0;
}
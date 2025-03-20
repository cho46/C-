#include <stdio.h>
#pragma warning (disable : 4996)

//int main()
//{
//	int point;
//
//	case 1
//
//	printf("알고리즘 성적 입력: ");
//	scanf("%d", &point);
//
//	if (point >= 90)
//	{
//		if (point >= 97)
//		{
//			printf("당신의 학점은 A+ 입니다.");
//		}
//		else if (point >= 93)
//		{
//			printf("당신의 학점은 A0 입니다.");
//		}
//		else
//		{
//			printf("당신의 학점은 A- 입니다.");
//		}
//
//	if (point >= 80)
//	{
//		if (point >= 87)
//		{
//			printf("당신의 학점은 B+ 입니다.");
//		}
//		else if (point >= 83)
//		{
//			printf("당신의 학점은 B0 입니다.");
//		}
//		else
//		{
//			printf("당신의 학점은 B- 입니다.");
//		}
//	}
//	else
//	{
//		printf("당신의 학점은 F입니다.");
//	}
//	
//	}
//
//
//
//	return 0;
//}




int main()
{
	int point;
	char c;


	printf("알고리즘 성적 입력: ");
	scanf("%d", &point);

	//case 2

	if (point >= 90)
	{
		if (point >= 97)
		{
			c = '+';
		}
		else if (point >= 93)
		{
			c = '0';
		}
		else
		{
			c = '-';
		}
		printf("당신의 학점은 A%c 입니다", c);
		if (point >= 80)
		{
			if (point >= 87)
			{
				printf("당신의 학점은 B+ 입니다.");
			}
			else if (point >= 83)
			{
				printf("당신의 학점은 B0 입니다.");
			}
			else
			{
				printf("당신의 학점은 B- 입니다.");
			}
		}
		else
		{
			printf("당신의 학점은 F입니다.");
		}

	}



	return 0;
}
#include "myheader.h"

int main()
{

	FILE* fp;
	fp = fopen("pigs.txt", "r");
	if (fp == NULL)
	{
		printf("File open fail");
		return 0;
	}
	
	char ch;
	
	//fgetc: 파일에서 한글자를 읽어오는 함수
	int uCnt = 0;
	while (1) {
		ch = fgetc(fp);
		if (ch != ' ' && ch != '\n')
		{
			printf("%c", ch);
		}

		if (ch == EOF) //EOF: 파일의 끝 : -1		#define EOF -1
		{
			break;
		}
		if (ch >= 'A' && ch <= 'Z')
		{
			++uCnt;
			
		}
	}
	printf("\n\n대문자의 개수 %d개", uCnt);
	fclose(fp);
	return 0;





}
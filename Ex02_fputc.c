#include "myheader.h"

int main()
{
	FILE* fp;
	fp = fopen("test.txt", "w");
	if (fp == NULL)
	{
		printf("File open fail");
		return 0;
	}
	

	// 파일에 한글자 기록
	/*fputc('A', fp);
	fputc('B', fp);
	fputc('C', fp);
	*/

	while (1)
	{
		char ch;
		printf("한글자 입력: ");
		ch = getchar();
		bufferClear();
		fputc(ch, fp);
		if (ch == 'Q')
		{
			break;
		}
	}

	fclose(fp);


	return 0;
}
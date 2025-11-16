#include "myheader.h"
#define FILE_NAME_LEN 80
int main() {
	char fileName[FILE_NAME_LEN];
	printf("복사할 파일명 입력: ");
	fgets(fileName, FILE_NAME_LEN, stdin);
	removeEnter(fileName);
	strcat(fileName, ".txt");


	FILE* fIn, * fOut;

	fIn = fopen("pigs.txt", "r");
	fOut = fopen(fileName, "w");

	if (fIn == NULL || fOut == NULL)
	{
		printf("File open Fail");
		return 0;
	}

	char ch;
	//while (1)
	//{
	//	inRead = fgetc(fIn);
	//	fputc(inRead, fOut);
	//	printf("%c", inRead);

	//	if (inRead == EOF)
	//		break;

	//}


	while ((ch = fgetc(fIn)) != EOF)
	{
		fputc(ch, fOut);

	}

	printf("\n\n파일 복사 완료. pigs.txt -> %s \n\n",fileName);
	fclose(fIn);
	fclose(fOut);

	return 0;
}
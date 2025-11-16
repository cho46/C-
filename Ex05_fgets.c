#include "myheader.h"

#define LINE_LEN 80
#define WORD_LEN 40
#define MEANING_LEN 50
int main() {

	FILE* fp;
	fp = fopen("meaning.txt", "r");
	if (fp == NULL)
	{
		printf("Fail\n");
		return 0;
	}
	char line[LINE_LEN];
	char word[WORD_LEN];
	char meaning[MEANING_LEN];
	char searchWord[WORD_LEN];
	int isSearch = 0;

	printf("\n\n\t * 영/한 사전 *\n");
	printf("\n\n검색할 단어를 입력하세요. : ");
	fgets(searchWord, WORD_LEN, stdin);
	//fgets: 문자열이 저장된 주소를 리턴, 만약 저장된 문자열이 없다면 NULL을 리턴
	while (fgets(line, LINE_LEN, fp) != NULL)
	{
		removeEnter(line);
		//printf("%s", line);
		//문자열에서 문자를 검색해 검색한 위치의 주소를 리턴
		char *pos = strchr(line, ' ');
		*pos = '\0';
		strcpy(word, line); // 단어

		
		//strcmp = 두 문자얄이 같은 경우 0을 리턴하는 함수



		if (strcmp(searchWord, word) == 0)
		{
			strcpy(meaning, pos + 1);
			printf("\n\n\t\t검색한 %s의 의미는 %s 입니다.\n", searchWord, meaning);
			isSearch = 1; //검색되면 1로 번경
		
		}



		strcpy(meaning, pos + 1); // 뜻
		//printf("단어: %s / 뜻: %s\n",word, meaning);
	}
	
	fclose(fp);
	if (isSearch == 0)
	{
		printf("\n\n\t\t검색한 단어는 존재하지 않습니다.\n");
	}
	return 0;






}
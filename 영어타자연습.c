#include "myheader.h"
#define SENTENCE_LEN 255
int getSentenceCount();
char* getSentence(int count);
double getAccuracy(char *ques, char *input);

int main() {

	int sentenceCount = getSentenceCount();
	char input[SENTENCE_LEN];
	//printf("문장의 개수: %d\n", sentanceCount);
	while (1)
	{
		system("cls");
		char* ques = getSentence(sentenceCount);
		printf("%s\n", ques);
		clock_t st = clock();
		
		fgets(input, SENTENCE_LEN, stdin);
		clock_t end = clock();
		removeEnter(input);
		//맞은개수 / 전체문제길이 * 100 정확도를 리턴
		double accuuracy = getAccuracy(ques, input);
		printf("\n\n\t\t정확도 = %.2f%%,  런타입 = %dsec\n",accuuracy, (end-st)/CLOCKS_PER_SEC);

		printf("\n\n\t\t계속하려면 아무키, 종료하려면 (Q/q)를 입력: ");
		char isExit = _getch();//버퍼를 사용하지 않는 한글자 입력 함수 => 엔터 입력없이 즉시 처리하기 위해서
		if (isExit == 'Q' || isExit == 'q')
			break;
	}
	return 0;
}

int getSentenceCount()
{
	//문장의 개수를 구해 리턴
	FILE* fp;
	fp = fopen("proverb.txt", "r");
	if (fp == NULL)
	{
		return 0;
	}

	char buf[SENTENCE_LEN];
	int count = 0;
	while (fgets(buf, SENTENCE_LEN, fp) != NULL)
		++count;

	fclose(fp);
	return count;
}

char* getSentence(int count)
{
	static char question[SENTENCE_LEN];
	srand((unsigned int)time(NULL));
	int rad = rand() % count + 1;

	FILE* fp;
	if ((fp = fopen("proverb.txt", "r")) == NULL)
		return 0;

	for (int i = 0; i < rad; i++)
	{
		fgets(question, SENTENCE_LEN, fp);
		removeEnter(question);
	}

	fclose(fp);
	return question;
}

double getAccuracy(char *ques, char *input)
{
	int count = 0;
	for (int i = 0; input[i] != '\0'; i++)
	{
		if (ques[i] == input[i])
			++count;
	}
	return (double) count / strlen(ques) * 100;
}

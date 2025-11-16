#include "myheader.h"
#define WORD_LEN 255

int getWordCount();
char* getWord(int count);
void removeEnter(char* str);

int main() {
    int wordCount = getWordCount();
    srand((unsigned int)time(NULL));

        system("cls");
        char* word = getWord(wordCount);
        printf("%s\n", word);
    
    return 0;
}

int getWordCount()
{
    FILE* fp = fopen("word.txt", "r");
    if (fp == NULL)
        return 0;

    int count = 0;
    char buf[WORD_LEN];

    while (fscanf(fp, "%s", buf) == 1)
    {
        count++;
    }

    fclose(fp);
    return count;
}


char* getWord(int count)
{
    static char word[WORD_LEN];
    int rad = rand() % count; 

    FILE* fp = fopen("word.txt", "r");
    if (fp == NULL)
        return 0;

    for (int i = 0; i <= rad; i++)
    {
        if (fscanf(fp, "%s", word) != 1) {
            fclose(fp);
            return 0;
        }
    }

    fclose(fp);

    return word;
}

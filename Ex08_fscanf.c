#include "myheader.h"

int main()
{
	char name[20];
	int kor, eng, mat;
	int count;
	
	/*do
	{
		count = scanf("%d %d %d", &a, &b, &c);
		bufferClear();
	} while (count != 3);
	

	printf("입력 성공 개수 = %d\n", count);*/

	FILE* fp;

	if ((fp = fopen("score.txt", "r")) == NULL)
	{
		printf("File Open Fail\n");
		return 0;
	}
	

	while(fscanf(fp, " %s %d %d %d", name, &kor, &eng, &mat) == EOF)
		printf("%s 평균 = %.2f\n", name, (kor + eng + mat) / 3.0);


	fclose(fp);

	return 0;
}
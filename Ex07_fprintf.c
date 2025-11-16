#include "myheader.h"
int main() {

	FILE* fp;
	if ((fp = fopen("score.txt", "w")) == NULL)
	{
		printf("Fail");
		return 0;
	}

	//stdout
	fprintf(fp,"%s %d %d %d\n", "홍길동", 78, 92, 54);
	fprintf(fp, "%s %d %d %d\n", "고길동", 78, 92, 54);
	fprintf(fp, "%s %d %d %d\n", "나길동", 78, 92, 54);

	fclose(fp);
	return 0;

}
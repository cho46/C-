#include "myheader.h"

void randNumber(int *arr);
void isCorrect(int *n, int *a, int* ball, int* str, int* out);
void bufferClear();
void baseball();

int main()
{
    char ans;
    srand(time(NULL));

    while(1)
    {
        system("cls");
        baseball();

        printf("계속하시겠습니까?(Y/N): ");
        ans = getchar();
        bufferClear();
        if (ans == 'N' || ans == 'n')
            break;
    } 

    return 0;
}

void randNumber(int *arr)
{
    arr[0] = randInt(1, 9);
    do 
    {
        arr[1] = randInt(1, 9);
    } while (arr[1] == arr[0]);

    do 
    {
        arr[2] = randInt(1, 9);
    } while (arr[2] == arr[0] || arr[2] == arr[1]);
}

void isCorrect(int *n, int *a, int* ball, int* str, int* out)
{
    for (int i = 0; i < 3; i++)
    {
        if (n[i] == a[i]) 
        {
            (*str)++;
        }
        else {
            for (int j = 0; j < 3; j++)
            {
                if (n[i] == a[j] && i != j)
                {
                    (*ball)++;
                }
            }
        }
    }
}

void baseball()
{
    int n[3];
    int a[3];
    int life = 10;
    int str, ball, out;

    randNumber(n);
    printf("\n\n\t\t야구게임\n\n");
    printf("정답: %d %d %d\n\n", n[0], n[1], n[2]);

    while (life > 0)
    {
        printf("1-9까지의 서로 다른 수 3개를 입력하세요 (공백구분): ");
        scanf("%d %d %d", &a[0], &a[1], &a[2]);
        bufferClear();

        str = ball = out = 0;

        isCorrect(n, a, &ball, &str, &out);
        out = 3 - (str + ball);

        printf("결과: %d 스트라이크, %d 볼, %d 아웃\n\n", str, ball, out);

        if (str == 3) {
            printf("정답입니다!\n\n");
            return;
        }

        life--;
        printf("남은 기회: %d\n\n", life);
    }

    printf("기회를 모두 소진했습니다. 정답은 %d %d %d 입니다.\n\n", n[0], n[1], n[2]);
}
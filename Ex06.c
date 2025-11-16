#include <stdio.h>
#pragma warning (disable : 4996)

int main()
{
	int i, j, k;
    for (i = 1; i <= 7; i++) 
    {  
        for (k = 7; k > i; k--) {
            printf(" ");
        }
        
        for (j = 1; j <= i; j++) 
        {  
            if (i % 2 == 0) {  
                printf("* ");
            }
            else {  
                printf("%d ", i);  
            }
            
        }
        





        printf("\n");  
    }



	return 0;
}
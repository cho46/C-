#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#pragma warning (disable : 4996)

int main() {
    int i, j, k, l;

    
    for (i = 1; i <= 5; i++) {
        
        for (j = 1; j <= 5 - i; j++) {
            printf("# ");
        }

        
        for (k = 1; k <= 2 * i - 1; k++) {
            printf("* ");
        }

        
        for (l = 1; l <= 5 - i; l++) {
            printf("# ");
        }

        puts("");  
    }

    
    for (i = 1; i <= 4; i++) {
        
        for (j = 1; j <= i; j++) {
            printf("# ");
        }

        
        for (k = 1; k <= 9 - 2 * i; k++) {
            printf("* ");
        }

        
        for (l = 1; l <= i; l++) {
            printf("# ");
        }

        puts("");  
    }

    return 0;
}




	

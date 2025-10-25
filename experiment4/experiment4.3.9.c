//4.3.9
/*Experiment:4 Loops*/
#include <stdio.h>
int main() 
{
    printf("Name - Tanya Kumari\nSAP id - 590029168\nCourse - BCA\nBatch - 06");
    printf("\n---------------------------------\n");
    int n = 5, i, j;
    for(i = n; i >= 1; i--) {
        for(j = i; j > 1; j--)
            printf("   ");
        for(j = n; j >= i; j--)
            printf("%3d", j);
        for(j = i + 1; j <= n; j++)
            printf("%3d", j);
        printf("\n");
    }
    for(i = 2; i <= n; i++) {
        for(j = 1; j < i; j++)
            printf("   ");
        for(j = n; j >= i; j--)
            printf("%3d", j);
        for(j = i + 1; j <= n; j++)
            printf("%3d", j);
        printf("\n");
    }
    return 0;
}


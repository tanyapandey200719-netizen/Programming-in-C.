//4.3.8
/*Experiment:4 Loops*/
#include <stdio.h>
int main() {
    printf("Name - Tanya Kumari\nSAP id - 590029168\nCourse - BCA\nBatch - 06");
    printf("\n---------------------------------\n");
    int n = 5, i, j;
    for (i = 1; i <= n; i++) {
        for (j = i; j < n; j++)
            printf("   "); 
        for (j = 1; j <= i; j++)
            printf("%3d", j); 
        for (j = i - 1; j >= 1; j--)
            printf("%3d", j);
        printf("\n");
    }
    for (i = n - 1; i >= 1; i--) {
        for (j = n; j > i; j--)
            printf("   ");
        for (j = 1; j <= i; j++)
            printf("%3d", j);
        for (j = i - 1; j >= 1; j--)
            printf("%3d", j);
        printf("\n");
    }
    return 0;
}


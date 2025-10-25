/* Experiment 6: Arrays
   6.4. WAP that reads two matrices A (m x n) and B (p x q) and computes their product.
   The program should check compatibility and print matrices in proper format. */

#include <stdio.h>

int main() {
	printf("Name-Tanya kumari\nSAP ID-590029168\nBatch-B6\nCourse-BCA");
	printf("\n----------------------\n");
    int m, n, p, q, i, j, k;
    printf("Enter order of matrix A (m n): ");
    scanf("%d %d", &m, &n);
    printf("Enter order of matrix B (p q): ");
    scanf("%d %d", &p, &q);
    if (n != p) {
        printf("\nMatrix multiplication not possible.\n");
        printf("Reason: Columns of A (%d) != Rows of B (%d)\n", n, p);
        return 0;
    }
    int A[m][n], B[p][q], C[m][q];
    printf("\nEnter elements of matrix A:\n");
    for (i = 0; i < m; i++)
        for (j = 0; j < n; j++)
            scanf("%d", &A[i][j]);
    printf("\nEnter elements of matrix B:\n");
    for (i = 0; i < p; i++)
        for (j = 0; j < q; j++)
            scanf("%d", &B[i][j]);
    for (i = 0; i < m; i++)
        for (j = 0; j < q; j++) {
            C[i][j] = 0;
            for (k = 0; k < n; k++)
                C[i][j] += A[i][k] * B[k][j];
        }
    printf("\nMatrix A:\n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++)
            printf("%d\t", A[i][j]);
        printf("\n");
    }
    printf("\nMatrix B:\n");
    for (i = 0; i < p; i++) {
        for (j = 0; j < q; j++)
            printf("%d\t", B[i][j]);
        printf("\n");
    }
    printf("\nResultant Matrix C (A x B):\n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < q; j++)
            printf("%d\t", C[i][j]);
        printf("\n");
    }
    return 0;
}


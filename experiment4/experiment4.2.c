/*Experiment 4:Loops
4.2. WAP to print the multiplication table of the number entered by the user. It should be in the correct formatting.
Num*1=Num */
#include <stdio.h>

int main() {
	printf("Name-Tanya kuamri\nSAP ID-590029168\nBatch-06\nCourse-BCA");
	printf("\n----------------------------------------------------------\n");
    int num, i;

    printf("Enter a number: ");
    scanf("%d", &num);

    printf("\nMultiplication Table of %d:\n", num);

    for (i = 1; i <= 10; i++) {
        printf("%d * %d = %d\n", num, i, num * i);
    }

    return 0;
}


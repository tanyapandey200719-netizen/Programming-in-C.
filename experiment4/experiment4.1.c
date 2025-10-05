/*Experiment 4:Loops
4.1.WAP to enter number till the user wants.At the end,it should display the count of positive,negative,and 
zeroes entered,*/
#include <stdio.h>

int main() {
	printf("Name-Tanya kuamri\nSAP ID-590029168\nBatch-06\nCourse-BCA");
	printf("\n----------------------------------------------------------\n");
    int num;
    int positive = 0, negative = 0, zero = 0;
    char choice;

    do {
        printf("Enter a number: ");
        scanf("%d", &num);

        if (num > 0)
            positive++;
        else if (num < 0)
            negative++;
        else
            zero++;

        printf("Do you want to enter another number? (y/n): ");
        scanf(" %c", &choice);  

    } while (choice == 'y' || choice == 'Y');

    printf("\nCount of positive numbers: %d", positive);
    printf("\nCount of negative numbers: %d", negative);
    printf("\nCount of zeroes: %d\n", zero);

    return 0;
}



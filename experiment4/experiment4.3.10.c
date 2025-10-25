//4.3.10
/*Experiment:4 Loops*/
#include <stdio.h>
int main() 
{
printf("Name -Tanya Kumari\nSAP id -590029168\nCourse BCA\nBatch06");
printf("\n---------------------------------\n");
 int n = 5,i,j;
 for (i = 1; i <= n; i++)
 {
 for (j = i; j >= 1; j--)
 {
 printf("%d", j);
 }
 printf("\n");
 }
 return 0;
}


//4.3.5
/*Experiment:4 Loops*/
#include<stdio.h>
int main()
{
printf("Name-Tanya Kumari\nSAP id -590029168\nCourse BCA\nBatch06");
printf("\n---------------------------------\n");
int i,j,n=5;
for (i= 1;i<= n; i++)
{
for (j=i;j<n;j++)
 {
printf(" ");
 }
for(j=1;j<=i;j++)
{
printf("%d",j);
}
printf("\n");
}
return 0;
}


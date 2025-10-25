//4.3.2
/*Experiment:4 Loops*/
#include<stdio.h>
int main()
{
printf("Name-Tanya Kumari\nSAP id-590029168\nCourse-BCA\nBatch-06");
printf("\n---------------------------------\n");
int i,j;
for(i=1;i<=5;i++)
{
for(j=1;j<=i;j++)
{
printf("%d",j);
}
printf("\n");
}
return 0;
}

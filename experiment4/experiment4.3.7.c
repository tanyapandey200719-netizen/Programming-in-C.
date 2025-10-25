//4.3.7
/*Experiment:4 Loops*/
#include <stdio.h>
int main() 
{
printf("Name-Tanya Kuamri\nSAP id-590029168\nCourse BCA\nBatch06");
printf("\n---------------------------------\n");
 int i,j,n = 5;
 for(i= 0;i< n;i++) 
{
 for(j= 0;j<i;j++)
 {
 printf(" ");
 }
 for(j=1;j<=n-i;j++)
 {
 printf("%d", j);
 }
 printf("\n");
}
return 0;
}

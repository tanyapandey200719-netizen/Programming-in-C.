//Experiment2.3:Write a program to calculate compound interest.
#include<stdio.h>
#include<math.h>
int main(){
	int P;
	float CI ,r,t;
	printf("Name-Tanya kumari\nSAP ID-590029168\nBatch-B6\nCourse-BCA");
	printf("\n----------------------\n");
	printf("Enter the P:");
	scanf("%d",&P);
	printf("Enter the r(amount of interest):");
	scanf("%f",&r);
	printf("Enter the t(in years):");
	scanf("%f",&t);
	CI=P*pow((1+r/100),t) -P;
	printf("The CI is:%f\n",CI);
	return 0;
}


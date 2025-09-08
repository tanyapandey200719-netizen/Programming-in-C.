/*Experiment 2:Operators
2.1:WAP a C program to calculate the area and perimeter of a rectangle based on its length and width.*/
#include<stdio.h>
int main(){
	int l,b,area,perimeter;
	printf("Name-Tanya kumari\nSAP ID-590029168\nBatch-B6\nCourse-BCA");
	printf("\n----------------------\n");
	printf("Enter the l of rectangle:");
	scanf("%d",&l);
	printf("Enter the b of rectangle:");
	scanf("%d",&b);
	printf("Area of reactangle is:%d\n",area=l*b);
	printf("Perimeter of rectangle is:%d\n",perimeter=2*(l+b));
	return 0;
}

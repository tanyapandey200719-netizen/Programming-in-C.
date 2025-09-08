//Experiment2.4:Write a program to find roots of the quadratic equations.
#include<stdio.h>
#include<math.h>
int main(){
	float a,b,c,discriminant,root1,root2,real_part,imaginary_part;
	printf("Name-Tanya kumari\nSAP ID-590029168\nBatch-B6\nCourse-BCA");
	printf("\n----------------------\n");
	printf("Enter the cofficients a,b and c:");
	scanf("%f %f %f",&a,&b,&c);
	discriminant =b*b-4*a*c;
	
	if(discriminant>0){
		//two real roots
		root1=(-b+sqrt(discriminant))/(2*a);
		root2=(-b-sqrt(discriminant))/(2*a);
		printf("Two distict roots are:%f and %f\n",root1,root2);
		
	}
    else if (discriminant==0){
    	// Two equal real roots
    	root1=root2=-b/(2*a);
    	printf("Root1=Root2= %f\n",root1);
	}
	else{
		//complex roots
		real_part=-b/(2*a);
		imaginary_part=sqrt(-discriminant)/(2*a);
		printf("Root1=%f+%fi\n",real_part,imaginary_part);
		printf("Root2=%f-%fi\n",real_part,imaginary_part);
	}
	return 0;
}

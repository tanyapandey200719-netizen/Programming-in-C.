//Experiment-3:conditional Statements
/*3.3.WAP to compute the BMI index of the person and print the BMI values as per the following ranges.you can use the following
formula to compute BMI=weight(kgs)/Height(Mts)*Height(Mts).
#include <stdio.h>*/

int main() {
    float weight, height, bmi;
    printf("Name-Tanya kumari\nSAP ID-590029168\nBatch-B6\nCourse-BCA");
	printf("\n-------------------------------------------------------\n");
    printf("Enter weight in kg: ");
    scanf("%f", &weight);
    printf("Enter height in meters: ");
    scanf("%f", &height);
    bmi = weight / (height * height);
    printf("Your BMI is: %f\n", bmi);
    if (bmi < 15)
        printf("Category: Starvation\n");
    else if (bmi >= 15.1 && bmi <= 17.5)
        printf("Category: Anorexic\n");
    else if (bmi >= 17.6 && bmi <= 18.5)
        printf("Category: Underweight\n");
    else if (bmi >= 18.6 && bmi <= 24.9)
        printf("Category: Ideal\n");
    else if (bmi >= 25 && bmi <= 25.9)
        printf("Category: Overweight\n");
    else if (bmi >= 30 && bmi <= 39.9)
        printf("Category: Obese\n");
    else if (bmi >= 40)
        printf("Category: Morbidly Obese\n");
    else
        printf("Invalid BMI range.\n");

    return 0;
}


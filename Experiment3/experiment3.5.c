/*Experiment 3:Conditional Statements:
Experiment 3.6  
Write a program using ternary operator, the user should input the length and breadth of a rectangle, 
one has to find out which rectangle has the highest perimeter. 
The minimum number of rectangles should be three.*/ 
#include <stdio.h>
int main()
{
    printf("Name - Tanya Kumari\nSAP id - 590029168\nCourse - BCA\nBatch-06\n");
    printf("\n---------------------------------\n");

    int l1,b1,l2,b2,l3,b3,p1,p2,p3,max=0;

    printf("Enter length and breadth of rectangle 1\n");
    scanf("%d %d",&l1,&b1);

    printf("Enter length and breadth of rectangle 2\n");
    scanf("%d %d",&l2,&b2);

    printf("Enter length and breadth of rectangle 3\n");
    scanf("%d %d",&l3,&b3);

    p1 = 2*(l1+b1);
    p2 = 2*(l2+b2);
    p3 = 2*(l3+b3);

    max = (p1 > p2) ? ((p1 > p3) ? p1 : p3) : ((p2 > p3) ? p2 : p3);

    if(max == p1)
        printf("Rectangle 1 has the highest perimeter = %d\n", p1);
    else if(max == p2)
        printf("Rectangle 2 has the highest perimeter = %d\n", p2);
    else
        printf("Rectangle 3 has the highest perimeter = %d\n", p3);

    return 0;
}

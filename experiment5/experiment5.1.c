/*Experiment 5: Variable and Scope of Variable 
5.1. Declare a global variable outside all functions and use it inside various 
functions to understand its accessibility.*/ 
#include <stdio.h> 
int g = 10;  
void display() { 
printf("Inside display(): g = %d\n", g); 
} 
int main() {
printf("Name-Tanya kumari\nSAP ID-590029168\nBatch-B6\nCourse-BCA");
printf("\n----------------------\n"); 
printf("Inside main(): g = %d\n", g); 
g = 20; 
display(); 
printf("After modifying in main(): g = %d\n", g); 
return 0; 
} 


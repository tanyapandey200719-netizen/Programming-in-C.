/*Experiment 5: Variable and Scope of Variable 
5.2. Declare a local variable inside a function and try to access it 
outside the function. Compare this with accessing the global 
variable from within the function.*/ 
#include <stdio.h> 
int g = 5;  
void test() { 
int x = 10;  
printf("Inside test(): x = %d\n", x); 
printf("Inside test(): g = %d\n", g); 
} 
int main() {
printf("Name-Tanya kumari\nSAP ID-590029168\nBatch-B6\nCourse-BCA");
printf("\n----------------------\n"); 
test(); 
printf("Accessing g in main: %d\n", g);  
return 0; 
} 


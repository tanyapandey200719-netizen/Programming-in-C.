/*Experiment 04 
4.4. The population of a town is 100000. The population has 
increased steadily at the rate of 10% per year for the last 10 years. 
Write a program to determine the population at the end of each year 
in the last decade.*/ 
#include <stdio.h> 
int main() { 
printf("Name-Tanya kumari\nSAP ID-590029168\nBatch-B6\nCourse-BCA");
printf("\n----------------------\n");
float population = 100000; 
int year; 
for (year = 1; year <= 10; year++) { 
population = population + (0.1 * population); 
printf("Year %d: %.0f\n", year, population); 
} 
return 0; 
} 


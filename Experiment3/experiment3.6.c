/*Experiment 3:Conditional Statements 
Experiment 3.5
/*According to the gregorian calendar, it was Monday on the date 01/01/01. If Any year is input 
through the keyboard write a program to find out what is the day on 1st January of this year.*/ 
/* Write a C program to count number of leap year in between two inputted year by the user*/ 
#include<stdio.h> 
int isLeap(int y) 
{ 
if ((y % 400 == 0) || (y % 4 == 0 && y % 100 != 0))
{  
 return 1;  
 }  
 return 0; 
 } 
 int main()  
 { 
   
 printf("Name -Tanya Kumari\nSAP id -590029168\nCourse BCA\nBatch-06"); 
 printf("\n---------------------------------\n"); 
  int year, i,tdays=0; 
  printf("Enter the year: \n"); 
  scanf("%d", &year); 
  int count =0; 
  for( i = 1; i < year; i++) 
   { 
  if(1)  
    { 
 tdays = tdays + 366;  
 }  
  else  
  {  
 tdays = tdays + 365; 
  }  
  }  
 int day_index; 
 day_index=tdays%7; 
  switch (day_index)
   {  
 case 0: 
  printf("Monday"); 
     break; 
  case 1: 
  printf("Tuesday"); 
    break; 
  case 2:  
  printf("Wednesday"); 
    break; 
  case 3: 
  printf("Thursday"); 
    break; 
  case 4: 
  printf("Friday");  
     break; 
  case 5:  
  printf("Saturday");
   break; 
  case 6: 
  printf("Sunday"); 
   break;  
  default: 
   break; 
 } 
  return 0; 
}

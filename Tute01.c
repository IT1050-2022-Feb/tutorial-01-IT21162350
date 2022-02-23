/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {
  int mark1;
  int mark2;
  int sum;
  float avg;

  printf("Enter the marks for subject 1: ");
  scanf("%d",&mark1);

  printf("Enter the marks for subject 2: ");
  scanf("%d",&mark2);

  sum=mark1+mark2;
  avg=(float)sum/2;
  
  printf("Average: %f",avg);
  return 0;
}


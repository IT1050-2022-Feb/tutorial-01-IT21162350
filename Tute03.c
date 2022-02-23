/*Exercise 3 - Repetition

Write a C program to calculate the sum of the numbers from 1 to n.
Where n is a keyboard input.

e.g.

n -> 100
sum = 1+2+3+....+ 99+100 = 5050

n -> 1-
sum = 1+2+3+...+10 = 55 */

#include <stdio.h>
int main() {
  int n,count,sum=0;
  printf("Input the number for N: ");
  scanf("%d",&n);
  for (count=0;count<=n;count++){
    sum=sum+n;
  }
  printf("Sumation of 1 to N: %d",sum);
  return 0;
}


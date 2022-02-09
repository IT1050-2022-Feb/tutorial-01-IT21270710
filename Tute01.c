/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {
  int mark1, mark2;
  double avg=0, total=0;
  printf("Enter the mark 1 : ");
  scanf("%d", &mark1);

  printf("Enter the mark 2 : ");
  scanf("%d", &mark2);

  total = mark1 + mark2;
  avg = total/2;

  printf("Average of two marks : %.2f", avg);

  
  return 0;
}


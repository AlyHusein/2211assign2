#include <stdio.h>
/* Aly Husein
Assignment 2 Task 2*/

/* Initializing variables and functions*/
float base;
int exponent;
float expoFunction(float base, int exponent);
float result;

int main()
{
  printf("What would you like your base to be?: ");
  scanf("%f", &base);

  printf("\nWhat would you like your exponent to be?: ");
  scanf("%d", &exponent);

  result = expoFunction(base, exponent);

  printf("\nYour final result is %.2f", result);
}
/* Creating the function that does the calculation */
float expoFunction(float base, int exponent)
{
  if (exponent < 1)
    return 1;
  else
    return (base * expoFunction(base, exponent - 1));
}

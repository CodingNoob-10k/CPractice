#include <stdio.h>
#include <ctype.h>
int main()
{
  char operator;
  double num1;
  double num2;
  double result;

  printf("\nEnter an operator (+ - * /)");
  scanf("%c", &operator);

  printf("\n Enter the number 1 :");
  scanf("%lf", &num1);

  printf("\nEnter the number 2 :");
  scanf("%lf", &num2);

  switch (operator)
  {
  case '+':
    result = num1 + num2;
    printf("\nresult =%lf", result);
    break;

  case '-':
    result = num1 - num2;
    printf("\nresult =%lf", result);
    break;

  default:
    printf("\n%c is not valid");
  }

  return 0;
}

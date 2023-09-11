// this is an another method for C question, we gonna use ternary operator.
#include <stdio.h>

int main() {
  int num1, num2, small;
  printf("Enter two numbers: ");
  scanf("%d %d", &num1, &num2);
  small = num1 < num2 ? num1 : num2; // if num1 < num2, small = num1, else small = num2
  printf("The smallest number is %d\n", small);
  return 0;
}

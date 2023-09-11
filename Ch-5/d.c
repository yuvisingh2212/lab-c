#include <stdio.h>

// This function returns the power of a base raised to an exponent
double my_pow(double base, int exp) {
  double result = 1.0; // Initialize result variable
  int i; // Declare loop variable
  for (i = 0; i < exp; i++) { // Loop exp times
    result = result * base; // Multiply result by base
  }
  return result; // Return the final result
}

int main() {
  double num1, num2, result; // Declare variables
  printf("Enter a base and an exponent: "); // Prompt user for input
  scanf("%lf %lf", &num1, &num2); // Read user input
  result = my_pow(num1, (int)num2); // Call the function and cast num2 to int
  printf("%.2f raised to %.2f is %.2f\n", num1, num2, result); // Print the result
  return 0; // Exit the program
}

#include <stdio.h>
#include <math.h>

// This function returns the square root of a number
double square_root(double n) {
  return sqrt(n); // Use the built-in math function
}

int main() {
  double num, result; // Declare variables
  printf("Enter a number: "); // Prompt user for input
  scanf("%lf", &num); // Read user input
  result = square_root(num); // Call the function
  printf("The square root of %.2f is %.2f\n", num, result); // Print the result
  return 0; // Exit the program
}
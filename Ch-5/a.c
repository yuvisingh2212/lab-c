#include <stdio.h>

// This function returns the sum of digits of a number
int sum_of_digits(int n) {
  int sum = 0; // Initialize sum variable
  while (n > 0) { // Loop until n becomes zero
    sum = sum + (n % 10); // Add the last digit of n to sum
    n = n / 10; // Remove the last digit of n
  }
  return sum; // Return the final sum
}

int main() {
  int num, result; // Declare variables
  printf("Enter a number: "); // Prompt user for input
  scanf("%d", &num); // Read user input
  result = sum_of_digits(num); // Call the function
  printf("The sum of digits of %d is %d\n", num, result); // Print the result
  return 0; //Exit the program
}
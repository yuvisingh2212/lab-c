#include <stdio.h>

// This function returns the maximum number between two numbers using a pointer
int max(int *a, int *b) {
  if (*a > *b) { // If the value pointed by a is greater than the value pointed by b
    return *a; // Return the value pointed by a
  }
  else { // Otherwise
    return *b; // Return the value pointed by b
  }
}

int main() {
  int num1, num2, result; // Declare variables
  int *p1, *p2; // Declare pointers
  printf("Enter two numbers: "); // Prompt user for input
  scanf("%d %d", &num1, &num2); // Read user input
  p1 = &num1; // Assign the address of num1 to p1
  p2 = &num2; // Assign the address of num2 to p2
  result = max(p1, p2); // Call the function with pointers as arguments
  printf("The maximum number is %d\n", result); // Print the result
  return 0; // Exit the program
}
#include <stdio.h>

// This function returns how many times a number 'x' occurs in an array of numbers
int count_occurrences(int arr[], int size, int x) {
  int count = 0; // Initialize count variable
  int i; // Declare loop variable
  for (i = 0; i < size; i++) { // Loop through the array
    if (arr[i] == x) { // If the current element is equal to x
      count++; // Increment the count
    }
  }
  return count; // Return the final count
}

int main() {
  int num[10] = {1, 2, 3, 4, 5, 4, 3, 2, 1, 0}; // Declare and initialize an array
  int n = sizeof(num) / sizeof(num[0]); // Calculate the size of the array
  int x, result; // Declare variables
  printf("Enter a number to search: "); // Prompt user for input
  scanf("%d", &x); // Read user input
  result = count_occurrences(num, n, x); // Call the function with the array, its size and x as arguments
  printf("The number %d occurs %d times in the array\n", x, result); // Print the result
  return 0; // Exit the program
}

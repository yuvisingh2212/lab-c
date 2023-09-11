#include <stdio.h>

// This function prints the elements of an array in reverse order
void print_reverse(int arr[], int size) {
  int i; // Declare loop variable
  for (i = size - 1; i >= 0; i--) { // Loop from the last element to the first element
    printf("%d ", arr[i]); // Print the current element
  }
  printf("\n"); // Print a new line
}

int main() {
  int num[5] = {10, 20, 30, 40, 50}; // Declare and initialize an array
  int n = sizeof(num) / sizeof(num[0]); // Calculate the size of the array
  printf("The original array : ");
  for (int i = 0; i < 5; i++) { // Traversing through whole array
  printf("%d ", num[i]);
  }
  printf("\nThe reversed array is: "); // Print a message
  print_reverse(num, n); // Call the function again
  return 0; // Exit the program
}

#include <stdio.h>

// This function prints all the letters in the English alphabet using a pointer
void print_alphabet(char *p) {
  while (*p != '\0') { // Loop until the end of the string
    printf("%c ", *p); // Print the current character
    p++; // Increment the pointer
  }
  printf("\n"); // Print a new line
}

int main() {
  char alpha[27] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ"; // Declare and initialize a string
  char *ptr; // Declare a pointer
  ptr = alpha; // Assign the address of the string to the pointer
  printf("The English alphabet is: "); // Print a message
  print_alphabet(ptr); // Call the function with the pointer as argument
  return 0; // Exit the program
}

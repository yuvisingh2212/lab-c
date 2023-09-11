#include <stdio.h>

// This function prints "Hot" or "Cold" depending on the temperature
void hot_or_cold(double temp) {
  if (temp > 25.0) { // If temperature is above 25 degrees Celsius
    printf("Hot\n"); // Print "Hot"
  }
  else { // Otherwise
    printf("Cold\n"); // Print "Cold"
  }
}

int main() {
  double num; // Declare variable
  printf("Enter a temperature in Celsius: "); // Prompt user for input
  scanf("%lf", &num); // Read user input
  hot_or_cold(num); // Call the function
  return 0; // Exit the program
}

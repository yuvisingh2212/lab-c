// Method 2: Looping through the array
#include <stdio.h>
int main() {
    int arr[] = {10, 20, 4, 45, 99}; // An example array
    int n = sizeof(arr) / sizeof(arr[0]); // Calculates the size of the array
    int max = arr[0]; // Initializes the maximum variable with the first element of the array
    for (int i = 1; i < n; i++) { // Loops through the rest of the array
        if (arr[i] > max) { // Compares each element with the maximum variable
            max = arr[i]; // Updates the maximum variable if a larger element is found
        }
    }
    printf("The largest element is %d\n", max); // Prints the maximum variable
    return 0;
}

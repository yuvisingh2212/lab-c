// Method 1: Sorting the array
#include <stdio.h>
#include <stdlib.h>
int compare(const void *a, const void *b) { // A helper function for sorting using qsort()
    return (*(int*)a - *(int*)b); // Compares two integers and returns their difference
}
int main() {
    int arr[] = {10, 20, 4, 45, 99}; // An example array
    int n = sizeof(arr) / sizeof(arr[0]); // Calculates the size of the array
    qsort(arr, n, sizeof(int), compare); // Sorts the array in ascending order using qsort()
    printf("The largest element is %d\n", arr[n - 1]); // Prints the last element of the sorted array
    return 0;
}


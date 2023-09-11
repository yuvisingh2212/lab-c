#include <stdio.h>
#define MAX_SIZE 10 // The maximum size of the array

int main()
{
    int arr[MAX_SIZE]; // The array
    int value; // The value to insert
    int i; // A loop variable
    int current = 0; // The current index of the last element

    printf("Enter the elements of the array: \n");
    for(i = 0; i < MAX_SIZE; i++)
    {
        scanf("%d", &value); // Reads a value from the user
        if(value == -1) // If the user enters -1, stop reading
            break;
        arr[current] = value; // Inserts the value at the end of the array
        current++; // Increments the current index
    }

    printf("Enter the element to insert at the end: \n");
    scanf("%d", &value); // Reads another value from the user
    if(current < MAX_SIZE) // If the array is not full
    {
        arr[current] = value; // Inserts the value at the end of the array
        current++; // Increments the current index
    }
    else // If the array is full
    {
        printf("Error: The array is full. Cannot insert.\n"); // Prints an error message
    }

    printf("The modified array is: \n");
    for(i = 0; i < current; i++)
    {
        printf("%d ", arr[i]); // Prints the elements of the array
    }
    printf("\n");
    return 0;
}

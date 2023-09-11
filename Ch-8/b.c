#include <stdio.h>
#define SIZE 100 // Maximum string size
#define ASCIISIZE 256 // Maximum characters allowed

int main()
{
    char str[SIZE];
    int freq[ASCIISIZE]; // Store frequency of each character
    int i = 0, max;
    int ascii;

    printf("Enter any string: ");
    gets(str);

    // Initializes frequency of all characters to 0
    for(i=0; i<ASCIISIZE; i++)
    {
        freq[i] = 0;
    }

    // Finds frequency of each characters
    i=0;
    while(str[i] != '\0')
    {
        ascii = (int)str[i];
        freq[ascii] += 1;

        i++;
    }

    // Finds maximum frequency
    max = 0;
    for(i=0; i<ASCIISIZE; i++)
    {
        if(freq[i] > freq[max])
            max = i;
    }

    printf("Highest frequency character is '%c' = %d times.\n", max, freq[max]);

    return 0;
}

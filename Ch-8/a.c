#include <stdio.h>
#include <ctype.h>

int main()
{
    char str[100]; // An example string
    int i = 0; // A loop variable
    printf("Enter a string: ");
    fgets(str, 100, stdin); // Reads a string from the standard input
    while(str[i] != '\0') // Loops until the end of the string
    {
        if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u') // Checks if the current character is a lowercase vowel
        {
            str[i] = toupper(str[i]); // Converts it to uppercase using toupper()
        }
        i++; // Increments the loop variable
    }
    printf("The modified string is: %s\n", str); // Prints the modified string
    return 0;
}

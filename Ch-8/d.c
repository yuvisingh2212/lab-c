#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char str[100];
    int i, len;
    printf("Enter any string: ");
    gets(str);

    printf("Original string: %s\n", str);
    len = strlen(str); // Get the length of the string
    for(i = 0; i < len; i++) // Loop through each character
    {
        if(islower(str[i])) // If the character is lowercase
            str[i] = toupper(str[i]); // Convert it to uppercase
        else if(isupper(str[i])) // If the character is uppercase
            str[i] = tolower(str[i]); // Convert it to lowercase
    }
    printf("String after case conversion: %s\n", str);

    return 0;
}

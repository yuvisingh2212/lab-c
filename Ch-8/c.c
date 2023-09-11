#include <stdio.h>
#include <string.h>

void remove_spaces(char* s) {
    char* d = s; // Destination pointer
    do {
        while (*d == ' ') { // Skip spaces
            ++d;
        }
    } while (*s++ = *d++); // Copy non-space characters
}

int main()
{
    char str[100];
    printf("Enter any string: ");
    gets(str);

    printf("Original string: %s\n", str);
    remove_spaces(str); // Call the function
    printf("String without spaces: %s\n", str);

    return 0;
}

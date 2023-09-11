#include <stdio.h>
int main()
{
  FILE *fp; // file pointer
  char ch; // character variable
  int count = 0; // vowel counter
  fp = fopen("test.txt", "r+"); // open the file in read and write mode
  if (fp == NULL) // check if the file exists
  {
    printf("File not found\n");
    return 0;
  }
  while ((ch = fgetc(fp)) != EOF) // read each character until end of file
  {
    switch (ch) // check if the character is a vowel
    {
      case 'a':
      case 'e':
      case 'i':
      case 'o':
      case 'u':
      case 'A':
      case 'E':
      case 'I':
      case 'O':
      case 'U':
        count++; // increment the vowel counter
        break;
    }
  }
  fseek(fp, 0, SEEK_SET); // move the file pointer to the beginning of the file
  fprintf(fp, "%d", count); // write the number of vowels to the file
  fclose(fp); // close the file
  return 0;
}

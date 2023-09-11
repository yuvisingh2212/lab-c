#include <stdio.h>
int main()
{
  FILE *fp; // file pointer
  char str[100]; // string variable
  fp = fopen("test.txt", "r"); // open the file in read mode
  if (fp == NULL) // check if the file exists
  {
    printf("File not found\n");
    return 0;
  }
  fgets(str, 100, fp); // read a line from the file and store it in str
  printf("%s\n", str); // output the string to the user
  fclose(fp); // close the file
  return 0;
}

#include <stdio.h>
int main()
{
  FILE *fp; // file pointer
  char name[5][20] = {"Alice", "Bob", "Charlie", "David", "Eve"}; // name array
  int marks[5] = {90, 80, 85, 75, 95}; // marks array
  float cgpa[5] = {3.9, 3.8, 3.7, 3.6, 4.0}; // cgpa array
  char course[5][10] = {"CS101", "CS102", "CS103", "CS104", "CS105"}; // course array
  int i; // loop variable
  fp = fopen("students.txt", "w"); // open the file in write mode
  if (fp == NULL) // check if the file exists
  {
    printf("File not found\n");
    return 0;
  }
  fprintf(fp, "%-15s %-15s %-15s %-15s\n", "Name", "Marks", "CGPA", "Course"); // write the header row
  for (i = 0; i < 5; i++) // write each student's data in a row
  {
    fprintf(fp, "%-15s %-15d %-15.2f %-15s\n", name[i], marks[i], cgpa[i], course[i]);
  }
  fclose(fp); // close the file
  return 0;
}

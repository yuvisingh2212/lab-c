#include <stdio.h>
int main() {
  char c = 'a'; // change the value to see the diffrent result
  if (c >= '0' && c <= '9') {
    printf("%c is a digit\n", c);
  }
  else {
    printf("%c is not a digit\n", c);
  }
  return 0;
}

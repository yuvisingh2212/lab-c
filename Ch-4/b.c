#include <stdio.h>
#include <math.h>

int main() {
  int n, flag = 0; // we took flag as our marker.
  printf("Enter a number: ");
  scanf("%d", &n);
  // loop from 2 to sqrt(n)
  for (int i = 2; i <= sqrt(n); i++) {
    // check if n is divisible by i
    if (n % i == 0) {
      // set flag to 1 and break
      flag = 1;
      break;
    }
  }
  // check flag value
  if (flag == 0) {
    printf("%d is a prime number.\n", n);
  }
  else {
    printf("%d is not a prime number.\n", n);
  }
  return 0;
}

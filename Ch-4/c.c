#include <stdio.h>
#include <math.h>

int main() {
  int low, up, n, flag;
  printf("Enter the lower limit: ");
  scanf("%d", &low);
  printf("Enter the upper limit: ");
  scanf("%d", &up);
  printf("Prime numbers between %d and %d are:\n", low, up);
  // loop from low + 1 to up
  n = low + 1;
  while (n < up) {
    // initialize flag to 1
    flag = 1;
    // loop from 2 to sqrt(n)
    for (int i = 2; i <= sqrt(n); i++) {
      // check if n is divisible by i
      if (n % i == 0) {
        // set flag to 0 and break
        flag = 0;
        break;
      }
    }
    // check flag value
    if (flag == 1) {
      printf("%d\n", n);
    }
    // increment n by 1
    n++;
  }
  return 0;
}

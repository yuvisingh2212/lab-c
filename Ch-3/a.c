#include <stdio.h>
#include <math.h> // We use this to perfrom some math operations.

int main() {
  int num, sum = 0, temp, digits = 0;
  printf("Enter a number: ");
  scanf("%d", &num);
  temp = num; // copy of num
  // count the number of digits
  while (temp != 0) {
    digits++;
    temp /= 10; //trick to get remove unit digit
  }
  temp = num; // reset temp / re-assining the same 
  // calculate the sum of powers of digits
  while (temp != 0) {
    sum += pow(temp % 10, digits);
    temp /= 10; //trick to get remove unit digits
  }
  // check if sum is equal to num
  if (sum == num) {
    printf("%d is an Armstrong number\n", num);
  }
  else {
    printf("%d is not an Armstrong number\n", num);
  }
  return 0;
}

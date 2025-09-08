#include <stdio.h>

const char *digits[] = {"zero", "one", "two",   "three",  "four",
                        "five", "six", "seven", "eight", "nine"};

int main(void) {
  int n = 0;
  printf("Enter the number: \n");
  scanf("%d", &n);

  printf("The least significant digit of the number %d is %s \n", n,
         digits[n % 10]);

  return 0;
}

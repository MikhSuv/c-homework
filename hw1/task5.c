#include <stdio.h>

int maximum(int, int, int);

int main(void) {
  int a = 0, b = 0, c = 0;

  printf("Enter three numbers: \n");
  scanf("%d %d %d", &a, &b, &c);

  printf("The largest number is %d\n", maximum(a, b, c));

  return 0;
}

int maximum(int a, int b, int c) {

  if (a > b) {
    if (a > c) {
      return a;
    } else {
      return c;
    }
  } else if (c > b) {
    return c;
  } else {
    return b;
  }
}

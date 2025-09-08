#include <stdio.h>

void swap3(int *, int *);

int main(void) {

  int x = 12;
  int y = 321;

  printf("Initially: ");
  printf("x = %d, y = %d \n", x, y);

  swap3(&x, &y);
  printf("After swap3 function: ");
  printf("x = %d, y = %d \n", x, y);

  return 0;
}

void swap3(int *a, int *b) {
  *a = *a ^ *b;
  *b = *a ^ *b;
  *a = *a ^ *b;
}

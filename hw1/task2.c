#include <stdio.h>

void swap1(int *, int *);
void swap2(int *, int *);
void swap3(int *, int *);

int main(void) {

  int x = 12;
  int y = 321;

  printf("Initially: ");
  printf("x = %d, y = %d \n", x, y);

  swap1(&x, &y);
  printf("After the swap1 function: ");
  printf("x = %d, y = %d \n", x, y);

  swap2(&x, &y);
  printf("After the swap2 function: ");
  printf("x = %d, y = %d \n", x, y);

  swap3(&x, &y);
  printf("After swap3 function: ");
  printf("x = %d, y = %d \n", x, y);

  return 0;
}

void swap1(int *a, int *b) {
  int tmp = *a;
  *a = *b;
  *b = tmp;
}

void swap2(int *a, int *b) {
  *a += *b;
  *b = *a - *b;
  *a -= *b;
}

void swap3(int *a, int *b) {
  *a = *a ^ *b;
  *b = *a ^ *b;
  *a = *a ^ *b;
}

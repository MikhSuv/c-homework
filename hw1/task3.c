#include <stdio.h>

int main(void) {
  int n = 0;

  printf("Enter the number: \n");
  scanf("%d", &n);

  if (n > 4 && n < 14)
    printf("within range (4..14)\n");
  else
    printf("out of range\n");

  return 0;
}

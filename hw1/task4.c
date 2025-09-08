#include <stdio.h>

int main(void) {

  int n = 0;

  printf("Enter the number: \n");
  scanf("%d", &n);

  switch (n) {
  case 1:
  case 9:
  case 13:
    printf("Число %d принадлежит набору [1, 9, 13]\n", n);
    break;
  default:
    printf("Число %d не принадлежит набору [1, 9, 13]\n", n);
    break;
  }

  return 0;
}

#include <stdio.h>

int main() {
  double a[3][2] = {2.3, 1.7, 1.2, 4, 8, 60.25};
  double b[2][4] = {1.5, 13.4, 4.5, 6.3, 7.5, 0.2, 3.1415, 2.718};
  double c[3][4] = {0};

  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 2; j++) {
      printf("%lf ", a[i][j]);
    }
    printf("\n");
  }

  printf("\n");
  for (int i = 0; i < 2; i++) {
    for (int j = 0; j < 4; j++) {
      printf("%lf ", b[i][j]);
    }
    printf("\n");
  }

  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 4; j++) {
      for (int r = 0; r < 2; r++) {
        c[i][j] += a[i][r] * b[r][j];
      }
    }
  }
  printf("\n");
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 4; j++) {
      printf("%lf ", c[i][j]);
    }
    printf("\n");
  }

  return 0;
}

#include <stdio.h>

void read_array(int *, int);
void print_array(int *, int);
void swap(int *, int *);
void quick_sort(int *, int, int);

int main(void) {

  const int n = 100;
  int a[n];

  read_array(a, n);
  print_array(a, n);
  quick_sort(a, 0, n - 1);
  print_array(a, n);

  return 0;
}

void quick_sort(int *a, int L, int R) {
  int i;
  int j;
  int x;
  i = L;
  j = R;
  x = a[(L + R) / 2];

  do {
    while (a[i] < x) {
      i++;
    }
    while (x < a[j]) {
      j--;
    }
    if (i <= j) {
      swap(&a[i], &a[j]);
      i++;
      j--;
    }
  } while (i <= j);
  if (L < j) {
    quick_sort(a, L, j);
  }
  if (i < R) {
    quick_sort(a, i, R);
  }
}

void swap(int *a, int *b) {
  int tmp = *a;
  *a = *b;
  *b = tmp;
}
void read_array(int *a, int n) {
  for (int i = 0; i < n; i++) {
    // scanf("%d", a+i);
    scanf("%d", &a[i]);
  }
}
void print_array(int *a, int n) {
  for (int i = 0; i < n; i++) {
    // printf("%d ", *(a+i));
    printf("%d ", a[i]);
  }

  printf("\n");
}

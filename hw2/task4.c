#include <stdio.h>
#include <string.h>

void swap(char *, char *);
void bubble_sort(char *str);

int main() {
  char str[] = "H e l l o W o r l d";
  // char str[] = "H e l l o W o r   l     d ! ";
  // char str[] = "He llo Worl     d! ";
  // char str[] = "He llo Worl     d!";

  printf("Initial: %s\n", str);
  bubble_sort(str);
  printf("Sorted: %s\n", str);

  return 0;
}

void swap(char *a, char *b) {
  char tmp = *a;
  *a = *b;
  *b = tmp;
}

void bubble_sort(char *str) {
  int len = strlen(str);
  int i, j;

  for (i = 0; i < len - 1; i++) {
    for (j = 0; j < len - i - 1; j++) {
      int next = j + 1;
      while (next < len && str[next] == ' ')
        next++;

      if (next < len && str[j] != ' ' && str[j] > str[next]) {
        swap(&str[j], &str[next]);
      }
    }
  }
}

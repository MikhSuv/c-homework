#include <stdio.h>
#include <string.h>


void str_sort(char **a, int n);
int main(int argc, char *argv[]) {

    str_sort(argv, argc);

    for (int i = 1; i < argc; i++) {
        printf("%s\n", argv[i]);
    }
    return 0;
}

void str_sort(char **a, int n) {

    for (int i = 1; i < n - 1; i++) {
        for ( char **p = a; p < a + n - 1 - i; p++) {
            if (strcmp(*p, *(p + 1)) > 0) {
                 char *temp = *p;
                *p = *(p + 1);
                *(p + 1) = temp;
            }
        }
    }

}

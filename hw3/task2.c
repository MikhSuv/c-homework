#include <stdio.h>
#include <string.h>


void str_sort(char **a, int n);
int main() {
    // Инициализация массива указателей на строки
    const int num_strings = 21;
    char *surnames[] = {
        "Palmer",
        "Evans",
        "Gibbs",
        "Taylor",
        "Sanchez",
        "Anderson",
        "Banks",
        "Todd",
        "Smith",
        "Sims",
        "White",
        "Rodriguez",
        "Diaz",
        "Collins",
        "Myers",
        "Miller",
        "Johnson",
        "McGee",
        "Williams",
        "Williamse",
        "Jones",
    };


    str_sort(surnames, num_strings);
    for (int i = 0; i < num_strings; i++) {
        printf("%s\n", surnames[i]);
    }

    return 0;
}

void str_sort(char **a, int n) {

    for (int i = 0; i < n - 1; i++) {
        for ( char **p = a; p < a + n - 1 - i; p++) {
            if (strcmp(*p, *(p + 1)) > 0) {
                 char *temp = *p;
                *p = *(p + 1);
                *(p + 1) = temp;
            }
        }
    }

}

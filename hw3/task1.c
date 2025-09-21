#include <stdio.h>

int main(void) {
    int m, n;
    int *pm=&m, *pn = &n, *tmp = &m;
    printf("Enter the numbers: \n");
    scanf("%d %d", &m, &n);
    printf("m = %d, pointer: %p\n", *pm, pm);
    printf("n = %d, pointer: %p\n", *pn, pn);

    pm = &n;
    pn = tmp;

    
    printf("m = %d, pointer: %p\n", *pm, pm);
    printf("n = %d, pointer: %p\n", *pn, pn);
}


#include <stdio.h>

int fibonacci(int n);
int quick_fibonacci(int n, int f[100]);

int main(void) {
    
    int f[100] = {0};
    for (int i = 1; i < 30; i++){
        printf("%d: f = %d\n", i, quick_fibonacci(i, f));
    }
    return 0;
}
    
int fibonacci(int n) {
    if (n <= 2) {
        return 1;
    }
    return fibonacci(n-1) + fibonacci(n - 2);
}

int quick_fibonacci(int n, int f[100]) {
    int t;
    if (n <= 2) {
        f[n] = 1;
        return 1;
    }
    if (f[n]) {
        return f[n];
    } else {
        t = quick_fibonacci(n-1,f) + quick_fibonacci(n - 2, f);
        f[n] = t;
        return t;
    }



}

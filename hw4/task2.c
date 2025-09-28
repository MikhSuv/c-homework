#include <stdio.h>
#include <math.h>

void table( double (*func)(double), double a, double b, int n);

int main() {
    double (*p) (double);
    p = sin;
    table(p,-2*M_PI, 2*M_PI, 100);
    p = cos;
    table(p,-2*M_PI, 2*M_PI, 100);
    p = exp;
    table(p,-2*M_PI, 2*M_PI, 100);
    return 0;
}


void table(double (*func)(double), double a, double b, int n) {


    double h = (b - a)/n;

    printf("   x      |     f  \n");
    for (int i = 0; i < n; i++) {
        printf("%lf | %lf \n", a + i * h, func(a + i * h));
    }
    printf("\n");

}



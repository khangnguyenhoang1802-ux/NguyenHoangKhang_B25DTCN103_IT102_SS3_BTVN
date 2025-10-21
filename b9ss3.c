#include <stdio.h>
#include <math.h>
int main() {
    int n;

    printf("Nhap n (>1): ");
    scanf("%d", &n);

    double A = 1.0/((n-1.0)*n) + 1.0/(n*(n+1.0)) + 1.0/((n+1.0)*(n+2.0));

    printf("A = %.5f\n", A);

    return 0;
}

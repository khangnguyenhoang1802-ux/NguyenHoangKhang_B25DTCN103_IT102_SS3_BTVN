#include <stdio.h>
#include <math.h>
int main() {
    int n;

    do {
        printf("Nhap n (>1): ");
        scanf("%d", &n);

        if (n <= 1) {
            printf("Loi: n phai la so nguyen lon hon 1. Vui long nhap lai.\n");
        }
    } while (n <= 1);

    double A = (sqrt(2 * n + 1) - 1.0) / 2.0;

    printf("A = %.5f\n", A);

    return 0;
}

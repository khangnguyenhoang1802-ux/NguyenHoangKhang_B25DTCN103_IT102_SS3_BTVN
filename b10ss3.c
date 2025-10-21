#include <stdio.h>
#include <math.h>
int main(){
    int a, b;
    float S;

    printf("Nhap so nguyen duong a: ");
    scanf("%d", &a);
    printf("Nhap so nguyen duong b: ");
    scanf("%d", &b);
    
    S = sqrt(a + sqrt(b + 1)) + sqrt(b + sqrt(pow(a, 2) + pow(b, 2)));

    printf("\nKet qua: ");
    printf("%.2f\n", S);

    return 0;
}

#include <stdio.h>
int main(){
    float day, cao, dientich;

    printf("Nhap do dai canh day: ");
    scanf("%f", &day);

    printf("Nhap chieu cao: ");
    scanf("%f", &cao);
    
    dientich = (day * cao) / 2;

    printf("Dien tich tam giac la: %.2f\n", dientich);

    return 0;
}

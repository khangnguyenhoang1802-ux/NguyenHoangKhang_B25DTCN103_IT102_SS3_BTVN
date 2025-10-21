#include <stdio.h>

int main() {
    float celsius;
    float fahrenheit;

    printf("Nhap nhiet do theo do Celsius (C): ");
	scanf("%f",&celsius);
    
    fahrenheit = celsius * (9/5) + 32;

    printf("\nNhiet do da nhap la: %.2f do Celsius (C).\n", celsius);
    printf("Tuong duong voi: %.2f do Fahrenheit (F).\n", fahrenheit);

    return 0; 
}

#include<stdio.h>
#include<math.h> 
int main(){
	float r;
	float C;
	float S;

	printf("nhap ban kinh hinh tron: ");
	scanf("%f",&r);
	C = 2 * M_PI * r;
	S = M_PI * r * r; 
	printf("chu vi la = %.2f",C); 
	printf("\ndien tich la = %.2f",S); 
	return 0; 
} 

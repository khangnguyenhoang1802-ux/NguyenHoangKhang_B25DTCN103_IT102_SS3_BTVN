#include <stdio.h>
#include <math.h>
int main(){
	int a, b;
	float S;

	printf("nhap so nguyen duong a: ");
	scanf("%d", &a); 
	printf("nhap so nguyen duong b: ");
	scanf("%d", &b);

	S = (sqrt(pow(a, 2) + pow(b, 2)) / (a + b)) + ((sqrt(a) + sqrt(b)) / (a * b));
		
	printf("Ket qua:");
	printf("S = %.2f", S);  
	
	return 0; 
	} 

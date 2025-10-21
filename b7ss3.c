#include <stdio.h>
int main(){
    int n, tong;
    
    printf("Nhap mot so nguyen co 4 chu so: ");
    scanf("%d", &n);

    tong = (n / 1000)             
         + (n / 100 % 10)         
         + (n / 10 % 10)          
         + (n % 10);              

    printf("Tong cac chu so = %d\n", tong);

    return 0;
}




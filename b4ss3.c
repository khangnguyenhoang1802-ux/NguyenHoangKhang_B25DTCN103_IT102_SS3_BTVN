#include <stdio.h>
int main(){
    int soNguyen;        
    int soNghichdao = 0;  
    int banSao;            
    printf("Nhap mot so nguyen co 4 chu so: ");
    
    if (scanf("%d", &soNguyen) != 1) {
        printf("Loi nhap lieu. Vui long nhap mot so nguyen.\n");
        return 1;
    }
    
    if (soNguyen < 1000 || soNguyen > 9999) {
        printf("Canh bao: So ban nhap khong phai la so co 4 chu so. Van tiep tuc tinh toan...\n");
    }
    
    banSao = soNguyen;
    
    while (banSao != 0) {
        int chuSo = banSao % 10; 
    
        soNghichdao = soNghichdao * 10 + chuSo;
        
        banSao = banSao / 10;    
    }
    
    printf("So nghich dao la: %d\n", soNghichdao);
    
    return 0;
}

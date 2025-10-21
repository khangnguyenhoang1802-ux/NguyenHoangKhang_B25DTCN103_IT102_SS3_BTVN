#include <stdio.h>

int main() {
    int so_nguyen;      
    int so_nghich_dao = 0;  
    int ban_sao;           
    printf("Nhap mot so nguyen co 4 chu so: ");
    scanf("%d", &so_nguyen);
    
    ban_sao = so_nguyen;
    while (ban_sao != 0) {
        int chu_so = ban_sao % 10;  
        
        	so_nghich_dao = so_nghich_dao * 10 + chu_so;
        
        	ban_sao = ban_sao / 10;    
    }
    
    printf("So nghich dao la: %d\n", so_nghich_dao);
    
    return 0;
}

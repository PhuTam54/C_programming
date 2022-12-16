#include<stdio.h>

int main() {
    int n, thuong, so_du;
    int mang_so_du[100]; //khai bao 100 bien
    int dem = 0;
    int i;
    printf("Nhap mot so nguyen (0-31) ");
    scanf("%d", &n);
    
    do{
    	so_du = n % 2;
    	thuong = n / 2;
    	mang_so_du[dem] = so_du;
    	n = thuong;
    	++dem;
    		
	}while(thuong !=0);
	
	for(i = dem -1; i >= 0; --i){
		printf("%d", mang_so_du[i]);
	}
    
    return 0;
}

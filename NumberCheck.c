#include <stdio.h>
#include <conio.h>

int main(){
	char ch;
	do{
		printf("\nNhap 1 ki tu: ");
		scanf("%c", &ch); // ch = getchar();
		fflush(stdin); // xóa vùng nho dem(chi dung ki tu) 
		if (ch >= 'a' && ch <= 'z' || ch >= 'A' && ch <= 'Z'){
			printf("\nBan vua nhap chu cai");
		}else if (ch >= '0' && ch <= '9'){
			printf("\nBan vua nhap so");
		}else{
			printf("\nKi tu dac biet");
		}
		
	}while(ch!= ' ' && ch!= '\t' && ch!= '\n' );
	printf("\nBan vua nhap ki tu trang");
	return 0;
} 

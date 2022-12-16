#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
	int a, b, ch;
	char choice;
	printf("Nhap vao 2 so bat ky: ");
	scanf("%d%d", &a, &b);
	
	do{
		printf("\nPHEP TINH");
		printf("\n----------");
		printf("\n|1| Cong |");
		printf("\n----------");
		printf("\n|2| Tru  |");
		printf("\n----------");
		printf("\n|3| Nhan |");
		printf("\n----------");
		printf("\n|4| Chia |");
		printf("\n----------");
		printf("\nChoose a number (1-4) ");
		scanf("%d", &ch);
		
		switch(ch){
			case 1: 
				printf("\nTong: %d", a+b);
				break;
			case 2: 
				printf("\nHieu: %d", a-b);
				break;
			case 3: 
				printf("\nTich: %d", a*b);
				break;
			case 4: 
				if (b==0){
					printf("\nVui long nhap lai");
				}
				else{
					printf("\nThuong: %d", a/b);
					break;}
			case 5: 
				break;
			default:
				printf("\nNhap sai. Nhap lai (1-4)");
		}

		printf("\nBan co muon tiep tuc khong? (y/n) ");
		fflush(stdin);
		scanf("%c", &choice);
	}while(choice == 'y');
	
	return 0;
}
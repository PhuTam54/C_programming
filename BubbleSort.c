#include <stdio.h>
//#include <conio.h>
int main(){
	int j, i, temp, arr[6]= {12, 6, 22, 14, 8, 17};

	for (i = 0; i < 6; i++){
		for (j = 0; j <6-i-1; j++){
		if (arr[j] > arr[j+1]){
			temp = arr[j];
			arr[j]= arr[j+1];
			arr[j +1] = temp;
		}
	}
	}
	for (i=0; i < 6; i++){
		printf("\nCac phan tu sau khi da sap xep: %d ", arr[i]);
	}
	return 0;
}

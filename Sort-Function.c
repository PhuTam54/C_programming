#include<stdio.h>

int main(){
	int n = 5, array[5]={10, 20, 5, 1, 99};
	int i, j, temp;
//Khi truyen 1 mang vao cho ham thi chi co dia chi cua mang duoc truyen vao
//Truyen tham chieu => truyen dia chi passbyreference
	sortArray(n, array); //Function call
	return 0;
}
void swapFunc(int *array[j], int *array[j+1]);
	int i, j, temp;
	temp = array[j];
	array[j]= array[j+1];
	array[j +1] = temp;

void sortArray(int n, int *array){
	int i, j,temp;
	for (i = 0; i < n; i++){
		for (j = 0; j <n-i-1; j++){
		if (array[j] > array[j+1]){
			swapfunc(&array[j], &array[j+1]);
	}
	}
	}
	printf("\nSorted array: ");
	for (i=0; i < n; i++){
		printf("%d ", array[i]);
	}
}

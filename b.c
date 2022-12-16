#include<stdio.h>

int main() {
	int i, sum;
    float avg;
    int marks[10];
    
    printf("\nNhap diem 10 sv: ");
    for(i = 0; i < 10; i++){
    	scanf("%d ", &marks[i]);
    	
	}
	sum = 0;
	for(i = 0; i < 10; i++){
		sum = sum + marks[i];
	}
    printf("Total marks = %d\n", sum);
    avg = (float)sum/10;
	printf("Average marks = %f", avg); 
    
    return 0;
}

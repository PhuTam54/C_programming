#include<stdio.h>


int main(){
	int total;
	int n1 = 2, n2 = 5;
	total = add(&n1, &n2);
	printf("\nResult: %d\nn1 = %d\nn2 = %d", total, n1, n2);
}
int add(int *a, int *b){
	int result;
	*a=100;
	*b=200;
	result = *a + *b;
	return result;
	
}

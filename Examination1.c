#include <stdio.h>

int fibonacci(int x){ //Ham de quy
	if (x == 0)
		return 0;
	else if (x == 1)
		return 1;
	else
		return fibonacci(x - 1) + fibonacci(x - 2);
}
int main(){
	int n;
	do {
		printf("Enter an integer n = ");
		scanf("%d", &n);
	}while(n < 0);
	printf("Fibonacci(%d) = ", n);
	for (int i = 0; i < n; i ++){
		printf("%d ",fibonacci(i+1));
	}
	return 0;
}
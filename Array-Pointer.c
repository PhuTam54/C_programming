#include <stdio.h>
#include <malloc.h>

int main(){
	int a[10];
	
	//ptr = &a;
	//*ptr = 100;
	
	//printf("%d\n", ptr);

	//printf("%d\n", &a[0]);
	
	//printf("%d\n", a);

	int *ptr;
	int n;
	printf("Nhap so phan tu cua Array: ");
	scanf("%d", &n);
	ptr = (int*)malloc(n*sizeof(int)); //Ham cap phap bo nho dong
	
	int i;
	for(i = 0; i < n; i++){
		ptr[i] = i + 1;
		//*(ptr+i) = i +1;
	}
	for (i = 0; i < n; i++){
		printf("%d\n", ptr[i]);
	}
	for (i = 0; i < n; i++){
		printf("Cach 1 %d\n", ptr+i);
	}
	for (i = 0; i < n; i++){
		printf("Cach 2 %d\n", &ptr[i]);
	}
	return 0;
}

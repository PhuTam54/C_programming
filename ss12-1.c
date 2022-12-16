#include <stdio.h>
//#include <conio.h>
void 

int main(){
	int c, n, j, i, temp, arr[100];
	printf("How many number do you want to enter?: ");
	scanf("%d", &n);
	printf("\nEnter %d number: ", n);
	for (c = 0; c < n; c++){
		scanf("%d", &arr[c]);
	}
//buble sort
	for (i = 0; i < n; i++){
		for (j = 0; j <n-i-1; j++){
		if (arr[j] > arr[j+1]){
			temp = arr[j];
			arr[j]= arr[j+1];
			arr[j +1] = temp;
		}
	}
	}
	printf("\nSorted array: ");
	for (i=0; i < n; i++){
		printf("%d ", arr[i]);
	}
	int search, first, mid, last;
	printf("\n\nEnter number to be searched: ");
	scanf("%d", &search);
	
//binary search
	first = 0;
	last = n-1;
	mid = (last + first)/2;
	//print("%d", last ); 
	while (first <= last){
		if (arr[mid] == search){
			printf("\n%d found at location %d", search, mid+1);
			break;
		}
		else if (arr[mid] < search){
			first = mid + 1;
		}
		else{
			last = mid -1;
		}
		mid = (last + first)/2;	
	}
	if (first > last){
		printf("\nNot found!! %d is not present in the list.\n", search);
	}
	return 0;
}

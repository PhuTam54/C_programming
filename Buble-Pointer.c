#include <stdio.h>
#include <conio.h>
void main()
{
//Declaration
int *ary;
int n, i, j;
//Input elements
printf("Enter number of elements: ");
scanf("%d",&n);
ary = (int*)malloc(n*sizeof(int));

for(i=0;i<n;i++)
{
printf("Enter element number %d: ",i+1);
scanf("%d", ary + i);
}
//bubble sort
for (i=0; i<n-1; i++){
	for (j=1; j<n; j++){
		if (*(arr + j) < *(arr + i)){
			int temp = *(arr + i);
			*(ary + i) = *(ary + j);
			*(ary + j) = temp;
}
}
}
//Display elements
printf("Sorted array:\n");
for(i = 0;i<n;i++)
{
printf("%d\t", *(ary + i)); //printf("%d", ary[i]);
}
getch();
}

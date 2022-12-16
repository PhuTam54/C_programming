#include <stdio.h>
#include <conio.h>
void main()
{
//Declaration
int arr[100];
int n, i, j;
//Input elements
printf("Enter number of elements: ");
scanf("%d",&n);
for(i=0;i<n;i++)
{
printf("Enter element number %d: ",i+1);
scanf("%d",&arr[i]);
}
//bubble sort
for (i=0; i<n-1; i++)
{
for (j=0; j<n-i-1; j++)
{
if (arr[j] > arr[j+1])
{
int temp = arr[j];
arr[j] = arr[j+1];
arr[j+1] = temp;

}
}
}
//Display elements
printf("Sorted array:\n");
for(i = 0;i<n;i++)
{
printf("%d\t",arr[i]);
}
getch();
}

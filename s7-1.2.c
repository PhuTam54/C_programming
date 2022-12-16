#include <stdio.h>
#include <conio.h>
void main()
{
	//Declaration
	char arr[54];
	int n, i, j, tmp;
	//Input elements
	printf("Enter number of elements: ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
	printf("Enter element number %d: ",i+1);
	scanf("%d",&arr[i]);
	}
	//perform insertion sorting
	for (j=1; j<5; j++) {
	    i =j - 1;
	    tmp = arr[j];
	    while ( (i>=0) && (tmp < arr[i]) ) {
	        arr[i+1] = arr[i];
	        i--;
	    }
    	arr[i+1] = tmp;
	}	
	//Display elements
	printf("Sorted array:\n");
	for(i = 0;i<n;i++)
	{
	printf("%d\t",arr[i]);
	}
	getch();
}

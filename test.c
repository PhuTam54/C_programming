#include <stdio.h>
#include <conio.h>
void main()
{
//Declaration
char data[100];
int n, i, j, tmp;
//Input elements
printf("Enter number of elements: ");
scanf("%d",&n);
for(i=0;i<n;i++)
{
printf("Enter element character %d: ",i+1);
	scanf("%c",&data[i]);
}
//perform insertion sorting
	for (j=1; j<n; j++) {
	    i =j - 1;
	    tmp = data[j];
	    while ( (i>=0) && (tmp < data[i]) ) {
	        data[i+1] = data[i];
	        i--;
	    }
    	data[i+1] = tmp;
	}	
	printf("Sorted array:\n");
	for(i = 0;i<5;i++)
	{
	printf("%c\t",data[i]);
	}
	return 0;
}

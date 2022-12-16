#include <stdio.h>
#include <conio.h>
void main(){
//Declaration
int arr[100];
int n = 0;
int x, i;
//Input elements
while(1)
{
printf("Enter element number %d: ",n+1);
scanf("%d",&arr[n]);
if(arr[n] == 0)
break;
else
n++;

}
//display entered elements
printf("Entered elements: \n");
for(i=0;i<n;i++)
printf("%d ",arr[i]);
//entered element for searching
printf("\nEnter element for searching: ");
scanf("%d",&x);
//search
int j;
for(j = 0; j<n;j++)
{
if(x == arr[j])
break;
}
//display result
if(j==n)
printf("Number %d not found",x);
else
printf("Number %d found at position %d",x,j);
getch();
}

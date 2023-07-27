#include <stdio.h>
#include <stdlib.h>
int main()
{
{
int arr[10];
int i,even=0;
printf("input 10 elements in the array\n");
for(i=0;i<10;i++)
{
printf("element %d: ",i);
scanf("%d",&arr[i]);
}
printf("\nElements in the array are: ");
for(i=0;i<10;i++)
{
printf("%d ",arr[i]);
// if the entered values for array are divisible by two without a remainder then its an even number
if(arr[i]%2==0)
{
even++;
}
}
printf("\nThe number of even numbers are: %d ",even);
}
return 0;
}

#include <stdio.h>
#include <stdlib.h>
int main()
{
int arr[10];
int i;
printf("input 10 elements in the array\n");
// the for loop iterates until i is less than 10
for(i=0;i<10;i++)
{
printf("element %d: ",i);
scanf("%d",&arr[i]);
}
// elements enteres to the array are displayed horizontally
printf("\nElements in the array are: ");
for(i=0;i<10;i++)
{
printf("%d ",arr[i]);
}
printf("\n");
return 0;
}

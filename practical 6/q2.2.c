#include <stdio.h>
#include <stdlib.h>
int main()
{
int x;
printf("Enter an array size\n");
scanf("%d",&x);
int arr1[x],arr2[x],arr3[x],i;
for(i=0;i<x;i++)
{
printf("Enter a number for first array\n");
scanf("%d",&arr1[i]);
}
for(i=0;i<x;i++)
{
printf("Enter a number for second array\n");
scanf("%d",&arr2[i]);
}
for(i=0;i<x;i++)
{
// here the corresponding values of array 1 and array two are added and new array 3 is formed
arr3[i]=arr1[i]+arr2[i];
printf("%d\n",arr3[i]);
}
return 0;
}

#include <stdio.h>
#include <stdlib.h>
int main()
{
int x;
printf("Enter an array size\n");
scanf("%d",&x);
int arr1[x],tot1=0,arr2[x],tot2=0,i;
for(i=0;i<x;i++)
{
printf("Enter a number for first array\n");
scanf("%d",&arr1[i]);
// total is taken by adding the values entered to first array the current total
tot1=tot1+arr1[i];
}
for(i=0;i<x;i++)
{
printf("Enter a number for second array\n");
scanf("%d",&arr2[i]);
//total of the second array is also taken as the first array but the totals are calculate dd seperately
tot2=tot2+arr2[i];
}
printf("Scalar sum of first array= %d\n",tot1);
printf("Scalar sum of second array= %d\n",tot2);
return 0;
}

#include <stdio.h>
#include <stdlib.h>
int main()
{
int arr1[3][3],r1,c1,arr2[3][3],r2,c2,arr3[3][3],r3,c3;
// once the for loop counting columns iterate once the inner for loop iterates thrice and the loop
//for columns repeat thrice
for(c1=0;c1<3;c1++)
{
for(r1=0;r1<3;r1++)
{
printf("Enter a number for array 1 row %d column %d\n",c1,r1);
scanf("%d",&arr1[c1][r1]);
}
}
// once the for loop counting columns iterate once the inner for loop iterates thrice and the loop
//for columns repeat thrice
for(c2=0;c2<3;c2++)
{
for(r2=0;r2<3;r2++)
{
printf("Enter a number for array 2 row %d column %d\n",c2,r2);
scanf("%d",&arr2[c2][r2]);
}
}
// same process as array one and two
for(c3=0;c3<3;c3++)
{
for(r3=0;r3<3;r3++)
{
//the array 1 and array 2 are added and values stored in array 3 + =

arr3[c3][r3]=arr1[c3][r3]+arr2[c3][r3];
printf("%5d",arr3[c3][r3]);
}
printf("\n");
}
return 0;
}

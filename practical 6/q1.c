#include <stdio.h>
#include <stdlib.h>
int main()
{
//declare variables for minimum value, maximum value and average. Also an array with size
int arr[10],max=0,min,tot=0,i,counter=1;
float avg;
//for loop iterates until i is lees than 10
for(i=0;i<10;i++)
{
printf("Enter %d number\n",counter);
scanf("%d",&arr[i]);
 // highest entered value to the array is the maximum number
if(arr[10]>max)
counter=counter+1;

{
max=arr[i];
}
//least number of the array is the minimum number
if(arr[i]<min)
{
min=arr[i];
}
tot=tot+arr[i];
}
//average is taken by dividing sum of all ten numbers by 10
avg=tot/10;
printf("Max = %d\n",max);
printf("Min = %d\n",min);
printf("Average = %.2f\n",avg);
//the condition is given in descending order to reverse the array values. starting from 9
//until i is greater or equal to zero the loop iterates
for(i=9;i>=0;i--)
{
printf("%d\n",arr[i]);
}
return 0;
}

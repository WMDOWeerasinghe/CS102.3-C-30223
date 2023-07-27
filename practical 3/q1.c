#include <stdio.h>
#include <stdlib.h>
int main()
{
// declare two variables to input the two numbers
int x,y;
printf("Enter two numbers\n");
scanf("%d%d",&x,&y);
//use if and else condition for the comparison of the two numbers and to find the highest out of it
if(x>y)
printf("The highest number is %d",x);
else
printf("The highest number is %d",y);
return 0;
}

#include <stdio.h>
#include <stdlib.h>
int main()
{
// declare three variables for the user to input three numbers
int x,y,z;
printf("Enter three numbers");
scanf("%d%d%d",&x,&y,&z);
// as there are three numbers present && and > operator is used for comparison and find the
//highest value
if(x>y&&x>z)
printf("The highest value id %d\n",x);
else if(y>z)
printf("The highest value is %d\n",y);
else
printf("The highest value is %d\n",z);
// here the && and < operators used to find the lowest number
if(x<y&&x<z)
printf("The lowest value is %d\n",x);
else if(y<z)
printf("The lowest value is %d\n",y);
else
printf("The lowest value is %d\n",z);
return 0;
}

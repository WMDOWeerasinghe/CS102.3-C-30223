#include <stdio.h>
#include <stdlib.h>
int main()
{
int no,tot=0,val,x,pwr;
printf("Enter a number\n");
scanf("%d",&x);
no=x;
while(no!=0)
{
//Armstrong numbers are sum of the digit raised ti the third power is equal to the number
val=no%10;
pwr=val*val*val;
tot=tot+pwr;
no=no/10;
}
if(tot==x)
{
printf("It's an armstrong number");
}
else
{
printf("It's not an armstrong number");
}
return 0;
}

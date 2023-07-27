#include <stdio.h>
#include <stdlib.h>
int main()
{
int x,no,tot=0,y;
printf("Enter the Number ");
scanf("%d",&no);
x=no;

//loop repeats until the entered number is less than zero
while(no>0)
{
//find the last didgit of the number and add to total and remove the last digit from number
y=no%10;
tot=tot+y;
no/=10;
}
printf("The factorial of %d is %d",x,tot);
return 0;
}

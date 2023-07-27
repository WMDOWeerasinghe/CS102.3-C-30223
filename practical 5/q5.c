#include <stdio.h>
#include <stdlib.h>
int main()
{
//input the number
int x=0,num;
printf("Enter the Number ");
scanf("%d",&num);
while(num>0)
{
x=x*10;
x=x+num%10;
num=num/10;
 }
printf("The reverse of the number is %d",x);

 return 0;
}

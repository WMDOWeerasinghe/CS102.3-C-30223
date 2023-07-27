#include <stdio.h>
#include <stdlib.h>
int main()
{
int x,y;
printf("Enter two numbers");
// when the first number is divided by the second number and if the remainder is zero it is a
//multiple of the second number
scanf("%d%d",&x,&y);
if(x%y==0)
printf("First number is a multiple of the second");
// if the remainder is not zero its not a multiple
else
printf("First number is not a multiple of the second");
return 0;
}

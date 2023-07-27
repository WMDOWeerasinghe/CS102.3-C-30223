#include <stdio.h>
#include <stdlib.h>
int main()
{
int a,b;
printf("Enter the two numbers");
scanf("%d%d",&a,&b);
//change the variable positions inside printf to swap the values
printf("The values before swap:%d %d\n",a,b);
printf("The values after swap:%d %d\n", b,a);
return 0;
}

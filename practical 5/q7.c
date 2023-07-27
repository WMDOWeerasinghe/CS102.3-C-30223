#include <stdio.h>
#include <stdlib.h>
int main()
{
int no1=0,no2=1,no,i;
for(i=0;i<10;i++)
{
if (i<=1)
no=i;
else
{
//the first two numbers 0 and 1 are added and the answer is obtained and to the obtained previous
//second number is added
no=no1+no2;
no1=no2;
no2=no;
}
printf("%d\n",no);
}
return 0;
}

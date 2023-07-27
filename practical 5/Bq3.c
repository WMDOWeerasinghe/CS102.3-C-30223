#include <stdio.h>
#include <stdlib.h>
int main()
{

int no,tot,avg,pg=0,counter=1;
//until the counter is 10 it iterates
while(counter<=10)
{
printf("enter the price of the item%d: ",counter);
scanf("%d",&no);
tot=tot+no;
//average is sum of all the ten prices divided by 10
avg=tot/10;
// if the pric is greater than 200 its counted
if(no>200)
pg=pg+1;
counter=counter+1;
}
printf("The average:%d\nno.of items price greater than price 200:%d\n",avg,pg);
return 0;
}

#include <stdio.h>
#include <stdlib.h>
int main()
{
int counter=1,pos=0,neg=0,zero=0,no;
while(counter<=10)
{
printf("enter number %d\n",counter);
scanf("%d",&no);
//numbers greater than one are positive
if(no>0)
pos=pos+1;
//numbers less than zero are negative
else if(no<0)
neg=neg+1;
else
//if the numbers either negative nor positive then its counted as zero
zero=zero+1;
counter=counter+1;
}
printf("number of\npositive numbers:%d\nnegative numbers:%d\nzeroes:%d",pos,neg,zero);
return 0;
}

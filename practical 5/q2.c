#include <stdio.h>
#include <stdlib.h>
int main()
{
int tot=0,avg,no,counter=1;
while(counter<=10)
{
printf("Enter the mark %d :",counter);
scanf("%d",&no);
//input marks added to current total will give the final total
tot=tot+no;
//final total divided by 10 is the average
avg=tot/10;
//counter is used to count each marks entered
counter=counter+1;
}
printf("The total marks are : %d\nThe average mark is : %d",tot,avg);
if(avg>=50)
printf("\nPass!");
else
printf("\nFail!");
return 0;
}

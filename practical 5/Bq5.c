#include <stdio.h>
#include <stdlib.h>
int main()
{
// declare variables for Employee number, Over Time Payment, and the percentage of employees
//whose Over Time Payment exceeding the Rs. 4000/-.
int empno=0,whrs=0,overpy=0,overpytot=0,higher=0,i=0;
float per;
while(empno!=-999)

{
printf("Enter employee number\n");
scanf("%d",&empno);
printf("Enter working hours\n");
scanf("%d",&whrs);
if(whrs>=40)
{
//If the working hours are greater than or equal to 40 then then 200 per hours is added
overpy=whrs*200;
higher=higher=1;
}
else
{
//if working hours less than 40, 150 per hour is added
overpy=whrs*150;
}
overpytot=overpytot+overpy;
i=i+1;
}
per=(higher*100/i);
printf("Enter employee number = %d\n",empno);
printf("Overtime payment = %d\n",overpytot);
printf("percentage of more than 4000 = %f\n",per);
return 0;
}

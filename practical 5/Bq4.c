#include <stdio.h>
#include <stdlib.h>
int main()
{
int empno=0,bsal,no=0,counter=0;

while(empno!=-999 && counter<=5)
{
printf("enter the employee number and the basic salary\n");
scanf("%d %d",&no,&bsal);
// if basic salary is greater than or equal to 5000 its counted for the output
if(bsal>=500)
no=no+1;
counter=counter+1;
}
printf("the employee with basic salary greater than or equal to 5000: %d\n",no);
return 0;
}

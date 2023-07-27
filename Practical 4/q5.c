#include <stdio.h>
#include <stdlib.h>

int main()
{
//Declare a variable to input the month
int m;
printf("Enter the month number 1 to 12(where 1 is january and 12 is december)\n");
scanf("%d",&m);
switch(m)
{
case 1:
case 3:
case 5:
case 7:
case 8:
case 10:
case 12:
printf("\n 31 days in this month");
break;
case 4:
case 6:
case 9:
case 11:
printf("\n 30 days in this month");
break;
case 2:
printf("\n 29 days in this month");
// default used to execute the statement if the input doesn’t fix with any of the above cases
default:
printf("\n please enter a valid number");
}
return 0;
}

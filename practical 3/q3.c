#include <stdio.h>
#include <stdlib.h>
int main()
{
//declare variables to input name, basic salary, increment the salary and to output the new salary
//after increment
float bsal,nsal,inc;
char name[20];
printf("Enter your name:");
scanf("%s",&name);
printf("Enter your basic salary:");
scanf("%f",&bsal);
// increment the basic salary by 5% if the basic salary is less than 5000
if(bsal<5000)
inc=bsal*0.05;
//increment the salary by 10% if the basic salary is greater than 5000 and less than 10000
else if(bsal>5000&&bsal<10000)
inc=bsal*0.10;
//increment the salary by 15% if the basic salary is greater or equal to 10000
else
inc=bsal*0.15;
// and the incremented amount to the basic salary to find the new salary
nsal=bsal+inc;
// use .2 infront of %f to find the amount to only two decimal places
printf("%s new salary:%.2f",name,nsal);
return 0;
}

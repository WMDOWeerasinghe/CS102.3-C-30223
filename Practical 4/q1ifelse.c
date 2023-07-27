#include <stdio.h>
#include <stdlib.h>
int main()
{
//as switch condition is used you should declare two variables to input the number and check
//whether the number is divisible by 2 without a remainder or not before using the switch
//statement
int no,av;
printf("Enter the Number ");
scanf("%d",&no);
av=no%2;
switch(av)
{
// two cases are possible either even or odd
case 0 : printf("This is an Even Number");break;
case 1 : printf("This is an Odd Number ");break;
}
return 0;
}

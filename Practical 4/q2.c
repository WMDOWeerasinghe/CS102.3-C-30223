#include <stdio.h>
#include <stdlib.h>
int main()
{
//declare variables to choose an operator,input two numbers and to output the result
char opt;
int no1,no2;
float result;
printf("Enter two Numbers");
scanf("%d %d",&no1,&no2);
printf("\n1. +\n2. -\n3. *\n4. /\n\n");
printf("Choose an Operator");
scanf(" %c",&opt);
switch(opt)
{
//each function of the operator is given under each case
case'+': result=no1+no2;break;
case'-': result=no1-no2;break;
case'*': result=no1*no2;break;
case'/': result=(float)no1/(float)no2;break;
//default statement is given if the choosed option doesn’t fits any case the default statement is executed
default: printf("ERROR !\n");
}
 printf("\nResult: %d %c %d = %.2f",no1,char,no2,result);
return 0;
}

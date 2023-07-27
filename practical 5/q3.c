#include <stdio.h>
#include <stdlib.h>
int main()
{
int counter,no,fact=1;
printf("Enter the number : ");
scanf("%d",&no);
for(counter=1;counter<=no;counter++)
{
//factorial is found by multiplying all the numbers less than the entered number
fact=fact*counter;
}
printf("Factorial of %d = %d\n",no,fact);
return 0;
}

#include <stdio.h>
#include <stdlib.h>
int main()
{
int no;
//declare a variable to input a number
printf("Enter the Number");
scanf("%d",&no);
//the == relationl operator is used to find whether the entered number divided by two, divides
//without a remainder
if(no%2==0)
// if the inout number divides by 2 without a remainder is an even number
printf("\nThis is an Even Number");
else
// when the number input is divided by 2 if there’s a remainder then the number is odd
printf("\nThis is an Odd Number");
return 0;
}

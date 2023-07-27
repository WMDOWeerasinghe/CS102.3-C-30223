#include <stdio.h>
#include <stdlib.h>
int main()
{
//use float as the data type as decimal numbers
float no1,no2, avg; //declare a variable to count the average
printf("Enter two decimal numbers");
scanf("%f%f",&no1,&no2);
//average is calculated by dividing the sum of the two numbers by 2
avg=(no1+no2)/2;
printf("The average is :%.2f\n",avg);
return 0;
}

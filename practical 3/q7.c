#include <stdio.h>
#include <stdlib.h>
int main()
{
//declare variables to input the salesman’s basic salary ,monthly sales, hours of working and city
//and a variable to output the gross remuneration
float bsal,ms,add,bonus,gr,t;
char city;
printf("Enter the details of the salesman (Basic Salary, Monthly Sales, Working Years,City)");
scanf("%f %f %f %c",&bsal,&ms,&t,&city);
//if and else condition is used since there is a comparison between working hours
if(t>5)
add=0.1*bsal;
else
add=0;
// here if and else condition used to compare whether the city is Colombo or not, the ==
//relational operator checks whether values of the two operands are equal
if(city=='C')
// if city is Colombo 2500 is added to the basic salary
add=2500;
else
add=0;
//here also the relational operators used to check whether the values are greater or equal
if(ms>0 && ms<=25000)
// if the sales are less than or equal to 25000 , the salesman get a bonus of 10%
bonus=ms*0.1;
else if(ms>25000 && ms<50000)
//if the sales are between 25000 and 50000, the salesman get a bonus of 12%
bonus=ms*0.12;
else
//if the sales are greater than 50000 , the salesman get a bonus of 15%
bonus=ms*0.15;
//gross remuneration is the sum of the basic salary, values added if city is Colombo and the
//bonus salesman get for monthly sales
gr=bsal+add+bonus;
printf("The monthly remuneration of a salesman is : %f",gr);
return 0;
}

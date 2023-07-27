#include <stdio.h>
#include <stdlib.h>
int main()
{
int max=0, min,counter=1,tot=0,marks,avg=0;
while(counter<=10)
{

printf("Enter %d marks\n",counter);
scanf("%d",&marks);
//maximum marks is the highest of entered numbers
if(marks>max)
{
max=marks;
}
//minimum marks is the least of the entered numbers
else if(marks<min)
{
min=marks;
}
//the entered marks added to the current total gives the final total
tot=tot+marks;
counter=counter+1;
}
// average is taken by dividing the final total by 10
avg=tot/10;
printf("maximum marks=%d\nminimum marks=%d\naverage=%d\n",max,min,avg);
return 0;
}

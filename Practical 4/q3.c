#include <stdio.h>
#include <stdlib.h>
int main()
{

// variables are declared to choose the option, to input radius and to output the results of relavant choices
int choice,r;
float circumference,area,volume;
printf("Input 1 for circumference of a circle\n");
printf("Input 2 for area of a circle \n");
printf("Input 3 for volume of a sphere \n");
printf("Input your choice : ");
scanf("%d",&choice);
switch(choice)
{
case 1:
printf("Input radius of the circle : ");
scanf("%d",&r);
//circumference is calculated by 2πr equation
circumference=2*3.14*r;
printf("The circumference is : %f\n",circumference);
break;
case 2:
printf("Input radius of the circle : ");
scanf("%d",&r);
//area of a circle is calculated by πr
//2 equation
area=3.14*r*r;
printf("The area is : %f\n",area);
break;
case 3:
printf("Input radius of the circle : ");
scanf("%d",&r);
//volume of a sphere is calculated by 4/3πr
//3 equation
volume=4/3*3.14*r*r*r;
break;
printf("The volume is : %f\n",volume);
}
return 0;
}

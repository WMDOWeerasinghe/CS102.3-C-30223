#include <stdio.h>
#include <stdlib.h>
int main()
{
float dia,r,cir,area;
printf("Enter the radius:");
scanf("%f",&r);
//diameter is twice the radius in a circle
dia=2*r;
//the equation to find circumference of a circle is 2πr
cir=2*3.14159*r;
//the equation to find area of a circle is 2πr2
area=2*3.14159*r*r;
printf("The diameter is:%f\nThe circumference is:%f\nThe area is:%f\n",dia,cir,area);
return 0;
}

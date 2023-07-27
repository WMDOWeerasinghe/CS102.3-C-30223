#include <stdio.h>
#include <stdlib.h>
int main()
{
//declare 3 variables to input temperature in Fahrenheit, convert it to Celsius and print the Celsius
//value
float fah,cel,x;
printf("Enter the temperature in farenheit");
scanf("%f",&fah);
// x is used for the ease of calculation
x=fah-32;
cel=x*5/9;
printf("The temperature in celcius is %f",cel);
return 0;
}

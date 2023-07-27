#include <stdio.h>
#include <stdlib.h>
int main()
{
//declare two variables to input age and birth year and use integer as data type, use char to input
//the name as its not a numerical value, it’s a character
int byear, age;
char name[20];
printf(" Enter your name\n");
scanf("%s",&name);
printf("Enter your birth year\n");
scanf("%d",&byear);
//birth year is calculated by subtracting the birth year from the current year
age=2023-byear;
printf("%s is %d years old", name,age);
return 0;
}

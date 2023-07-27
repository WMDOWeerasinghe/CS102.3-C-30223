#include <stdio.h>
#include <stdlib.h>
int main()
{
//declare a variable to input numbers and a variable to get the summation
int num,sum;
printf("Enter positive numbers:\n");
sum = 0;
scanf ("%d", &num);
//-1 is less than zero therefore the condition is given as number should be greater than zero
while (num > 0)
{
sum += num;
scanf ("%d", &num);

}
printf ("Sum = %d ", sum);
return 0;
}

#include <stdio.h>
#include <stdlib.h>
int main()
{
int c,x;
// when c=1, the inner for loop execute until x is less than c, and c executes until its 5 and each
//time the inner for loop executes until x is less than c
for(c=1;c<=5;c++)
{
for(x=1;x<=c;x++)
{
printf("*");
}
printf("\n\n");
}

return 0;
}

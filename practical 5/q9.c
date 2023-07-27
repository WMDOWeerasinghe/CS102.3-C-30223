#include <stdio.h>
#include <stdlib.h>
int main()
{
int no=65;
char c;
//here starting from 65 , 26 numbers are printed forward
for(c='A';c<='Z';c++)
{
printf("%c = %d\n",c,no);
no=no+1;
}
return 0;
}

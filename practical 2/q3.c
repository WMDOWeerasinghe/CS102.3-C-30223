#include <stdio.h>
#include <stdlib.h>
int main()
{
// declare three variables to input distance, time and find the average
int distance,time,avg;
printf("Distacne travelled=");
scanf("%d",&distance);
printf("Time taken=");
scanf("%d",&time);
//calculate the average by dividing the distance travelled by the time taken
avg=distance/time;
printf("The average speed is %dms-1", avg);
return 0;
}
